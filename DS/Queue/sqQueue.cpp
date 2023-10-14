#include <iostream>
using namespace std;
typedef int elemtype;
typedef int status;
#define maxsize 100
typedef struct 
{
    elemtype *base;
    int front;
    int rear;
}sqQueue;

status initqueue(sqQueue &Q)
{
    Q.base=new elemtype[maxsize];
    if (!Q.base)
    exit(1);
    Q.front=Q.rear=0;
    return 0;
}

int Queuelength(sqQueue Q)
{
    return (Q.rear-Q.front+maxsize)%maxsize;
}

//入队
status EnQueue(sqQueue &Q,elemtype e)
{
    if ((Q.rear+1)%maxsize==Q.front)
    {
        /* code */
    }
    Q.base[Q.rear]=e;
    Q.rear==(Q.rear+1)%maxsize;
    return 0;
}

//出队
status DeQueue(sqQueue &Q,elemtype &e)
{
    if (Q.front==Q.rear)
    {
        return 1;
    }
    e=Q.base[Q.front];
    Q.front=(Q.front+1)%maxsize;
    return 0;
}

//取队头元素
status GetHead(sqQueue Q)
{
    if (Q.front!=Q.rear)
    {
        return Q.base[Q.front];
        /* code */
    }
    
}