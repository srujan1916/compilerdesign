#include"program.h"


void generateToken(char* name ,char *value, int nec){
    strcat(curToken, name);
    strcat(curToken, " ");
    
    if(exprFlag){
        strcat(exprToken, name);
        strcat(exprToken, "!");//seperator
        exprCount++;
    }
    
   
    
    fprintf(tempFile, "<%s %s>\n",name, value);
}

int yyclearin(char *s){
    printf("inside clear %s\n",s);
}

int yyerror(char *s){
    semiFlag = 1;
    printf("%c[3m error in line No %d\n%c[0m",27,lineNo-1,27);
    printf("%c[4mLine = > %s\n%c[0m",27,curToken,27);
}

void insert(char *type, char* name, char *value,int flag ){
    ++k;
    if(flag == 1){
        if(!checkTableToInsert(name)){
            
            strcpy(arr[k-1].type, type);
            strcpy(arr[k-1].name, name);         
            strcpy(arr[k-1].value, value);
            
            arr[k-1].lineNO = lineNo;

            arr[k-1].Bscope = Bscope;
            arr[k-1].scope = scope;
            if(scope == 0){
                arr[k-1].Gscope = 1;
                Gscope = 1;
            }
            else{
                arr[k-1].Gscope = 0;
                Gscope = 0;
            }

        }
        else {
            --k;
            printf("=>ERROR : Multiple declarations of \'%s\' in line No %d\n",name,lineNo);
        }
    }
    else if(flag == 2){
        --k;
        update(name, value);    
    }
    else if(flag == 3){
        if(!checkTableToInsert(name)){
            strcpy(arr[k-1].type, type);
            strcat(arr[k-1].type, "::func");
            strcpy(arr[k-1].name, name);         
            strcpy(arr[k-1].value, value);
            arr[k-1].lineNO = lineNo;

            arr[k-1].Bscope = Bscope;
            arr[k-1].scope = scope;
            if(scope == 0){
                arr[k-1].Gscope = 1;
                Gscope = 1;
            }
            else{
                arr[k-1].Gscope = 0;
                Gscope = 0;
            }
        }
        else{
            --k;
            printf("ERROR : Multiple declarations of function \'%s\' in line No %d\n",name,lineNo);
        }
    }
    else if(flag == 4){
            strcpy(arr[k-1].type, type);
            strcpy(arr[k-1].name, name);         
            strcpy(arr[k-1].value, value);
        
            arr[k-1].lineNO = lineNo;
            arr[k-1].Bscope = Bscope;
            arr[k-1].scope = scope;
            arr[k-1].Gscope = Gscope;
    }
}

void update(char *name, char* val){
    for(int i=0;i<k;i++){
        if(!strcmp(arr[i].name, name) && arr[i].scope<=scope){
            strcpy(arr[i].value, val);
            return;
        }
    }
    printf("Warning : Nothing to Update\n");
    return;
}

int checkTableToInsert(char *name){
    //1 = already in the table
    //0 = not present in the table
  
    for(int i=0;i<k;i++){
        if(!strcmp(arr[i].name,name)){
            
            if(arr[i].Gscope == Gscope){ // check for clash in global variable 
                return 1;
            }
            if(scope == arr[i].scope && arr[i].Bscope == Bscope){ //clash in local scope
                return 1;
            }
           
        }
        
    }
    return 0;
}


int checkTableToAccess(char *name){
    for(int i=0;i<k;i++){
        if(!strcmp(arr[i].name,name)){
            //printf("%s %d %d\n",name, scope, Bscope);
            if(scope >= arr[i].scope && Bscope == arr[i].Bscope){
                return 1;
            }            
        }
    }
    return 0;
}


int checkType(char *type, char* value){
    int dot = 0;
    //printf("len %d",strlen(value));
    if(!strcmp(type, "double") || !strcmp(type, "float")){
        for(int i=0; i<strlen(value)-1; i++){
            if(value[i] =='.') dot++;
            else if(dot == 2) return 0;
            else if(!(value[i]>='0' && value[i] <= '9')){
                return 0;
            }

        }
    }
    
    else if(!strcmp(type, "int")){
        for(int i=0;i<strlen(value); i++){
           
            if(!((value[i]>='0' && value[i] <= '9') || value[i] == '.') ){
                
                if(!checkTableToAccess(value)){
                    return 0;
                }
                else
                    return 1;
            }
        }
    }
    return 1;   
}


void displayTable(){
    fprintf(yyout, "line no\ttype\tname\tvalue\tbscope\tscope\tGscope\n");
    for(int i=0;i<k;i++){
        
            fprintf(yyout,"%d,%s,%s,%s,%d,%d,%d\n", arr[i].lineNO,arr[i].type, arr[i].name, arr[i].value, arr[i].Bscope, arr[i].scope,arr[i].Gscope);
    }
    
}

char* getValue(char *name){
    for(int i=0;i<k;i++){
        if(!strcmp(arr[i].name, name)){
            return arr[i].value;
        }
    }
    return "";    
}

double strToDouble(char *s){
    double temp;
    sscanf(s, "%lf", &temp);
    return temp;
}

char* operate(char *s1, char* s2, int val){
    double a1 = strToDouble(s1);
    double a2 = strToDouble(s2);
    //printf("a1 =%lf, a2 =%lf\n",a1,a2);
    if(val == 1)
        sprintf(tempArr, "%lf", a1+a2);
    else if(val == 2)
        sprintf(tempArr, "%lf", a1-a2);
    else if(val == 3){
        sprintf(tempArr, "%lf", a1*a2);}
    else if(val == 4)
        sprintf(tempArr, "%lf", a1/a2);
    return tempArr;
}

char *correct(char *val, char *type){
    
    if(!strcmp(type,"int")){
        int temp = atoi(val);
        sprintf(tempArr, "%d", temp);
        return tempArr;    
    }
    else if(!strcmp(type, "float") || !strcmp(type, "double")){
        char *end;
        float temp = strtof(val,&end);
        
        sprintf(tempArr, "%f", temp);
        return tempArr;
    }
}



void displayTree(){
    
  //  for(int i=0;i<expL;i++) printf("%s\n",exprLink[i]->name);

    for(int i=tl-2; i>=0; i--){
        fprintf(treeFile, "%s,%s\n", treeLink[i]->parent, treeLink[i]->name);
    }
    for(int i=exprNoTemp-1;i>=0;i--){
        AssignParentLink(exprLink[ exprNo[i]-1 ]);
    }
    addLevelNoExpr();
        
    for(int i=expL-1;i>=0; i--) fprintf(treeFile, "%s,%s\n", exprLink[i]->parent, exprLink[i]->name);
}


void AssignParentLink(node *cur){
    if(!cur->childArrLink[0]) {
        return;
    }

    strcpy(cur->childArrLink[0]->parent, cur->name);
    strcpy(cur->childArrLink[1]->parent, cur->name);
    
    AssignParentLink(cur->childArrLink[0]);
    AssignParentLink(cur->childArrLink[1]);    
}


char* intToStr(char* s, int n){
    char temp[20];
    strcpy(tempArr, s);
    sprintf(temp, "%d", n);
    strcat(tempArr, temp);
    return tempArr;    
}

node* CreateNode(char *parent, char* name, int n){
    node *new = (node*)malloc(sizeof(node));
    strcpy(new ->parent, parent);
    strcpy(new->name, name);
    
    new->nLink =  n;
    treeLink[tl++] = new;
    new->temp =0;
    
    
    if(!strcmp(name,"declaration") || !strcmp(name,"") ) new->isT = true;
    else new->isT = false;
    return new;
}

node *getParent(char *name, int index){
    for(int i=index;i<tl;i++){
        if(!strcmp(name, treeLink[i]->name)){
            return treeLink[i];
        }
    }
    return NULL;
}

void CreateTree(){
    memset(checkTree, false, sizeof(checkTree));

    for(int i=tl-1; i>=0; i--){
        //node *par = getParent(treeLink[i]->parent, i+1);
        if(treeLink[i]->isT) AssignLinkRev(i);
        else
            AssignLink(i);
       
        
    }
}
//assign list is reversed than others



void AssignLinkRev(int pNo){
    node *cur = treeLink[pNo];
    int No_ofLink = 0;
    
    for(int i=0; i<tl; i++){
        if(No_ofLink == cur->nLink) return;
        
        if(!checkTree[i]){
            if(!strcmp(treeLink[i]->parent,cur->name)){
                
                cur->childArrLink[No_ofLink++] = treeLink[i];
                checkTree[i] = true;
            }
        }
    }
}

void AssignLink(int pNo){
    node *cur = treeLink[pNo];
    int No_ofLink = 0;
    
    for(int i=tl-1; i>=0; i--){
        if(No_ofLink == cur->nLink) return;
        
        if(!checkTree[i]){
            if(!strcmp(treeLink[i]->parent,cur->name)){
                
                cur->childArrLink[No_ofLink++] = treeLink[i];
                checkTree[i] = true;
            }
        }
    }
}
void Inorder(node *Start, int level){
/*    for(int i=0;i<tl;i++){
        printf("parent = %s    name = %s   link = %d\n",treeLink[i]->parent, treeLink[i]->name,treeLink[i]->nLink);
    }

  */  if(Start){
        for(int i=0;i<Start->nLink;i++){
            
            Inorder(Start->childArrLink[i], level +1);
        }
        Start->level = level;
        if(!Start->nLink)
            strcpy(Start->name , cat(Start->name, childLevel++));
        else{
            
            strcpy(Start->name , cat(Start->name, level));
         }
        strcpy(Start->parent , cat(Start->parent, level-1));
       // printf("%s \t",Start->name);
    }
}

char *cat(char *one, int two){
    char tt[30];
    sprintf(tt, " (%d)",two );
    strcpy(tempArr,  one);
    strcat(tempArr, tt);
    return tempArr;
}

void CreateExprNode(char *token,char *par){
    if(token == NULL) return;
    char *temp = token;
    temp = strtok(NULL, "!");
    CreateExprNode(temp,par);
    CreateNode(par, token, 0);
}

void addLevelNo(){
    char Atemp[30];
    int tempNo=1;
    for(int i=0; i<tl; ++i){
        strcpy(Atemp, treeLink[i]->name);
        
        int k=i-1;
        while(k>=0){
            if(!strcmp(Atemp, treeLink[k]->name)){
                strcpy(treeLink[i]->name, cat(treeLink[i]->name, tempNo));
                tempNo++;
                //printf("%s\n",treeLink[i]->name);
                break;
            
            }
            
            --k;
        }
    }
}


void addLevelNoExpr(){
    char Atemp[30];
    int tempNo=1;
    for(int i=0; i<expL; ++i){
        strcpy(Atemp, treeLink[i]->name);
        
        int k=i-1;
        while(k>=0){
            if(!strcmp(Atemp, exprLink[k]->name)){
                strcpy(exprLink[i]->name, cat(exprLink[i]->name, tempNo));
                tempNo++;
                //printf("%s\n",treeLink[i]->name);
                break;
            
            }
            
            --k;
        }
    }
}


char *cat1(char *s, int w){
    char tt[30];
    sprintf(tt, " (%d)",w );
    strcpy(tempArr4,  s);
    strcat(tempArr4, tt);
    return tempArr4;
}
  

char *cat5(char *s, int w){
    memset(tempArr4,'\0',sizeof(tempArr4));
    char tt[30];
    sprintf(tt, "%d",w );
    strcpy(tempArr4,  s);
    strcat(tempArr4, tt);
    return tempArr4;
}


char *cat6(char *s, int w){
    memset(tempArr5,'\0',sizeof(tempArr4));
    char tt[30];
    sprintf(tt, "%d",w );
    strcpy(tempArr5,  s);
    strcat(tempArr5, tt);
    return tempArr5;
}

char *cat7(char *s, int w){
    memset(tempArr6,'\0',sizeof(tempArr4));
    char tt[30];
    sprintf(tt, "%d",w );
    strcpy(tempArr6,  s);
    strcat(tempArr6, tt);
    return tempArr6;
}


bool isOp(char *temp){
    if(!strcmp(temp, "+") || !strcmp(temp, "-") || !strcmp(temp, "*") || !strcmp(temp, "/")) return true;
    return false;
}

void CreateExprNodeHandle(char *exp){
    node *new = (node*)malloc(sizeof(node));
    strcpy(new ->parent, " -- ");
    strcpy(new->name, exp);
    new->nLink=0;
    if(isOp(exp))
        new->nLink =  2;
    exprLink[expL++] = new;
    new->temp =0;
}


bool isNumeric(char *name){
    for(int i=0;i<strlen(name); i++){
        if(!(name[i]>=48) || !(name[i]<=57)){
            return false;
        }
    }
    return true;
}

void AssignExprLinkHandle(int start, char *var){
    bool visit[expL];
    bool check = true;
    memset(visit, false, sizeof(visit));
    char one[200];
    char two[200];
    char three[200];
    char four[200];
    for(int i=start;i<expL; ++i){
        
        if(isOp(exprLink[i]->name)){
            int localK = i-1;
            int nLinkExpr = 0;
            check=false;
            while(localK >=0){
                 if(nLinkExpr == 2) 
                    break;
                 if(!visit[localK]){
                    exprLink[i]->childArrLink[nLinkExpr++] = exprLink[localK];
                    visit[localK] = true;
                    if(nLinkExpr == 1){
                        if(isOp(exprLink[localK]->name)){
                                strcpy(one, cat1("t", i));
                                strcpy(two, cat("t",localK));
                                strcpy(three, exprLink[i]->name);
                                
                                fprintf(IcodeFile, "%d. %s = %s %s",lineNo, one, two, exprLink[i]->name);
                            
                            }
                        else{
                                strcpy(one, cat1("t", i));
                                strcpy(two, exprLink[localK]->name);
                                strcpy(three, exprLink[i]->name);
                                fprintf(IcodeFile, "%d. %s = %s %s",lineNo, one, exprLink[localK]->name, exprLink[i]->name);
                                
                            }
                    }
                    else{
                        if(isOp(exprLink[localK]->name)){
                            strcpy(four, cat("t", localK));
                            fprintf(IcodeFile, " %s\n",four);
                        }
                        else{
                            strcpy(four, exprLink[localK]->name);
                            fprintf(IcodeFile, " %s\n", exprLink[localK]->name);
                        }
                        int access;
                        if(!strcmp(three, "+")) access = 1;
                        else if(!strcmp(three, "-")) access = 2;
                        else if(!strcmp(three, "*")) access = 3;
                        else access = 4;
                         
                        if(isNumeric(two) && isNumeric(four)) {
                            insert("TEMP", one, operate(two,four, access), 1);
                        }
                        else if(isNumeric(two) && !isNumeric(four)){
                            insert("TEMP", one, operate(two, getValue(four), access), 1);
                        }
                        else {
                            insert("TEMP", one, operate(getValue(two), four, access), 1);
                        }
                        
                    
                    }                
                 }
                --localK;
            }
                       
        }
             
    }
    if(!check)
        fprintf(IcodeFile, "%d. %s = %s\n\n",lineNo, var, cat1("t",expL-1));
    else
        fprintf(IcodeFile, "%d. %s = %s\n\n",lineNo, var, exprLink[expL-1]->name);
    
}


int checkinOptim(char *s){
    for(int i=0;i<optH;++i){
        if(!strcmp(optim[i].name, s)){
            return i;
        }
    }
    return -1;
}

void insertOptim(char *s){
    int temp =checkinOptim(s);
    if(temp==-1){
        strcpy(optim[optH++].name, s);
        optim[optH-1].lineNo = lineNo;
        optim[optH-1].reDec = false;
    }
    else{
        if(!optim[temp].reDec){
            remove1[remH++] = optim[temp].lineNo;
            optim[temp].lineNo=lineNo;
            
        }
   }
}


void updateOpt(char *s, int val){
    for(int i=0;i<optH;++i){
        if(!strcmp(optim[i].name, s)){
            optim[i].reDec = 1;
        }        
    }
}

void printAll(){
    printf("remove =");
    for(int i=0;i<remH;++i){
        printf("%d ",remove1[i]);
    }
    printf("\noptim = \n");
    for(int i=0;i<optH;i++){
        printf("name = %s, lineNo = %d, reDec = %d\n", optim[i].name, optim[i].lineNo, optim[i].reDec);
    }
}


int getNo(char *s){
    char temp[4];
    temp[0]=s[0];
    temp[1]='\0';
    if(s[1]==' '){
        return atoi(temp);
    }
    else{
        temp[2]=s[1];
        temp[3]='\0';
        return atoi(temp);
    }
}

bool noInRemove(int n){
    for(int i=0;i<remH;++i){
        if(remove1[i] == n) return true;
    }
    return false;
}
void OptimiseCode(){
    FILE *fp = fopen("optimisedIcode.txt","w");
    fclose(IcodeFile);
    FILE *rd = fopen("Icode.txt", "r");
    char buffer[255];

    
    while(fgets(buffer, 255, rd)){
        int no = getNo(buffer);
        if(!noInRemove(no)){    
            
            fprintf(fp, "%s", buffer);
        }
    }    
}
