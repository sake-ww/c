#define _CRT_SECURE_NO_WARNINGS 1
//交换排序：
//1.冒泡排序
//for（）--》外层循环：控制冒泡的趟数 
//   for（）--》内层循环：控制冒泡的方式--用相邻的两个元素来进行比较，不满则要求将相邻的元素进行交换，直到区间末尾
//2.快排


//冒泡排序
//时间复杂度：O（N^2）
//空间复杂度：O(1 )
//稳定性：稳定
//void BubbleSort(int array[], int size)
//{
//	//控制冒泡的趟数
//	for (int i = 0; i < size - 1; ++i)//-1的目的是可以少冒一趟，因为最后一次冒泡区间中只剩余一个元素
//	{
//		//具体冒泡的方式：用相邻位置的元素进行比较，如果不满足条件，就进行交换
//		/*方法一：
//		//j：表示前一个元素的下标
//		for (int j = 0; j < size - i - 1; ++j)//-1目的：j最多只能取到冒泡区间的倒数第二个元素
//		{
//			if (array[j] > array[j + 1])
//				Swap(&array[j], &array[j + 1]);
//		}
//        */
//		//方法二：方法二为方法一变换而来，注意方法代码第三行j-1和j的关系（防止写成降序）
//		//j：表示后一个元素的下标
//		for (int j = 1; j < size - i; ++j)//-1目的：j最多只能取到冒泡区间的倒数第二个元素
//		{
//			if (array[j-1] > array[j])
//				Swap(&array[j], &array[j - 1]);
//		}
//
//	}
//}

//问题：给出的序列为0123456798，这个序列在第一躺中便已经排好，如果按照上述方法，则会浪费大量时间
//void BubbleSortOP(int array[], int size)
//{
//	int flag = 0;
//	//控制冒泡的趟数
//	for (int i = 0; i < size - 1; ++i)//-1的目的是可以少冒一趟，因为最后一次冒泡区间中只剩余一个元素
//	{
//		//具体冒泡的方式：用相邻位置的元素进行比较，如果不满足条件，就进行交换
//		//j：表示后一个元素的下标
//		flag = 0;//该躺冒泡还没有比较，因此将flag设置为0
//		for (int j = 1; j < size - i; ++j)//-1目的：j最多只能取到冒泡区间的倒数第二个元素
//		{
//			if (array[j - 1] > array[j])
//			{
//				Swap(&array[j], &array[j - 1]);
//				flag = 1;//在该躺冒泡时区间还无序
//			}	
//		}
//		if (!flag)
//			return;
//	}
//}

//三数取中法：三个数据取最中间的数据作为基准值
int GetMiddleIndex(int array[], int left, int right)
{
	int mid = left + ((right - left) >> 1);

	//三个数据：left,mid,right-1
	if (array[left] < array[right - 1])
	{
		if (array[mid] < array[left])
			return left;
		else if (array[mid]>array[right - 1])
			return right - 1;
		else
			return mid;
	}
	else
	{
		if (array[mid] > array[left])
			return left;
		else if (array[mid] < array[right - 1])
			return right - 1;
		else
			return mid;
	}



}


int Partion1(int array[], int left, int right)
{
	int begin = left;
	int end = right - 1;
	int keyofindex = GetMiddleIndex(array, left, right);
	int key;
	if (keyofindex != right - 1)
	{
		Swap(&array[keyofindex], &array[right - 1]);
	}
	key = array[keyofindex];

	while (begin < end)
	{
		//让begin从前往后找，找比基准值大的元素，找到了就停下来
		while (begin < end && array[begin] <= key)
			begin++;

		//让end从后往前找，找比基准值小的元素，找到了就停下来
		while (begin < end && array[end] >= key)
			end--;

		if (begin < end)
			Swap(&array[begin], &array[end]);
	}
	if (begin != right - 1)
		Swap(&array[begin], &array[right - 1]);
	return begin;
}
//如何进行区间的基准值分割？
//数据分割： 
//方法一：（hore）
//先取基准值为最后一个元素
//只要begin和end没有遇到或者没有错过（begin和end区间中有元素）
//begin从前往后移动，找比基准值大的元素，找到之后停止
//end从后往前找，找比基准值小的元素，找到之后停止 
//交换begin和end位置的元素--（交换时，是跨区间交换的，所以不稳定）
//当begin和end相遇时，交换最后一个元素和相遇位置的元素

//方法二：挖坑法
int Partion2(int array[], int left, int right)
{
	int begin = left;
	int end = right - 1;
	int keyofindex = GetMiddleIndex(array, left, right);
	int key;
	if (keyofindex != right - 1)
		Swap(&array[keyofindex], &array[right - 1]);

	key = array[right - 1];

	while (begin < end)
	{
		//end位置形成了一个新的坑
		//让begin从前往后找比基准值大的元素
		while (begin < end && array[begin] <= key)
			begin++;

		//让begin位置大的元素天end位置的坑
		if (begin < end)
		{
			array[end] = array[begin];
			end--;
		}

		//begin位置形成了一个新的坑
		//让end从后往前找，找比基准值小的元素，填begin位置的坑
		while (begin < end && array[end] >= key)
			end--;

		if (begin < end)
		{
			array[begin] = array[end];
			begin++;
		}
	}
	//用基准值填最后一个坑
	array[begin] = key;
	return begin;
}

//方法三：前后指针法
//1.设置两个指针cur和prev，cur在前，prev在后
//2.当array[cur]<key&&++prev!=cur时，同时往后移动一个位置，否则cur移动一个位置
//3.当2满足时交换cur和prev
//4.最后交换基准值和Prev位置的值
//如果prev和cur紧挨着，说明cur还没有遇到比基准值大的元素
//如果prev和cur有差距，说明cur在遍历过程中，已经遇到比基准值大的元素了
//而且prev和cur之间的元素都是比基准值大的元素

int Partion3(int array[], int left, int right)
{
	int cur = left;
	int prev = cur - 1;

	int keyofindex = GetMiddleIndex(array, left, right);
	int key;
	if (keyofindex != right - 1)
	{
		Swap(&array[keyofindex], &array[right - 1]);
	}
	key = array[keyofindex];

	while (cur < right)
	{
		if (array[cur] < key && ++prev != cur)
			Swap(&array[cur], &array[prev]);
		++cur;
	}
	if (++prev != right - 1)
		Swap(&array[right - 1], &array[prev]);

	return prev;
}