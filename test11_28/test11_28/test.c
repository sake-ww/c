#define _CRT_SECURE_NO_WARNINGS 1
//选择排序
void SelectSortOP(int array[], int size)
{
	int begin = 0, end = size - 1;
	while (begin < end)
	{
		//在[begin,end]区间中找最大和最小的元素
		int maxPos = begin, minPos = begin;
		int j = begin + 1;

		while (j <= end)
		{
			if (array[j] >array[maxPos])
				maxPos = j;

			if (array[j] < array[minPos])
				minPos = j;
			++j;
		}

		//如果最大元素不在区间最后的位置、
		if (maxPos != end)
			Swap(&array[maxPos], &array[end]);

		//如果end位置存储的刚好是最小的元素，上面的交换就将最小的元素位置更改了--maxpos
		//最小元素的位置发生了改变，则必须要更新minPos
		if (minPos == end)//minPos和end刚好相等的情况下，说明在交换之前最小元素一定在最后一层
			minPos = maxPos;

		//最小的元素不在区间的起始位置
		if (minPos != begin)
			Swap(&array[minPos], &array[begin]);

		++begin;
		--end;
	}
}
//选择排序有什么缺陷？
//重复遍历太多
//怎么才能减少重复遍历次数？
//---堆排序
//1.建堆：建大堆还是建小堆？ 取决于用户需要升序（大堆）还是降序（降序）
//问题：建堆需要用到什么调整？---向下调整
//______向下调整是从哪个位置开始调整的？倒数第一个非叶子节点的位置~到根节点所有的节点应用向下调整即可建成堆
//______倒数第一个非叶子节点是怎样算的？倒数第一个非叶子节点就是最后一个叶子节点的双亲：(size-1-1)/2
//2.利用堆删除的思想进行排序
//______将堆顶元素与队中最后一个元素进行交换（即将数组中最大或最小的元素放到末尾）
//______将堆中有效元素个数减少一个 
//______将堆顶的元素向下调整 
//核心：向下调整

void HeapAdjust(int array[], int size, int parent)
{
	//用child标记parent较大的孩子，默认先标记parent的左孩子
	//先标记左孩子的原因是：如果parent有孩子，parent一定是先有左孩子，然后才有右孩子
	int child = parent * 2 + 1;

	while (child < size)
	{
		//找parent中较大的孩子:parent左右孩子比较
		//必须先保证parent的右孩子存在
		if (child + 1 < size && array[child + 1] > array[child])
			child += 1;

		//检查parent是否满足堆的性质
		if (array[child] > array[parent])
		{
			Swap(&array[child], &array[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			return;
	}
}