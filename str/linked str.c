// 串的块链存储结构(链串)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINKLEN 3

typedef struct strlink
{
    char a[LINKLEN];
    struct strlink *next;
}strlink;

strlink * initstrlink(strlink *head, char *str);
void displaystrlink(strlink *head);

int main(void)
{
    strlink *head = NULL;
    char a[23] = "yexca love warma";
    head = initstrlink(head, a);
    displaystrlink(head);

    return 0;
}

strlink * initstrlink(strlink *head, char *str)
{
    strlink *temp;
    int length = strlen(str);
    int num = length / LINKLEN;
    if (length % LINKLEN)
        num++;
    
    head = (strlink *)malloc(sizeof(strlen));
    head->next = NULL;
    temp = head;
    for (int i = 0; i < num; i++)
    {
        int j = 0;
        for (; j < LINKLEN; j++)
        {
            if (i * LINKLEN + j < length)
                temp->a[j] = str[i * LINKLEN + j];
            else
                temp->a[j] = '#';
        }
        if (i * LINKLEN + j < length)
        {
            strlink *newlink = (strlink *)malloc(sizeof(strlink));
            newlink->next = NULL;
            temp->next = newlink;
            temp = newlink;
        }
    }
    return head;
}

void displaystrlink(strlink *head)
{
    strlink *temp = head;
    while (temp)
    {
        for (int i = 0; i < LINKLEN; i++)
            printf("%C", temp->a[i]);
        temp = temp->next;
    }
}