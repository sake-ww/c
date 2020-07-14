#define _CRT_SECURE_NO_WARNINGS 1


//4. 旋转数组。
//方法： 
//例如：k=3；数组为1，2，3，4，5，6，7
//我们令1，2，3，4为（1）
//      5，6，7为（2）
//      1，2，3，4，5，6，7整体为（3）
//1：对（1）先进行逆转：4  3  2  1  
//2：对（2）逆置：7  6  5  
//此时：4  3  2  1  7  6  5
//3：对整体进行你逆转（逆置）（前后对调）
//5 6 7 1 2 3 4 

void reverse(int *nums, int start, int end)
{
	int temp;
	while (start < end) 
	{
		temp = nums[start];
		nums[start] = nums[end];
		nums[end] = temp;
		start++;
		end--;
	}
}
void rotate(int *nums, int numsSize, int k)
{
	k %= numsSize;
	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize - 1);
}