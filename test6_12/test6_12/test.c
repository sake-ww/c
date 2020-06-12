#define _CRT_SECURE_NO_WARNINGS 1


循环法：
int Binary_Search_loop(int A[], int low, int high, int key)
{
	int mid = (high + low) / 2;
	while (high>low)
	{
		mid = (high + low) / 2;
		if (A[mid]>key)		//与当前序列中位数比较，抛弃不匹配的一半
			high = mid;
		else if (A[mid]<key)
			low = mid + 1;
		else			//如果，恰好当前中位数匹配，直接返回即可
			return mid;
	}
	if (high == low)			//只剩最后一个元素没有比较，直接比较
	if (A[low] == key)		//如果最后元素还是不匹配，那就返回-1
		return low;
	else
		return -1;
}
递归法：
（使用递归法更直观，但同时也增加了空间复杂度）
int Binary_Search(int A[], int low, int high, int key)
{
	int mid;
	if (low<high)
	{
		mid = (low + high) / 2;
		if (A[mid]>key)					//与当前中位数比较，抛弃不匹配的一半
			return Binary_Search(A, low, mid, key);
		else if (A[mid]<key)
			return Binary_Search(A, mid + 1, high, key);
		else						//如果恰好中位数可以匹配，直接返回
			return mid;
	}
	else 							//如果只剩一个元素，直接判断是否匹配
	if (A[low] != key)
		return -1;
	else
		return low;
}

