#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

int main()
{
	Cmp = Less;
	Cmp(10, 20);

	Cmp = Greater;
	Cmp(10, 20);


	TestHeap();
	return 0;
}

//堆的基本操作：
//1.建堆
//a.根据元素个数初始化堆空间 
//b.将数组中元素拷贝到堆结构中的连续空间中---完全二叉树
//c.对堆结构中的数据进行调整，让其满足堆的性质
//》1.找完全二叉树中倒数第一个非叶子节点---刚好是最后一个节点的双亲：（size-2）/2
//》2.从lastNotleaf节点位置向前一直调整到根节点的位置：每个节点进行向下调整
//向下调整：条件--》在调整某个节点时，必须保证该节点的左右子树已经满足堆的性质
//void AdjustDown(HDataType* array, int size, int parent)
//{
//	// 用child标记parent较小的孩子---默认先标记parent的左孩子
//	int child = parent * 2 + 1;//parent可能有左 没有右孩子
//
//	while (child < size)//保证parent的左孩子一定存在
//	{
//		//找到parent两个孩子中较小的孩子
//		//如果右孩子存在的情况下，找parent的左右孩子中较小的一个，然后用child进行标记
//		if (child + 1 < size && array[child + 1] < array[child])
//			child += 1;
//
//		//parent较小的孩子已经找到
//		//检测parent是否满足堆的性质（检测parent是否比较小的孩子大）
//		//是：需要将双亲与孩子节点中的元素进行交换，然后继续向下调整
//		if (array[child] < array[parent])
//		{
//			Swap(&array[child], &array[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		//否：parent双亲节点已经满足堆的特性 
//		else
//			return; 
//	}
//}
//2.插入
//》1.将元素插入到数组的末尾
//》2.新元素插入可能违反堆的特性 
//3.删除：每次删除堆顶元素
//i：检测堆是否为空，堆是空直接返回，否则进行
//ii：将堆顶元素与堆中最后一个元素进行交换 将堆中有效元素个数减1 对堆顶元素进行向下调整
//4.获取堆顶元素-》数组0号位置的元素
//
//
//思考：
//在插入的时候我，我们直接往最后一个位置插入新元素，然后我们用这个新元素和新元素的双亲进行比较，如果新元素小，则和双亲进行比较，（为什么不是，新元素和它的兄弟节点进行比较然后，再决定谁和双亲节点进行互换）
//答：原来的堆就是一个标准的堆，新元素的兄弟节点，本身就比双亲节点大，则不需要和新节点进行比较，然后决定谁和双亲结点进行比较
//
//延申：
//我们上面代码是小堆，我们应该如何将它快速变成大堆
//将Heap.c中的以下代码，更改为以下代码
//void TestHeap()
//{
//	int array[] = { 3, 6, 9, 1, 5, 2, 0, 7, 8, 4 };
//	Heap hp;
//	HeapCreate(&hp, array, sizeof(array) / sizeof(array[0]), Greater);
//	printf("heap size = %d\n", HeapSize(&hp));
//	printf("heap top = %d\n", HeapTop(&hp));
//
//	HeapPop(&hp);
//	printf("heap size = %d\n", HeapSize(&hp));
//	printf("heap top = %d\n", HeapTop(&hp));
//
//	HeapPush(&hp, 0);
//
//	HeapDestroy(&hp);
//}
//
//问题：堆代码只给一份，该份代码既能创建小堆，也能够创建大堆？需要小堆时创建大堆，需要大堆时创建大堆
//在对堆中的元素比较时，元素比较的操作就不能写死---让用户在外部来控制比较方式--函数指针
//Greater和Less只需要改变这两个便可
//
//什么时候用向下调整，什么时候用向上调整？
//建堆和堆删除需要向下调整
//建堆时用向下调整：Adjust（array，int size,int parent);parent表示以parent为根的二叉树
//保证：parent的左子树和右子树已经满足堆的特性，才可以直接调整parent 
//将数据存储到数组中之后，相当于完全二叉树已经建立好了，但是完全二叉树中的元素并不一定满足堆的特性---才需要进行调整
//堆删除：我们将堆顶元素和堆中最后一个元素进行依=一次交换，然后删除堆中最后一个元素，然后将堆顶的元素向下进行调整
//
//堆插入需要用到向上调整
//先将新元素放到最底层的数 组末尾
 