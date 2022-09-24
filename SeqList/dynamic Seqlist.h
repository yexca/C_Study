#include <stdio.h>
//重命名SL的数据类型，方便后续修改
typedef int SLDataType;

//定义结构体
//成员变量为指向动态顺序表的指针，数据的个数，顺序表的容量
//capacity用来管理数组的总大小，如果size与capacity相等了，就表示数组已经满了需要扩容
//重定义结构体类型名称，方便操作
typedef struct SeqList {

	SLDataType* p;
	int size;
	int capacity;

}SL;



//----------------------------------------------------------------------
//一下是一些常用的接口，与静态顺序表差不多

//SL初始化
void SLInit(SL* ps);


//SL空间检查
//如若size与capacity相等表示数组已经满了，需要扩容
void SLCheckCapacity(SL* ps);


//SL打印
void SLPrint(SL* ps);


//SL销毁
//因为数组是动态开辟的，所以在最后不使用的数组的时候要释放空间
void SLDestory(SL* ps);


//SL尾插
void SLPushBack(SL* ps,SLDataType x);


//SL尾删
void SLPopBack(SL* ps);


//SL头插
void SLPushFront(SL* ps, SLDataType x);


//SL头删
void SLPopFront(SL* ps);


//SL查找某个数据
//如果能找到，返回该数据在顺序表中下标
int SLFind(SL* ps, SLDataType x);


//SL在pos位置插入x
void SLInsert(SL* ps, size_t pos, SLDataType x);


//SL删除pos位置的值
void SLErase(SL* ps, size_t pos);


//SL修改某一位置的数据
void SLModity(SL* ps, size_t pos, SLDataType x);
