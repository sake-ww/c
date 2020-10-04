#define _CRT_SECURE_NO_WARNINGS 1
4.相同的树
给定两个二叉树，编写一个函数来检验它们是否相同。
如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
示例 1:
输入 : 1         1
	    / \       / \
	   2   3     2   3

	[1, 2, 3], [1, 2, 3]
输出: true

示例 2 :
输入 : 1          1
	    /           \
	   2             2

	 [1, 2], [1, null, 2]

输出: false

	 示例 3 :
输入 : 1         1
	    / \       / \
	   2   1     1   2

	  [1, 2, 1], [1, 1, 2]
输出: false

检测两棵树是否相同：
如果两课树都不存在--》两棵树都为空--》相同
如果两棵树中有一个为空--》不同
两棵树都不为空
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	if (NULL == p && NULL == q)
		return true;

	if (NULL == p || NULL == q)
		return false;

	return p->val == q->val &&
		isSameTree(p->left, q->right) &&
		isSameTree(p->right, q->left);
}