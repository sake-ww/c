#define _CRT_SECURE_NO_WARNINGS 1

1.单值二叉树
如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。
只有给定的树是单值二叉树时，才返回 true；否则返回 false。

示例 1：
输入：[1, 1, 1, 1, 1, null, 1]
输出：true
示例 2：
输入：[2, 2, 2, 5, 2]
输出：false

提示：
给定树的节点数范围是 [1, 100]。
每个节点的值都是整数，范围为 [0, 99] 。

原题没有考虑空树的情况下，我们应该如何？尝试返回值为true，然后根据结果而变

因为要用递归，所以我们创建了一个新的_isUnivalTree
bool _isUnivalTree(struct TreeNode* root,int value)
{
	if (NULL == root)//先检查二叉树是否为空
		return true;

	if (root->val != value)//检查二叉树的根是否为value
		return false

	//递归检查二叉树的左子树和右子树节点是否和根节点相等 
	return _isUnivalTree(root->left, value) && _isUnivalTree(root->right, value);
}

bool isUnivalTree(struct TreeNode* root)
{
	if (NULL == root)
		return true;
	//原题没有说空树的情况下返回什么，我们假设返回true，一会提交，再根据情况而变

	int value = root->val;//将根的值赋予value，（用于检测）
	return _isUnivalTree(root, value);
}