#include <stdio.h>
#include <stdlib.h>
typedef struct QNode{
    int data;
    struct QNode * next;
}QNode;
QNode * initQueue(){
    QNode * queue=(QNode*)malloc(sizeof(QNode));
    queue->next=NULL;
    return queue;
}
QNode* enQueue(QNode * rear,int data){
    QNode * enElem=(QNode*)malloc(sizeof(QNode));
    enElem->data=data;
    enElem->next=NULL;
    //使用尾插法向链队列中添加数据元素
    rear->next=enElem;
    rear=enElem;
    return rear;
}
/*
//链表中的节点结构
typedef struct QNode{
    int data;
    struct QNode * next;
}QNode;
//创建链式队列的函数
QNode * initQueue(){
    //创建一个头节点
    QNode * queue=(QNode*)malloc(sizeof(QNode));
    //对头节点进行初始化
    queue->next=NULL;
    return queue;
}

QNode* enQueue(QNode * rear,int data){
    //1、用节点包裹入队元素
    QNode * enElem=(QNode*)malloc(sizeof(QNode));
    enElem->data=data;
    enElem->next=NULL;
    //2、新节点与rear节点建立逻辑关系
    rear->next=enElem;
    //3、rear指向新节点
    rear=enElem;
    //返回新的rear，为后续新元素入队做准备
    return rear;
}
*/
QNode* DeQueue(QNode * top,QNode * rear){
    QNode * p = NULL;
    if (top->next==NULL) {
        printf("\n队列为空");
        return rear;
    }
    p=top->next;
    printf("%d ",p->data);
    top->next=p->next;
    if (rear==p) {
        rear=top;
    }
    free(p);
    return rear;
}
int main() {
    QNode * queue,*top,*rear;
    queue=top=rear=initQueue();//创建头结点
    //向链队列中添加结点，使用尾插法添加的同时，队尾指针需要指向链表的最后一个元素
    rear=enQueue(rear, 1);
    rear=enQueue(rear, 2);
    rear=enQueue(rear, 3);
    rear=enQueue(rear, 4);
    //入队完成，所有数据元素开始出队列
    rear=DeQueue(top, rear);
    rear=DeQueue(top, rear);
    rear=DeQueue(top, rear);
    rear=DeQueue(top, rear);
    rear=DeQueue(top, rear);
    return 0;
}