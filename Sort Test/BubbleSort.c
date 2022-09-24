// 冒泡排序
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
SeqList BubbleSort(SeqList L);

int main(void)
{
    SeqList L;

    srand((unsigned)time(NULL));
    L = InitSeqList(L);
    printf("The L is:\n");
    Display(L);
    L = BubbleSort(L);
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

SeqList BubbleSort(SeqList L)
{
    int i, j;
    printf("Start:\n");
    for (i = 0; i < L.length; i++)
    {
        for (j = 1; j < L.length-i; j++)
        {
            if (L.data[j] > L.data[j+1])
            {
                L.data[0] = L.data[j+1];
                L.data[j+1] = L.data[j];
                L.data[j] = L.data[0];
            }
        }
    Display(L);
    }
    printf("End\n");

    return L;
}