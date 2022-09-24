#include <stdio.h>
#include <stdlib.h>
 
#define NULL 0
#define LEN sizeof(struct student)
 
/*
（1）malloc 函数

void *malloc(unsigned int size);
作用是在内存的动态存储区中分配一个长度为 size 的连接空间。
些函数的值（即返回值）是一个指向分配空间起始地址的指针（基类型为 void）。
如果些函数未能成功地执行（例如内存空间不足）则返回空指针 NULL。

（2）calloc 函数

void *calloc(unsigned n, unsigned size);
其作用是在内存的动态区存储中分配 n 个长度为 size 的连续空间。
函数返回一个指向分配空间起始地址的指针，如果分配不成功，返回 NULL。 
用 calloc 函数可以为一维数组开辟动态存储空间， n 为数组元素个数，每个元素长度为 size。

（3）free 函数

void free(void *p);
其作用是释放由 p 指向的内存区，使这部分内存区能被其它变量使用， 
p 是最后一次调用 calloc 或 malloc 函数时返回的值。free 函数无返回值。
请注意：以前的C版本提供的 malloc 和 calloc 函数得到的是指向字符型数据的指针。ANSI C 提供的 malloc 和 calloc 函数规定为 void * 类型。
*/

struct student
{
    long num;
    float score;
    struct student *next;
};
 
struct student *create()
{
    struct student *p1, *p2, *head;
    int num;
    float score;
    int n = 0;
 
    head = NULL;
 
    p1 = p2 = (struct student *)malloc(LEN);
 
    printf("please input num and score.\n");
    scanf("%d,%f", &p1->num, &p1->score);
 
    while(p1->num != 0)
    {
        n ++;
        if(n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct student *)malloc(sizeof(struct student));
 
        printf("please input num and score.\n");
 
        scanf("%d,%f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return head;
}
 
void printlist(struct student *head)
{
    struct student *p;
    p = head;
    if(head != NULL)
    {
        do
        {
            printf("num=%d score=%f\n", p->num, p->score);
            p = p->next;
        }while(p != NULL);
    }
}
 
void main()
{
    struct student *head;
    head = create();
    printlist(head);
    system("pause");
}

// 打印链表
void printlist(struct student *head)
{
    struct student *p;
    p = head;

    if(head != NULL)
    {
        do 
        {
            printf("num=%d score=%5.2f\n", p->num, p->score);
            p = p->next;
        } while (p != NULL);
    }
    /* while(p -> next != NULL)
    {
        printf("num=%d score=%f\n", p->num, p->score);
        p = p->next;
    }*/
}

// 删除节点
struct student *delNode(struct student *head, int num)
{
    printf("delNode.\n");
    struct student *p1, *p2;
    if(head == NULL)
    {
        printf("The List is NULL.\n");
    }
    else
    {
        p1 = head;
        while(p1->next != NULL && p1->num != num)
        {
            p2 = p1;
            p1 = p1->next;
        }
        if(p1->num == num)
        {
            if(p1 == head)
                head = p1->next;
            else
                p2->next = p1->next;
        }
        else
            printf("Can not find list num.\n");
    }
    return head;
}

// 更新节点
struct student *update(struct student *head, int index, int num, float score)
{
    printf("update.\n");
    struct student *p;
    if(head == NULL)
    {
        printf("The List is NULL.\n");
    }
    else
    {
        p = head;
        while(p->next != NULL && p->num != index)
        {
            p = p->next;
        }
        if(p->num == index)
        {
            p->num = num;
            p->score = score;
        }
        else
            printf("Can not find list index.\n");
    }
    return head;
}

// 增加节点
struct student *add(struct student *head, int index, int num, float score)
{
    printf("add.\n");
    struct student *p1, *p2, *p3;
    if(head == NULL)
    {
        printf("The List is NULL.\n");
    }
    else
    {
        p1 = p2 = head;
        while(p1->next != NULL && p1->num != index)
        {
            p2 = p1;
            p1 = p1 -> next;
        }
        if(p1->num == index)
        {
            p3 = (struct student *)malloc(LEN);
            p3->num = num;
            p3->score = score;

            if(p2->next == NULL)
            {
                p2->next = p3;
                p3->next = NULL;
            }
            else
            {
                p3->next = p2->next;
                p2->next = p3;   
            }
        }
        else
            printf("Can not find list index.\n");
    }
    return head;
}

