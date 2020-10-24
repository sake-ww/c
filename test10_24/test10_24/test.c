#define _CRT_SECURE_NO_WARNINGS 1
//8.二叉树的后序遍历
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
	_preorderTraversal(root->left, array, index);
	_preorderTraversal(root->right, array, index);
	array[(*index)++] = root->val;
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