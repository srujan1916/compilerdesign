print("\n")
print("\n")
f = open("icg.txt","r")


list_of_lines = f.readlines()
div = 0
registers = [0,1,2,3,4,5,6,7,8,9,10]
result = dict()
data = list()
text = list()
for i in list_of_lines: #separates all the lines in the icg
    i = i.strip("\n")
    #print(i)
    op,arg1,arg2,res = i.split() #groups all the columns into separate list
    #print("hii")
    if op in ["+","-"]:
        flag1=0
        flag2=0
        arg11=str()
        if(arg1.isdigit()):
            arg1 = str(hex(eval(arg1)))
            flag1=1
        else:
            if('T' in arg1):
                arg1 = result[arg1]
            else:
                if(arg1 not in data):
                    data.append(arg1)
                arg11=arg1
                text.append(["ldr","r"+str(registers[0]),"="+arg1])
                text.append(["ldr","r"+str(registers[0]),"[r"+str(registers[0])+"]"])
                arg1 = "r"+str(registers[0])
        
        if(arg2.isdigit()):
            arg2 = str(hex(eval(arg2)))
            flag2=1
        else:
            if('T' in arg2):
                arg2 = result[arg2]
            else:
                if(arg2 not in data):
                    data.append(arg2)
                if(arg11 != arg2):
                    text.append(["ldr","r"+str(registers[1]),"="+arg2])
                    text.append(["ldr","r"+str(registers[1]),"[r"+str(registers[1])+"]"])
                    arg2 = "r"+str(registers[1])
                else:
                    arg2 = arg1

        r = registers.pop(0)
        if(flag1==flag2 or flag2==1):
            if(op=="+"):
                text.append(["add","r"+str(r),arg1,arg2])
            else:
                text.append(["sub","r"+str(r),arg1,arg2])
        elif(flag1==1):
            if(op=="+"):
                text.append(["add","r"+str(r),arg2,arg1])
            else:
                text.append(["sub","r"+str(r),arg1,arg2])
        result[res]= "r"+str(r)        
        registers.append(r)


    elif(op == "*"):
        arg11 = str()
        if(arg1.isdigit()):
            text.append(["mov","r"+str(registers[0]),str(hex(eval(arg1)))])
            arg1 = "r"+str(registers[0])
        else:
            if('T' in arg1):
                arg1 = result[arg1]
            else:
                if(arg1 not in data):
                    data.append(arg1)
                arg11=arg1
                text.append(["ldr","r"+str(registers[0]),"="+arg1])
                text.append(["ldr","r"+str(registers[0]),"[r"+str(registers[0])+"]"])
                arg1 = "r"+str(registers[0])                


        if(arg2.isdigit()):
            text.append(["mov","r"+str(registers[1]),str(hex(eval(arg2)))])
            arg2 = "r"+str(registers[1])
        else:
            if('T' in arg2):
                arg2 = result[arg2]
            else:
                if(arg2 not in data):
                    data.append(arg2)
                if(arg11 != arg2):
                    text.append(["ldr","r"+str(registers[1]),"="+arg2])
                    text.append(["ldr","r"+str(registers[1]),"[r"+str(registers[1])+"]"])
                    arg2 = "r"+str(registers[1])
                else:
                    arg2 = arg1

        text.append(["mul","r"+str(registers[2]),arg1,arg2])
        result[res]= "r"+str(registers[2])
        registers.append(registers[2])
        registers.pop(2)


    elif(op == "/"):
        div = 1
        arg11 = str()
        if(arg1.isdigit()):
            text.append(["mov","r0",str(hex(eval(arg1)))])
           
        else:
            if('T' in arg1):
                text.append(["mov","r0",result[arg1]])
            else:
                if(arg1 not in data):
                    data.append(arg1)
                arg11=arg1
                text.append(["ldr","r0","="+arg1])
                text.append(["ldr","r0","[r0]"])
                #arg1 = "r1"              


        if(arg2.isdigit()):
            text.append(["mov","r1",str(hex(eval(arg2)))])
            #arg2 = "r1"
        else:
            if('T' in arg2):
                text.append(["mov","r1",result[arg2]])
            else:
                if(arg2 not in data):
                    data.append(arg2)
                if(arg11 != arg2):
                    text.append(["ldr","r1","="+arg2])
                    text.append(["ldr","r1","[r1]"])
                    #arg2 = "r1"
                else:
                    text.append(["mov","r1","r0"])
        text.append(["bl","divide"])
        result[res]= "r2"
        registers.append(registers[2])
        registers.pop(2)  

    elif(op == "="):

        if(arg1.isdigit()):
            r = registers[0]
            text.append(["mov","r"+str(r),str(hex(eval(arg1)))])
            arg1 = "r"+str(r)

        elif("T" in arg1):
            arg1 = result[arg1]

        else:
            if(arg1 not in data):
                data.append(arg1);
            r = registers[0]
            text.append(["ldr","r"+str(r),"="+arg1])
            text.append(["ldr","r"+str(r),"[r"+str(r)+"]"])
            arg1 = "r"+r
        if(res not in data):
            data.append(res)
        r = registers[1]   
        text.append(["ldr","r"+str(r),"="+res])
        text.append(["ldr","r"+str(r),"[r"+str(r)+"]"])
        text.append(["str",arg1,"[r"+str(r)+"]"])

    elif(op in ["goto","Label"]):
        if(op == "goto"):
            text.append(["b",res])
        else:
            text.append([res+":"])

    elif(op in ["==",">","<","<=",">=","!="]):
        arg11=str()
        if(arg1.isdigit()):
            arg1 = str(hex(eval(arg1)))
        else:
            if('T' in arg1):
                arg1 = result[arg1]
            else:
                if(arg1 not in data):
                    data.append(arg1)
                arg11=arg1
                text.append(["ldr","r"+str(registers[0]),"="+arg1])
                text.append(["ldr","r"+str(registers[0]),"[r"+str(registers[0])+"]"])
                arg1 = "r"+str(registers[0])
        
        if(arg2.isdigit()):
            arg2 = str(hex(eval(arg2)))
        else:
            if('T' in arg2):
                arg2 = result[arg2]
            else:
                if(arg2 not in data):
                    data.append(arg2)
                if(arg11 != arg2):
                    text.append(["ldr","r"+str(registers[1]),"="+arg2])
                    text.append(["ldr","r"+str(registers[1]),"[r"+str(registers[1])+"]"])
                    arg2 = "r"+str(registers[1])
                else:
                    arg2 = arg1
        text.append(["cmp",arg1,arg2])

        if(op == "<"):
            result[res] = "lt"
        elif(op == ">"):
            result[res] = "gt"
        elif(op == ">="):
            result[res] = "ge"
        elif(op == "<="):
            result[res] = "le"
        elif(op == "=="):
            result[res] = "eq"
        else:
            result[res] = "ne"
    elif(op == "not"):
        if result[arg1] == "lt":
            result[res] = "ge"
        elif result[arg1] == "gt":
            result[res] = "le"
        elif result[arg1] == "ge":
            result[res] = "lt"
        elif result[arg1] == "le":
            result[res] = "gt"
        elif result[arg1] == "eq":
            result[res] = "ne"
        else:
            result[res] = "eq"

    elif(op == "if"):
        text.append(["b"+result[arg1],res])


print(".data")
for i in data:
    print(i[0]+":",".word",hex(0),sep=' ')

print()
print()
print(".text")
for i in text:
    if(len(i)==4):
        print(i[0],i[1],i[2],i[3],sep=' ')
    elif(len(i)==2):
        print(i[0],i[1],sep=' ')
    elif(len(i)==1):
        print(i[0],sep=' ')
    else:
        print(i[0],i[1],i[2],sep=' ')

if(div == 1): 
    print("b","end")  
    print("divide:")
    print("cmp","r0","r1")
    print("movlo","pc","lr")
    print("sub","r0","r0","r1")
    print("add","r2","r2","0x1")
    print("b","divide")

print("end:")
print("swi","0x011")
f.close()
