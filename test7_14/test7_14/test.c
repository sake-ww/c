#define _CRT_SECURE_NO_WARNINGS 1


//4. ��ת���顣
//������ 
//���磺k=3������Ϊ1��2��3��4��5��6��7
//������1��2��3��4Ϊ��1��
//      5��6��7Ϊ��2��
//      1��2��3��4��5��6��7����Ϊ��3��
//1���ԣ�1���Ƚ�����ת��4  3  2  1  
//2���ԣ�2�����ã�7  6  5  
//��ʱ��4  3  2  1  7  6  5
//3���������������ת�����ã���ǰ��Ե���
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