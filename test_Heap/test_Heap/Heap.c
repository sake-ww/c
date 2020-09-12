#define _CRT_SECURE_NO_WARNINGS 1 
#include "Heap.h"
#include <malloc.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

int Less(HDataType left, HDataType right)
{
	return left < right;
}

int Greater(HDataType left, HDataType right)
{
	return left > right;
}

//初始化 申请一个空堆
void HeapInit(Heap* hp, int initCap, CMP cmp)
{
	assert(hp);
	initCap = initCap < 10 ? 10 : initCap;//初始容量如果小于10，则开辟10个空间，大于10，则开辟initCap个空间
	hp->array = (HDataType*)malloc(sizeof(HDataType)* initCap);
	if (NULL == hp->array)//检测目的空间是否申请成功
	{
		assert(0);
		return;
	}

	hp->capacity = initCap;//空间有10个位置
	hp->size = 0;//实际有0个元素

	//接受比较方式
	hp->Cmp = cmp;
}

void Swap(HDataType* left, HDataType* right)
{
	HDataType temp = *left;
	*left = *right;
	*right = temp;
}

void AdjustDown(Heap* hp, int parent)
{
	// 用child标记parent较小的孩子---默认先标记parent的左孩子
	int size = hp->size;
	int* array = hp->array;
	int child = parent * 2 + 1;

	while (child < size)
	{
		//找到parent两个孩子中较小的孩子
		if (child+1 <size && hp->Cmp(array[child +1],array[child]))
			child += 1;

		//parent较小的孩子已经找到
		//检测parent是否满足堆的性质
		if (hp->Cmp(array[child + 1], array[child]))
		{
			Swap(&array[child], &array[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			return;
	}

}


//用数组中的元素创建堆
void HeapCreate(Heap* hp, int* array, int size, CMP cmp)//创建一个堆
{
	//1.先将数组中的元素放在堆结构中
	HeapInit(hp, size,cmp);//开辟空间
	memcpy(hp->array, array, sizeof(HDataType)*size);//接下来将数组中的元素放进来
	hp->size = size;

	//2.进行调整
	for (int root = (size - 2) / 2; root >= 0; root--)
		AdjustDown(hp, root);
}

void AdjustUp(Heap* hp, int child)
{
	HDataType* array = hp->array;
	int size = hp->size;
	int parent = ((child - 1) >> 1);
	while (child)
	{
		if (hp->Cmp(array[child] , array[parent]))
		{
			Swap(&array[child],&array[parent]);
			child = parent;
			parent = ((child - 1) >> 1);
		}
		else
			return;
	}
}

void CheckCapacity(Heap* hp)  
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		//1.开辟新空间
		int newCapacity = hp->capacity * 2;//扩容为原来旧空格的两倍
		HDataType* temp = (HDataType*)malloc(sizeof(HDataType)* newCapacity);
		if (NULL == temp)
		{
			assert(0);
			return;
		}

		//2.拷贝元素
		//memcpy(temp, hp->array, hp->size*sizeof(HDataType));
		for (int i = 0; i < hp->size; ++i)
		{
			temp[i] = hp->array[i]; 
		}
		//两种方式都是可以的 

		//3.释放旧空间
		free(hp->array);

		//4.使用新空间
		hp->array = temp;
		hp->capacity = newCapacity;
	}
}

void HeapPush(Heap* hp, HDataType data)//插入元素
{
	assert(hp);
	//0.检测是否需要扩容
	CheckCapacity(hp);

	//1.将新元素插入到数组的末尾，即：将新元素插入到完全二叉树的最后
	hp->array[hp->size++] = data;

	//2.新元素插入后，可能会破坏堆的性质
	AdjustUp(hp, hp->size - 1);

}
void HeapPop(Heap* hp)//删除(删除堆顶元素)将堆顶元素和最后一个元素调换位置，然后重新排列
{
	if (HeapEmpty(hp));
	    return;

	Swap(&hp->array[0],&hp->array[hp->size - 1]);
	hp->size--;
 	AdjustDown(hp, 0);
}

//获取堆顶元素
HDataType HeapTop(Heap* hp)
{
	assert(!HeapEmpty(hp));//堆不能为空
	return hp->array[0];//返回0号位置的元素
}
//堆为空返回0值
int HeapEmpty(Heap* hp)//判断堆空不空
{
	assert(hp);//判断堆是否存在
	return 0 == hp->size;//堆里面元素个数等于0，此时返回一个非零值
}

int HeapSize(Heap* hp)//堆里面有多少元素 
{
	assert(hp);
	return hp->size;
}
void HeapDestroy(Heap* hp)//销毁
{
	assert(hp);
	free(hp->array);
	hp->array = NULL;
	hp->capacity = 0;
	hp->size = 0;
}

//---------------------------测试
void TestHeap()
{
	int array[] = { 3, 6, 9, 1, 5, 2, 0, 7, 8, 4 };
	Heap hp;
	HeapCreate(&hp, array, sizeof(array) / sizeof(array[0]),Less);
	printf("heap size = %d\n", HeapSize(&hp));
	printf("heap top = %d\n", HeapTop(&hp));

	HeapPop(&hp);
	printf("heap size = %d\n", HeapSize(&hp));
	printf("heap top = %d\n", HeapTop(&hp));

	HeapPush(&hp, 0);

	HeapDestroy(&hp);
}

