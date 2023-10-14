#include <iostream>
using namespace std;
typedef int status;
typedef int elemtype;

typedef struct stacknode
{
    elemtype data;
    stacknode* next;
}stacknode,*linkstack;

//init
status initstack(linkstack &S)
{
    S=NULL;
    return 0;
}

//push
status push(linkstack &S,elemtype e)
{
    linkstack q;
    q=new stacknode;
    q->data=e;
    q->next=S;
    S=q;
    return 0;
}

//pop
status pop(linkstack &S)
{
    elemtype e;
    linkstack p;
    if (S==NULL)
        return 1;
    e=S->data;
    p=S;
    S=S->next;
    delete p;
    return 0;
}

status gettop(linkstack S)
{
    if (S==NULL)
        return 1;
    else
        return S->data;
}

int main()
{
    linkstack S;
    initstack(S);
    push(S,99);
    push(S,98);
    cout<<"top elem:"<<gettop(S)<<endl;
    pop(S);
    cout<<"After poping:"<<gettop(S)<<endl;
    return 0;
}