%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "y.tab.h"
#include<stdbool.h>

    int lineNo =1;
    int scope = 0;
    int Bscope =0;
    extern int Gscope;
    extern char curToken[100];
    extern char prevToken[100];
    extern char exprToken[100];

    
    extern char* yytext;
    bool exprFlag = false;
    int exprCount=0;

    int semiFlag = 0;
    char *e;
    void generateToken(char* s, char* s1, int a);
    double TOKEN;
%}


alpha [a-zA-Z]
digit [0-9]
exp   (E|e){digit}+
Start \/\*
End   \*\/

%%
\/\/(.*)  ;
{Start}.*{End} ;

"-"     {yylval.txt=strdup(yytext); generateToken("-","SUB",-1);   return SUB;}
"+"     {yylval.txt=strdup(yytext);  generateToken("+","ADD",-1); return ADD;}
"*"     {yylval.txt=strdup(yytext); generateToken("*","MUL",-1);return MUL;}
"/"     {yylval.txt=strdup(yytext); generateToken("/","Div",-1);return DIV;}
">="    {yylval.txt=strdup(yytext); generateToken(">=","GEQ",-1);return GE;}
"<="    {yylval.txt=strdup(yytext);  generateToken("<=","LEQ",-1);return LE;}
"=="    {yylval.txt=strdup(yytext); generateToken("==","EQ",-1); return EQ;}
"<"     {yylval.txt=strdup(yytext); generateToken("<","L",-1); return L;}
">"     {yylval.txt=strdup(yytext);  generateToken(">","G",-1);return G;}
"!="    {yylval.txt=strdup(yytext); generateToken("!=","NEQ",-1);return NEQ;}
"="     {yylval.txt=strdup(yytext);generateToken("=","ASSIGN",-1); exprFlag = true; exprCount = 0; strcpy(exprToken, "");return ASSIGN;}
"&&"    {yylval.txt=strdup(yytext);generateToken("&&","AND",-1);return AND;}
"||"    {yylval.txt=strdup(yytext);generateToken("||","OR",-1);return OR;}
"&"     {yylval.txt = strdup(yytext); generateToken("&","Logical And",-1); return LAND;}
"|"     {yylval.txt = strdup(yytext); generateToken("&","Logical Or",-1); return LOR;}
"++"    {yylval.txt=strdup(yytext); generateToken("++","INC",-1);return INC;}
"--"    {yylval.txt=strdup(yytext);generateToken("--","DEC",-1);return DEC;}
"^"     {yylval.txt=strdup(yytext);generateToken("^","XOR",-1);return XOR;}

("+++")("+")* { printf("%c[4m%s\n%c[0m",27,"Note :",27);   printf("\tError Recovery : Droped extra \'+\' in the expression in line no %d\n\n",lineNo); return INC;}
("---")("-")* {printf("%c[4m%s\n%c[0m",27,"Note :",27);   printf("\tError Recovery : Droped extra \'-\' in the expression in line no %d\n\n",lineNo); return DEC;}

"switch"    {yylval.txt=strdup(yytext);generateToken("switch","keyword",-1);return SWITCH;}
"if"        {yylval.txt=strdup(yytext);generateToken("if","keyword",-1);return IF;}
"else"      {yylval.txt=strdup(yytext);generateToken("else","keyword",-1);return ELSE;}


"break"     {yylval.txt=strdup(yytext);generateToken("break","keyword",-1);return BREAK;}
"char"      {yylval.txt=strdup(yytext);generateToken("char","keyword",-1);return CHAR;}
"int"       {yylval.txt=strdup(yytext);generateToken("int","keyword",-1);return INT;}
"while"     {yylval.txt=strdup(yytext);generateToken("while","keyword",-1);return WHILE;}
"for"       {yylval.txt=strdup(yytext);generateToken("for","keyword",-1);return FOR;}
"float"     {yylval.txt=strdup(yytext);generateToken("float","keyword",-1);  return FLOAT;}
"default"   {yylval.txt=strdup(yytext);generateToken("default","keyword",-1);return DEFAULT;}
"case"      {yylval.txt=strdup(yytext);generateToken("case","keyword",-1);return CASE;}
"void"      {yylval.txt=strdup(yytext);generateToken("void","keyword",-1);return VOID;}
"return"    {yylval.txt=strdup(yytext);generateToken("return","keyword",-1);return RETURN;}
"double"    {yylval.txt=strdup(yytext);generateToken("double","keyword",-1);return DOUBLE; }


";"     {yylval.txt=strdup(yytext);generateToken(";","punc",-1);strcpy(prevToken, curToken);strcpy(curToken, ""); exprFlag = false; 
        return SEMICOLON;}
","     {yylval.txt=strdup(yytext);generateToken(",","punc",-1);return COMMA;}
"("     {yylval.txt=strdup(yytext);generateToken("(","punc",-1);return OP;}
")"     {yylval.txt=strdup(yytext);generateToken(")","punc",-1);return CP;}

"{"     {    yylval.txt=strdup(yytext);
             scope++;
             Gscope++;
             generateToken("{","punc",-1);         
             return OB;
        }

"}"     {
            yylval.txt=strdup(yytext);
            scope--;
            Gscope--;
            if(scope == 0) Bscope++;
            generateToken("}","punc",-1);
            return CB;
        }

^#.*    {yylval.txt=strdup(yytext);return HEADER;}




'.'                             {yylval.txt=strdup(yytext); return CHARVALUE;}
{alpha}({alpha}|{digit})*       {yylval.txt=strdup(yytext); generateToken(yylval.txt, "Identifier", -1);return IDE;}

{digit}+                        {yylval.txt=strdup(yytext); generateToken(yylval.txt, "Numeric", -1);return NUM;}
{digit}*\.{digit}+{exp}?        {yylval.txt=strdup(yytext);return REAL;}
{digit}+\.{digit}*{exp}?        {yylval.txt=strdup(yytext);return REAL;}


[\n]   {lineNo++;}
[ \t]     ;

[0-9]+/(({alpha}|"_")({alpha}|{digit}|"_")*) {
    printf("%c[4m%s\n%c[0m",27,"Note :",27); 
    printf("\tError Recovery : droping the integer value in line No %d\n\n",lineNo);
    
}
.           return yytext[0];

%%

int yywrap(void)
{
    return 1;
}



