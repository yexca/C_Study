#include <stdio.h>
#include <stdlib.h>

typedef struct Table
{
    int *head;
    int length;
    int size;
}Table;

Table InitTable(int size);
void printlist(Table t);

int main(void)
{
    Table t;
    int i;

    t = InitTable(5);
    for (i = 0; i < t.size; i++)
    {
        t.head[i] = i;
        t.length++;
    }
    printlist(t);

    return 0;
}

Table InitTable(int size)
{
    Table t;

    t.head = (int *)malloc(sizeof(int));
    if (!t.head)
    {
        printf("初始化失败");
        exit(0);
    }
    t.length = 0;
    t.size = size;

    return t;
}

void printlist(Table t)
{
    int i;

    for (i = 0; i < t.length; i++)
    {
        printf("%d\n", t.head[i]);
    }
}