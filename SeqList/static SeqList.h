#include <stdio.h>
//定义静态数组的大小，方便后续修改
#define MAX_SIZE 50

//重命名数组的数据类型，方便后续修改
typedef int SLDataType;


//定义结构体
//成员变量为数组和记录当前数据个数的变量
//重命名结构体数据类型，方便书写
typedef struct SeqList {

	SLDataType arr[MAX_SIZE];
	int size;

}SL;


//-----------------------------------------------------------------------------
//以下是一些常见的接口的声明

//顺序表初始化
//利用结构体类型创建一个静态顺序表变量后，可以对其进行初始化
void SLInit(SL* psl);

//打印顺序表
//把顺序表的值按照先后顺序打印出来
void SLPrint(SL* psl);

//检查顺序表是否已满
//每次进行加入数据的操作的时候需要先检查是否已经满了，如果满了就不能够插入了
void SLCheck(SL* psl);

//顺序表的尾插
//在顺序表的尾部在插入一个元素
//由于是数组加入数据很方便，直接使用数组下标就可以访问到
void SLPushBack(SL* psl, SLDataType data);

//顺序表的尾删
//删除顺序表尾部的数据
void  SLPopBack(SL* psl);

//顺序表的头插
//在顺序表的开头加入一个数据
void SLPushFront(SL* psl, SLDataType data);

//顺序表的头删
//把顺序表第一位数据删除
void SLPopFront(SL* psl);

//顺序表查找某个数据
//查找顺序表中是否存在某个数据，如果有就返回对应的下标
//如果找不到就返回-1
int SLFind(SL* psl, SLDataType x);

//顺序表在pos位置插入x
//在指定下标位置插入数据x，原来x位置的数据以及后面的数据往后移动
void SLInsert(SL* psl, size_t pos, SLDataType x);

//顺序表删除在pos位置的数据
void SLErase(SL* psl, size_t pos);

//顺序表某一位置数据的修改
void SLModify(SL* psl, size_t pos, SLDataType x);

