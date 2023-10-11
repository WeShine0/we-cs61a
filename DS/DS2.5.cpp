#include <iostream>
using namespace std;
#define OK 0;
#define ERROR 1;
typedef int status;
typedef int elemtype;

typedef struct LNode
{
    elemtype data;
    struct LNode *next;
}LNode,*Linklist;

status initlist(Linklist &L)
{
    L=new LNode;
    L->next=NULL;
    return 0;
}

status getelem(Linklist &L,int i,elemtype &e)
{
    Linklist p;
    int j=1;
    p=L->next;
    while (p&&j<i)
    {
        p=p->next;
        ++j;
    }
    if (!p||j>i) return ERROR;
    e=p->data;
    return OK;
}

LNode *locatelem(Linklist L,elemtype e)
{
    Linklist p;
    p=L->next;
    while (p->data!=e&&p)
        p=p->next;
    return p;
}

status inslist(Linklist &L,elemtype e,int i)
{
    int j=0;
    Linklist p=L,s;
    while (p&&j<i-1)
    {
        p=p->next;
        j++;
    }
    if (!p||j>i-1) return ERROR;
    s=new LNode;
    s->data=e;
    s->next=p->next;
    p->next=s;
    return OK;
}

status dellist(Linklist &L,int i)
{
    Linklist p=L,s;int j=0;
    while (p->next&&j<i-1)
    {
        p=p->next;
        j++;
    }
    if (!(p->next) || j>i-1)
    return ERROR;
    s=p->next;
    p->next=s->next;
    delete s;
    return OK;
}

void crelist_B(Linklist &L,int n)
{
    Linklist p;
    L=new LNode;
    L->next=NULL;
    for (int i = 0; i < n; i++)
    {
        p=new LNode;
        std::cin>>p->data;
        p->next=L->next;
        L->next=p;
    }
    
}

void crelist_A(Linklist &L,int n)
{
    
}