#define _CRT_SECURE_NO_WARNINGS 1

//希尔排序
void ShellSort(int array[], int size)
{
	int gap = size;
	while (gap > 1)
	{
		//gap/=2//希尔给出的
		//gap每次取素数
		gap = gap / 3 + 1;//kunth大量实验证明此为最好
		//注意：i从1开始
		for (int i = gap; i < size; ++i)//外层循环控制：有size-1个数据需要插入
		{
			//模拟单个元素插入过程
			int key = array[i];
			int end = i - gap;

			//找待插入元素在区间中的位置
			//最差情况下：需要i位置之前所有已插入的元素整体往后进行搬移---O（n） 
			while (end >= 0 && key < array[end])// key < array[end] 这句中 没有=：算法稳定  有=：算法不稳定
			{
				array[end + gap] = array[end];
				end -= gap;
			}

			//插入元素:插入到当前分组的下一个位置
			array[end + gap] = key;
		}
	}


}
//看排序算法是否稳定：
//1.排序算法原理在插入时是否隔着区间（隔着元素）来进行插入
//2.排序算法原理在交换时是否隔着区间（隔着元素）来进行交换
//是：则不稳定（相等的元素则会跳过去）
//否：则稳定
//----》希尔排序不稳定
//空间复杂度：O（1）
//时间复杂度:O(N^1.25)~O(1.6N^1.25)

void Swap(int* left, int* right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}

//选择排序
//时间复杂度:O(N^2)
//空间复杂度：O(1)
//稳定性：不稳定
void SelectSort(int array[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		//找当前区间中最大元素的位置 
		int maxPos = 0;
		for (int j = 1; j < size - i; ++j)
		{
			if (array[j] > array[maxPos])
				maxPos = j;
		}
		if (maxPos != size - i - 1)
		{
			Swap(&array[maxPos], &array[size - i - 1]);
		}
	}
}