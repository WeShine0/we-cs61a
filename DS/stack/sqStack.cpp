#include<iostream>
using namespace std;
#define maxsize 100
typedef int Selemtype;
typedef int status;

typedef struct Stack
{
    Selemtype *base;
    Selemtype *top;
    int stacksize;
}sqstack;

//初始化
status initstack(sqstack &S)
{
    S.base=new Selemtype[maxsize];
    if (!S.base)
    exit(1);
    S.top=S.base;
    S.stacksize=maxsize;
    return 0;
}

//入栈
status push(sqstack &S,Selemtype e)
{
    if (S.top-S.base==S.stacksize)
        return 1;
    *S.top++=e;
    return 0;
}

//出栈
status pop(sqstack &S,Selemtype &e)
{
    if (S.top==S.base)
    return 1;
    e=*--S.top;
    return 0;
}


//取栈顶元素
status getelem(sqstack S)
{
    if (S.top!=S.base)
    {
        return *(S.top-1);
    }
    else
        return 1; 
}

int main()
{
    status e;
    sqstack stack;
    initstack(stack);
    push(stack,99);
    pop(stack,e);
    cout<<"delete: "<<e<<endl;
    push(stack,123);
    e=getelem(stack);
    cout<<"get: "<<e<<endl;
}


