#include <iostream>
using namespace std;
typedef int elemtype;
typedef int status;

typedef struct BinaryTreeNode
{
    elemtype Data;
    struct BinaryTreeNode *lchild,*rchild;
}btn,*bitree;

//二叉树先序遍历
void PreOrderTransverse(bitree t)
{
    if (t==NULL) return;
    cout<<t->Data<<endl;
    PreOrderTransverse(t->lchild);
    PreOrderTransverse(t->rchild);
}

//二叉树的建立(遍历)
void precreateBT(bitree &t)
{
    char ch;
    cout<<"输入存入元素：\n";
    cin>>ch;
    if (ch=='#')
    {
        t=NULL;
    }
    else
    {
        t=new BinaryTreeNode;
        t->Data=ch;
        precreateBT(t->lchild);
        precreateBT(t->rchild);
    }
}

//先序输出
void preprint(bitree t)
{
    if(t==NULL)
    cout<<"#";
    else
    {
        cout<<t->Data;
        preprint(t->lchild);
        preprint(t->rchild);
    }
}

int main()
{
    BinaryTreeNode *t;
    precreateBT(t);
    preprint(t);
}