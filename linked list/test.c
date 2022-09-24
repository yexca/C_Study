#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct student)

struct student
{
    int num;
    float score;
    struct student *next;
};

struct student * creat(void);
void printlist(struct student *head);
struct student * DelNode(struct student *head, int num);
struct student * updata(struct student *head, int index, int num, float score);
struct student * add(struct student *head, int index, int num, float score);

int main(void)
{
    struct student *head;

    printf("Link Start!\n");
    head = creat();
    printlist(head);
    printf("The End!\n");

    return 0;
}

struct student * creat(void)
{
    struct student *p1, *p2, *head;
    int n;

    p1 = p2 = (struct student *)malloc(LEN);
    n = 0;
    printf("现在请输入学生的学号和成绩（输入0结束）\n");
    scanf("%d %f", &p1->num, &p1->score);

    while(p1->num != 0)
    {
        n++;
        if (n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct student *)malloc(LEN);
        printf("现在请再次输入学生的学号和成绩（输入0结束）\n");
        scanf("%d %f", &p1->num, &p1->score);
    }
    p2->next = NULL;

    return head;
}

void printlist(struct student *head)
{
    struct student *p;
    p = head;

    if (p != NULL)
    {
        do
        {
            printf("学号：%d, 成绩：%.2f\n", p->num, p->score);
            p = p->next;
        } while (p != NULL);
    }
    else
        printf("链表为空\n");
}

struct student * DelNode(struct student *head, int num)
{
    struct student *p1, *p2;
    p1 = p2 = head;
    if (head == NULL)
        printf("链表为空");
    else
    {
        while (p1->next != NULL && p1->num != num)
        {
            p2 = p1;
            p1 = p1->next;
        }
        if (p1->num == num)
        {
            if (p1 == head)
            {
                head = head->next;
                free(p1);
            }
            else
            {
                p2->next = p1->next;
                free(p1);
            }
        }
        else
            printf("can't find\n");
    }

    return head;
}

struct student * updata(struct student *head, int index, int num, float score)
{
    struct student *p;
    if (head == NULL)
        printf("这个链表为空");
    else
    {
        p = head;
        while (p->next != NULL && p->num != index)
        {
            p = p->next;
        }
        if (p->num == index)
        {
            p->num = num;
            p->score = score;
        }
        else
            printf("cannot found");
    }

    return head;
}

struct student * add(struct student *head, int index, int num, float score)
{
    struct student *p1, *p2, *p3;
    p1 = p2 = head;

    if (head == NULL)
        printf("链表为空");
    else
    {
        while (p1->next != NULL && p1->num != index)
        {
            p1 = p1->next;
            p2 = p1;
        }
        if (p1->num == index)
        {
            p3 = (struct student *)malloc(LEN);
            p3->num = num;
            p3->score = score;

            if (p2->next == NULL)
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
            printf("cannot found");
    }

    return head;
}