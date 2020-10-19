#define _CRT_SECURE_NO_WARNINGS 1

//6.二叉树的前序遍历
//给定一个二叉树，返回它的 前序 遍历。
//
//示例 :
//输入 : [1, null, 2, 3]
//	1
//	 \
//	  2 
//	 /
//	3
//输出:[1, 2, 3]
//
//对二叉树进行前序遍历，然后将遍历结果保存在数组中返回 
//既然要保存在数组中：问题：数组要给多大的空间呢？
//数组要多大空间：取决于二叉树中节点的个数
//
//获取二叉树中节点个数
int GetSize(struct TreeNode* root)
{
	if (NULL == root)
		return 0;

	return GetSize(root->left) + GetSize(root->right) + 1;
}
void _preorderTraversal(struct TreeNode* root, int* array,int* index)
{
	if (NULL == root)
		return;

	//遍历操作：将节点中的值域保存在数组中
	array[(*index)++] = root->val;
	_preorderTraversal(root->left, array, index);
	_preorderTraversal(root->right, array, index);
}

//returnSize:输出性参数---类似于另外一种返回方式---即通过参数将返回值带出去 
//返回值：返回空间的首地址
//空间中元素的个数：通过returnSize参数带出的
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
	*returnSize = GetSize(root);//获取树中有多少个节点
	int* ret = (int*)malloc((*returnSize)* sizeof(int));
	if (NULL == ret)
		return NULL;

	int index = 0;
	_preorderTraversal(root, ret, &index);
	return ret;
}