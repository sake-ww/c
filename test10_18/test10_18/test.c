#define _CRT_SECURE_NO_WARNINGS 1

5.称二叉树
给定一个二叉树，检查它是否是镜像对称的。
例如，二叉树[1, 2, 2, 3, 4, 4, 3] 是对称的。
    1
   / \
  2   2
 / \ / \
3  4 4  3

但是下面这个[1, 2, 2, null, 3, null, 3] 则不是镜像对称的:
   1
  / \
 2   2
  \   \
   3    3

检测p和q是否为镜像
bool _isSymmetric(struct TreeNode* p, struct TreeNode* q)
{
	if (NULL == p && NULL == q)
		return true;

	if (NULL == p || NULL == q)
		return false;

	return p->val == q->val &&
		_isSymmetric(p->left, q->right) &&
		_isSymmetric(p->right,q->left);
}
bool isSymmetric(struct TreeNode* root)
{
	if (NULL == root)
		return true;

	return _isSymmetric(root->left, root->right);
}

//