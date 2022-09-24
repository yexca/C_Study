// 直接选择排序
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

typedef struct
{
    int *data;
    int length;
}SeqList;

SeqList InitSeqList(SeqList L);
void Display(SeqList L);
SeqList StraightSelectSort(SeqList L);

int main(void)
{
    SeqList L;

    srand((unsigned)time(NULL));
    L = InitSeqList(L);
    printf("The L is:\n");
    Display(L);
    L = StraightSelectSort(L);
    printf("Now L is:\n");
    Display(L);

    return 0;
}

SeqList InitSeqList(SeqList L)
{
    L.data = (int *)malloc((SIZE + 1) * sizeof(int));
    if(!L.data)
        exit(1);
    for (int i =  1; i <= SIZE; i++)
    {
        L.data[i] = rand();
    }
    L.length = SIZE;

    return L;
}

void Display(SeqList L)
{
    int i;

    for(i = 1; i < L.length; i++)
    {
        printf("%6d", L.data[i]);
    }
    printf("%6d\n", L.data[L.length]);
}

SeqList StraightSelectSort(SeqList L)
{
    int i, j, w, flag;

    printf("Start\n");
    for (i=0; i<L.length; i++)
    {
        flag = 0;
        L.data[0] = L.data[i];
        for (j=i; j<=L.length; j++)
        {
            if (L.data[j] < L.data[0])
            {
                L.data[0] = L.data[j];
                w = j;
                flag = 1;
            }
        }// for2
        if (flag)
        {
            L.data[w] = L.data[i];
            L.data[i] = L.data[0];
        }// if
        Display(L);
    }// for1
    printf("End\n");

    return L;
}