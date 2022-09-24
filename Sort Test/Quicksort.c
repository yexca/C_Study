// 快速排序
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

typedef struct
{
    int *data;
    int length;
    int size;
}SqList;

SqList InitSqList(SqList L);
void Display(SqList L);
int SingleFastSort(SqList L, int low, int high);
void FastSort(SqList L, int low, int high);

int main(void)
{
    SqList L;

    srand((unsigned)time(NULL));
    L = InitSqList(L);
    printf("The L is:\n");
    Display(L);
    FastSort(L, 1, L.length);
    printf("Now The L is:\n");
    Display(L);

    return 0;
}

SqList InitSqList(SqList L)
{
    L.data = (int *)malloc((SIZE + 1) * sizeof(int));
    if(!L.data)
        exit(1);
    for (int i =  1; i <= SIZE; i++)
    {
        L.data[i] = rand();
    }
    L.length = SIZE;
    L.size = SIZE;

    return L;
}

void Display(SqList L)
{
    int i;

    for(i = 1; i < L.length; i++)
    {
        printf("%6d", L.data[i]);
    }
    printf("%6d\n", L.data[L.length]);
}

int SingleFastSort(SqList L, int low, int high)
{
    L.data[0] = L.data[low];
    while(low < high)
    {
        while(low < high && L.data[high] > L.data[0]) high--;
        L.data[low] = L.data[high];
        while(low < high && L.data[low] < L.data[0]) low++;
        L.data[high] = L.data[low];
    }
    L.data[low] = L.data[0];

    return low;
}

void FastSort(SqList L, int low, int high)
{
    int i;
    if (low < high)
    {
        i = SingleFastSort(L, low, high);
        FastSort(L, low, i-1);
        FastSort(L, i+1, high);
    }
}