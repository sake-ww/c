#define _CRT_SECURE_NO_WARNINGS 1

//3. 合并两个有序数组。

//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
//说明 :
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
//你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
//示例 :
//输入 :
//	nums1 = [1, 2, 3, 0, 0, 0], m = 3//有六个空间，但是只占领了三个空间
//	nums2 = [2, 5, 6], n = 3//有三个空间，占领了三个空间
//输出 : [1, 2, 2, 3, 5, 6]

//方法一：采用辅助空间
//1.申请辅助空间：申请m+n个空间
//2.将nums1和nums2中的元素向新空间中搬移：每次搬移一个，搬移两个数组中较小的一个元素
//  nums[1]和nums[2]进行比较，较小的搬移至新空间，然后将较小的 +1，较大的不变
//  然后继续比较
//  当nums1中的元素全部搬移完后此时m>3，我们将nums2中剩余的所有元素搬移至新空间 
//3.将新空间归并好的元素拷贝到nums1
//4.释放新空间
//5.返回
//时间复杂度：O（M+N）
//空间复杂度：O（M+N） 

//方法二：不适用辅助空间（将nums2中的元素诸葛插入到nums1中合适的位置）
//1.将nums1中的元素和nums2元素进行比较
//2.当nums1的元素小于nums2元素，nums1++，nums2不变
//  当nums1的元素大于nums2元素，将nums2中的元素按照（从任意位置中插入的方法插入）
// （将nums1中的元素向后移动一位，将nums2插入进去），然后nums1++，nums2++
//时间复杂度：O（MN）
//空间复杂度：O（1)

//方法三：从后往前进行比较
//【1，2，3，0，0，0，】【2，5，6】
//        丨       丨           丨
//        i        index        j
//用i和j进行比较然后大的等于index，然后大的往后走一位，小的不动，index往后走一步
//时间复杂度：O（M+N）
//空间复杂度：0（1）

//错误代码：
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int index = m+n - 1;//最大元素在nums1中存储的位置
//
//	//n>0:表示nums2中还有元素没有搬移到nums1中
//	while (n>0)
//	{
//		if (nums1[m - 1] > nums2[n - 1])
//		{
//		    nums1[index--] = nums1[m-1];
//		    m--;
//		}
//		else
//		{
//			nums2[index--] = nums2[n - 1];
//			n--;
//		}
//	}
//}

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//中有六个参数，而我们错误后的，输入示例只有四个参数，我们此时可以对照题目中的
//示例 :
//输入 :
//	nums1 = [1, 2, 3, 0, 0, 0], m = 3//有六个空间，但是只占领了三个空间
//	nums2 = [2, 5, 6], n = 3//有三个空间，占领了三个空间
//输出 : [1, 2, 2, 3, 5, 6]
//题目这一块则向我们证明了系统输入的含义即：
//当输入：[0] 0      [0]代表nums1数组，他有  0  个元素
//        [1] 1      [1]代表nums2数组，他有  1  个元素

//正确代码：
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int index = m+n - 1;//最大元素在nums1中存储的位置

	//n>0:表示nums2中还有元素没有搬移到nums1中
	while (n>0)
	{
		if (m > 0 && nums1[m - 1] > nums2[n - 1])
		{
			nums1[index--] = nums1[m - 1];
		    m--;
		}
		else
		{
			nums1[index--] = nums2[n - 1];
			n--;
		}
	}
}
