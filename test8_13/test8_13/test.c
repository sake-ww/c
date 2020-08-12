#define _CRT_SECURE_NO_WARNINGS 1

//2. 删除排序数组中的重复项。

//给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//示例 1 :
//给定数组 nums = [1, 1, 2],
//函数应该返回新的长度 2, 并且原数组 nums 的前两个元素被修改为 1, 2。
//你不需要考虑数组中超出新长度后面的元素。
//示例 2 :
//给定 nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4],
//函数应该返回新的长度 5, 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4。
//你不需要考虑数组中超出新长度后面的元素。
//说明 :
//为什么返回数值是整数，但输出的答案是数组呢 ?
//请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。
//你可以想象内部操作如下 :
//// nums 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
//int len = removeDuplicates(nums);
//// 在函数里修改输入数组对于调用者是可见的。
//// 根据你的函数返回的长度, 它会打印出数组中该长度范围内的所有元素。
//for (int i = 0; i < len; i++) {
//	print(nums[i]);
//}

//题目解释：
//【0,0,1,1,1,2,2,3,3,4】
//注意：数组是有序的，说明重复性的元素是连在一起的
//需求：将重复的元素只保留一个--去重

//方法一：
//【0,0,1,1,1,2,2,3,3,4】
// 丨 丨
//count i
//先给两个标记count i
//开始时：count和i相等，此时我们让i向后移一位，此时count=0，i=1
//        count ！= i；我们将i指向的元素（1）向前搬移（count+1）个位置，然后count+1
//        count的功能：记录的是删除后，有效元素的个数
//总结一下：count在后面,i在前面.
//          当i和count相等的时候，i++，count不用管
//          当i!=count时，i指向的元素向前搬移（count+1）个位置，然后count+1
//          返回长度时，我们需要返回++count
//              原因：（元素是01234这样的顺序排列的，直接返回count=4，然而一共有五个元素）

//代码初稿：
//for (int i = 0; i < size; ++i)
//{
//	if (array[count] != array[i])//则证明i指向的元素是第一次出现的，我们则需要将其想前面搬移
//	{
//		//array[count + 1] = array[i];
//		//count++;
//		//等同于
//		array[++count] = array[i];//先让count加一，然后将i指向的元素搬移到count的位置
//	}
//} 

//代码：
//int removeDuplicates(int* nums, int numsSize)
//{
//	int count = 0;//刚开始，count在0号位置，i在1号位置
//	for (int i = 1; i < numsSize; ++i)// i < numsSize你有多少个元素，后续就需要多少个元素参与比较
//	{
//		if (nums[count] != nums[i])
//			nums[nums[++count] = nums[i]];//++count 注意：count需要先++，然后再进行搬移
//	}
//	return ++count;
//}
//代码不过原因：
//当输入的数组为[]
//我们的count和i已经占领了两个位置
//解决方法：判断数组元素个数是否满足我们的需求
//特殊情况：
//1.数组没有元素
//2.数组只有一个元素，则没有重复的元素
//3数组有两个及两个以上，正常运行

//正确代码：
int removeDuplicates(int* nums, int numsSize)
{
	int count = 0;//刚开始，count在0号位置，i在1号位置
	if (numsSize < 2)
		return numsSize;
	for (int i = 1; i < numsSize; ++i)// i < numsSize你有多少个元素，后续就需要多少个元素参与比较
	{
		if (nums[count] != nums[i])
			nums[nums[++count] = nums[i]];//++count 注意：count需要先++，然后再进行搬移
	}
	return ++count;
}