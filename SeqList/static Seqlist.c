#include "static SeqList.h"

//顺序表初始化
void SLInit(SL* psl) {

	psl->arr[0] = 0;//此处只能初始化一个元素
	psl->size = 0;
}

//打印顺序表
void SLPrint(SL* psl) {

	int i = 0;

	if (psl->size) {

		for (i = 0; i < psl->size; i++) {

			//输出格式，记得根据SLDataTyped的类型来修改
			printf("%d ", psl->arr[i]);
		}
		printf("\n");
	}
	else {
		printf("Null\n");
	}

}

/*
//检查顺序表是否已满
void SLCheck(SL* psl) {

	if (psl->size == MAX_SIZE) {
		printf("顺序表已满，无法进行后续操作");
	}

}
*/

//顺序表的尾插
void SLPushBack(SL* psl, SLDataType data) {

	//插入数据要先检查空间是否已满

	//实现方法一不够好
	/*
	if (psl->size == MAX_SIZE) {

		printf("空间已满\n");
		return;
	}
	else {

		psl->arr[psl->size] = data;
		psl->size++;

	}*/

	//实现方法二，简单明了
	assert(psl->size != MAX_SIZE);

	psl->arr[psl->size] = data;
	psl->size++;
}

//顺序表的尾删
void  SLPopBack(SL* psl) {

	//判断是否还有元素可以删除
	assert(psl->size);

	psl->size--;

}

//顺序表的头插
void SLPushFront(SL* psl, SLDataType data) {

	assert(psl->size != MAX_SIZE);

	//src用来后移数据
	int src = psl->size;

	while (src >= 1) {
		psl->arr[src] = psl->arr[src - 1];
		src--;
	}
	psl->arr[src] = data;
	psl->size++;

}

//顺序表的头删
void SLPopFront(SL* psl) {

	//判断是否还有数据可以删除
	assert(psl->size);

	int src = 0;
	while (src < psl->size - 1) {

		psl->arr[src] = psl->arr[src + 1];
		src++;
	}
	psl->size--;
}

//顺序表查找某个数据
int SLFind(SL* psl, SLDataType x) {

	int i = 0;
	for (i = 0; i < psl->size; i++) {
		
		if (psl->arr[i] == x) {

			//找到了就返回该数据在顺序表中的位置
			return  i;
		}
	}
	//找不到就返回-1
	return -1;

}

//顺序表在pos位置插入x
void SLInsert(SL* psl, size_t pos, SLDataType x) {

	assert(psl->size < MAX_SIZE);
	assert(pos >= 0 && pos <= psl->size);//pos=0或者pos=size的时候，相当于头插，尾插

	int end = psl->size;

	while (end > pos) {

		psl->arr[end] = psl->arr[end - 1];
		end--;
	}
	psl->arr[pos] = x;
	psl->size++;

}

//顺序表删除在pos位置的数据
void SLErase(SL* psl, size_t pos) {

	assert(psl->size);
	assert(pos >= 0 && pos < psl->size);

	int start = pos + 1;
	while (start < psl->size) {

		psl->arr[start - 1] = psl->arr[start];
		start++;

	}
	psl->size--;
}


//顺序表某一位置数据的修改
void SLModify(SL* psl, size_t pos, SLDataType x) {

	assert(psl->size);
	assert(pos >= 0 && pos < psl->size);

	psl->arr[pos] = x;
}
