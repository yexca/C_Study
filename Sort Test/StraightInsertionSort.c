// 直接插入排序
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int *data;
    int length;
}sqlist;

sqlist CreateList(sqlist L);
sqlist SimpleInsertSort(sqlist L);
void display(sqlist L);

int main(void)
{
    sqlist L;

    srand((unsigned)time(NULL));
    L = CreateList(L);
    printf("The L is: \n");
    display(L);
    L = SimpleInsertSort(L);
    printf("Now the L is:\n");
    display(L);

    return 0;
}

sqlist CreateList(sqlist L)
{
    L.data = (int *)malloc(11 * sizeof(int));
    L.length = 10;
    for (int i = 1; i < 11; i++)
    {
        L.data[11-i] = rand();
    }

    return L;
}

void display(sqlist L)
{
    int i;

    for (i = 1; i < L.length; i++)
    {
        printf("%7d ", L.data[i]);
    }
    printf("%d\n", L.data[L.length]);
}

sqlist SimpleInsertSort(sqlist L)
{
    int i, j;
    printf("Now Start\n");
    for (i = 1; i <= L.length; i++)
    {
        L.data[0] = L.data[i];

        for (j = i; j > 1; j--)
        {
            if (L.data[j - 1] > L.data[0])
            {
                L.data[j] = L.data[j-1];
                L.data[j-1] = L.data[0];
            }
        }
        display(L);
    }
    printf("End\n");

    return L;
}