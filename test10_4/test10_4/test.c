#define _CRT_SECURE_NO_WARNINGS 1
4.��ͬ����
������������������дһ�����������������Ƿ���ͬ��
����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�
ʾ�� 1:
���� : 1         1
	    / \       / \
	   2   3     2   3

	[1, 2, 3], [1, 2, 3]
���: true

ʾ�� 2 :
���� : 1          1
	    /           \
	   2             2

	 [1, 2], [1, null, 2]

���: false

	 ʾ�� 3 :
���� : 1         1
	    / \       / \
	   2   1     1   2

	  [1, 2, 1], [1, 1, 2]
���: false

����������Ƿ���ͬ��
�����������������--����������Ϊ��--����ͬ
�������������һ��Ϊ��--����ͬ
����������Ϊ��
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