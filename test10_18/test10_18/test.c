#define _CRT_SECURE_NO_WARNINGS 1

5.�ƶ�����
����һ����������������Ƿ��Ǿ���ԳƵġ�
���磬������[1, 2, 2, 3, 4, 4, 3] �ǶԳƵġ�
    1
   / \
  2   2
 / \ / \
3  4 4  3

�����������[1, 2, 2, null, 3, null, 3] ���Ǿ���ԳƵ�:
   1
  / \
 2   2
  \   \
   3    3

���p��q�Ƿ�Ϊ����
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