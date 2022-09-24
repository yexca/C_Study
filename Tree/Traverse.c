// 遍历(递归)
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
}BiTree;

BiTree *InitTree(BiTree *T);
void DisplayTree(BiTree *elem);
void PreOrderTraverse(BiTree *T);
void INOrderTraverse(BiTree *T);
void PostOrderTraverse(BiTree *T);

int main(void)
{
    BiTree *T;
    T = InitTree(T);
    printf("先序遍历：\n");
    PreOrderTraverse(T);
    printf("\n中序遍历：\n");
    INOrderTraverse(T);
    printf("\n后序遍历：\n");
    PostOrderTraverse(T);

    return 0;
}

BiTree *InitTree(BiTree *T)
{
    T = (BiTree *)malloc(sizeof(BiTree));
    T->data = 1;
    T->lchild = (BiTree *)malloc(sizeof(BiTree));
    T->lchild->data = 2;
    T->lchild->lchild = (BiTree *)malloc(sizeof(BiTree));
    T->lchild->rchild = (BiTree *)malloc(sizeof(BiTree));
    T->lchild->lchild->data = 4;
    T->lchild->rchild->data = 5;
    T->lchild->lchild->lchild = NULL;
    T->lchild->lchild->rchild = NULL;
    T->lchild->rchild->lchild = NULL;
    T->lchild->rchild->rchild = NULL;
    T->rchild = (BiTree *)malloc(sizeof(BiTree));
    T->rchild->data = 3;
    T->rchild->rchild = (BiTree *)malloc(sizeof(BiTree));
    T->rchild->lchild = (BiTree *)malloc(sizeof(BiTree));
    T->rchild->rchild->data = 7;
    T->rchild->lchild->data = 6;
    T->rchild->rchild->rchild = NULL;
    T->rchild->rchild->lchild = NULL;
    T->rchild->lchild->lchild = NULL;
    T->rchild->lchild->rchild = NULL;

    return T;
}

void DisplayTree(BiTree *elem)
{
    printf("%d", elem->data);
}

void PreOrderTraverse(BiTree *T)
{
    if (T)
    {
        DisplayTree(T);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
    return;
}

void INOrderTraverse(BiTree *T)
{
    if (T)
    {
        INOrderTraverse(T->lchild);
        DisplayTree(T);
        INOrderTraverse(T->rchild);
    }
    return;
}

void PostOrderTraverse(BiTree *T)
{
    if (T)
    {
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        DisplayTree(T);
    }
    return;
}