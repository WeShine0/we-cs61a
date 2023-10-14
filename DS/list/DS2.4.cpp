#include <iostream>
#include <math.h>
#include <stdlib.h>

#define ERROR 0
#define OK 1
#define overflow 2
#define underflow 3
#define notpresent 4
#define duplicate 5
#define maxmize 50

typedef int elemtype;
typedef int status;

typedef struct 
{
    elemtype *elem;
    int len;
}seqlist;

status initlist(seqlist &L)
{
    L.elem=new elemtype[maxmize];
    if (!L.elem)
       exit(ERROR);
    L.len=0;
    std::cout<<"initlist over\n";
    return OK;
}

status getvalue(seqlist &L) //赋值十个元素
{
    L.len=10;
    for (int i = 0; i < L.len; i++)
    {
        L.elem[i]=i;
    }
    std::cout<<"getvalue over\n";
    return OK;
    
}

status findelem(seqlist &L,elemtype e)
{
    int i=0;
    for ( i = 0; i < L.len; i++)
        if (e==L.elem[i])
            return i+1;   //避开首元素下标为0
    return 0;
}

status insertelem(seqlist &L,elemtype e,int i)  //将e插入到第i个元素位置
{
    int j;
    if ((i<=0) || (i>L.len+1)) return ERROR;
    if (L.len==maxmize) return ERROR;
    for ( j = L.len-1; j >= i-1; j--)  //!x
        L.elem[j+1]=L.elem[j];
    L.elem[i-1]=e;
    ++L.len;
    return OK;
}

status delelem(seqlist &L,int i)
{
    if (L.len==0) return notpresent;
    if (i<0||i>L.len-1) return ERROR;
    for (int  j = i; j<L.len-1; j++)
        L.elem[j-1]=L.elem[j];
    --L.len;
    return OK;
}

void print(seqlist &L)
{
    for (int i = 0; i < L.len; i++)
    {
        std::cout<<L.elem[i]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    int e,l;
    seqlist LIST;
    initlist(LIST);
    getvalue(LIST);
    std::cout<<"链表为:";
    print(LIST);

    // std::cout<<"输入查找的元素\n";
    // std::cin>>e;
    // if(findelem(LIST,e)-1 ==-1)
    // std::cout<<"该元素不存在\n";
    // else
    // std::cout<<"查找元素下标为："<<findelem(LIST,e)-1<<std::endl;

    std::cout<<"输入插入元素及插入位置"<<std::endl;
    std::cin>>e>>l;
    if (insertelem(LIST,e,l))
    {
        std::cout<<"插入后链表为：";
        print(LIST);
    }
    else
    std::cout<<"插入失败\n";
   
    


}



