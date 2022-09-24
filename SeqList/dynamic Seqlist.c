#include "dynamic Seqlist.h"
//动态顺序表的实现

//SL初始化
void SLInit(SL* ps) {

	ps->p = NULL;
	ps->capacity = 0;
	ps->size = 0;

}


//SL空间检查
void SLCheckCapacity(SL* ps) {

	if (ps->size == ps->capacity) {

		ps->capacity = (ps->capacity == 0) ? 5 : 2 * ps->capacity;

		SLDataType* tmp = (SLDataType*)realloc(ps->p, (ps->capacity) * sizeof(SLDataType));

		if (tmp == NULL) {

			printf("realloc fail\n");
			exit(-1);
		}

		ps->p = tmp;

	}

}


//SL打印
void SLPrint(SL* ps) {

	if (ps->size == 0) {

		printf("顺序表为空\n");

	}
	else {

		int i = 0;
		for (i = 0; i < ps->size; i++) {

			//打印格式记得根据SLDataType的类型来修改
			printf("%d ", ps->p[i]);

		}
		printf("\n");

	}

}


//SL销毁
//这里并没有完全销毁结构体s，只是把成员变量都赋值为0
void SLDestory(SL* ps) {

	free(ps->p);
	ps->p = NULL;
	ps->size = ps->capacity = 0;

}


//SL尾插
void SLPushBack(SL* ps, SLDataType x) {

	SLCheckCapacity(ps);

	ps->p[ps->size] = x;
	ps->size++;

}


//SL尾删
void SLPopBack(SL* ps) {

	//删除数据需要判断一下顺序表是否为空
	assert(ps->size > 0);
	ps->size--;

}


//SL头插
void SLPushFront(SL* ps, SLDataType x) {

	SLCheckCapacity(ps);

	int end = ps->size;
	while (end > 0) {

		ps->p[end] = ps->p[end - 1];
		end--;

	}
	ps->p[end] = x;
	ps->size++;
}


//SL头删
void SLPopFront(SL* ps) {

	//删除数据需要判断一下顺序表是否为空
	assert(ps->size > 0);

	int start = 0;
	while (start < ps->size - 1) {

		ps->p[start] = ps->p[start + 1];
		start++;

	}
	ps->size--;

}


//SL查找某个数据
int  SLFind(SL* ps, SLDataType x) {

	//需要判断顺序表是否为空，可以用assert，也可以用if判断
	assert(ps->size);

	int i = 0;
	for (i = 0; i < ps->size; i++) {

		if (x == ps->p[i]) {

			return i;
		}

	}
	return -1;

}


//SL在pos位置插入x
//当pos为0或者pos为size时，相当于头插、尾插
void SLInsert(SL* ps, size_t pos, SLDataType x) {

	SLCheckCapacity(ps);

	assert(pos >= 0 && pos <= ps->size);

	int end = ps->size;
	while (end > pos) {

		ps->p[end] = ps->p[end - 1];
		end--;
	}
	ps->p[end] = x;
	ps->size++;

}


//SL删除pos位置的值
void SLErase(SL* ps, size_t pos) {

	//判断要删除的位置是否在size之内
	assert(pos >= 0 && pos < ps->size);

	int start = pos + 1;
	while (start < ps->size) {

		ps->p[start - 1] = ps->p[start];
		start++;

	}
	ps->size--;

}


//SL修改某一位置的数据
void SLModity(SL* ps, size_t pos, SLDataType x) {

	//判断要修改的位置是否在size之内
	assert(pos >= 0 && pos < ps->size);

	ps->p[pos] = x;
}
