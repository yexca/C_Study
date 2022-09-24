// 希尔排序
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
void SingleShellSort(SeqList L, int d);
SeqList ShellSort(SeqList L);

int main(void)
{
    SeqList L;
    srand((unsigned)time(NULL));

    L = InitSeqList(L);
    printf("The L is:\n");
    Display(L);
    L = ShellSort(L);
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
/*
void SingleShellSort(SeqList L, int d)
{
    int i, j;
    
    for (i = d; i <= L.length; i++)
    {
        L.data[0] = L.data[i];
        for (j = i; j > d; j-=d)
        {
            if (L.data[j - d] > L.data[0])
            {
                L.data[j] = L.data[j-d];
                L.data[j-d] = L.data[0];
            }
        }
    }
}

SeqList ShellSort(SeqList L)
{
    int d, i;
    d = L.length;

    printf("Start\n");
    d/=2;
    while (d > 0)
    {
        SingleShellSort(L, d);
        d /= 2;
        Display(L);
    }
    printf("End\n");

    return L;
}

SeqList ShellSort(SeqList L)
{
    int i, j, d, z;

    printf("Start\n");
    for (d = L.length/2; d > 0; d/=2)
    {
        //printf("  d = %d\n", d);
        for (z=i=d+1; i<z+d; i++)
        {
            //printf("  i = %d\n", i);
            for (j = i-d; j>0; j-=d)
            {
                L.data[0] = L.data[j];
                //printf("  j = %d\n", j);
                if (L.data[j] > L.data[j + d]) 
                {
                    L.data[j] = L.data[j + d];
                    L.data[j + d] = L.data[0];
                }
            }
        }
        Display(L);
    }
    printf("End\n");

    return L;
}
*/
SeqList ShellSort(SeqList L)
{
    int i,j,d,k;
 
    for (d = L.length / 2; d > 0; d /= 2)
    {
        for (i = 1;i <= d; i++)
        {
            for (j = i + d; j <= L.length; j += d) 
            {
                if (L.data[j] < L.data[j - d])
                {
                    L.data[0] = L.data[j];
                    k = j - d;
                    while (k > 0 && L.data[k] > L.data[0])
                    {
                        L.data[k + d] = L.data[k];
                        k -= d;
                    }
                    L.data[k + d] = L.data[0];
                }
            }
        }
    }
}