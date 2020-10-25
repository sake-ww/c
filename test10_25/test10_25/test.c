#define _CRT_SECURE_NO_WARNINGS 1
//9. ��һ����������
//���������ǿն����� s �� t������ s ���Ƿ������ t ������ͬ�ṹ�ͽڵ�ֵ��������s ��һ���������� s ��һ���ڵ������ڵ���������s Ҳ���Կ����������һ��������
//
//ʾ�� 1:
//�������� s :
//
//   3
//  / \
// 4   5
// \
//1   2
//�������� t��
//
//  4
// / \
//1   2
//���� true����Ϊ t �� s ��һ������ӵ����ͬ�Ľṹ�ͽڵ�ֵ��
//
//ʾ�� 2:
//�������� s��
//
//   3
//  / \
// 4   5
// \
//1   2
//   /
//   0
//�������� t��
//
// 4
// \
//1   2
//���� false��
//
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
bool isSubtree(struct TreeNode* s, struct TreeNode* t)
{
	if (NULL == s)
		return false;

	//s�����ڣ� t��������
	if (NULL == t)
		return true;

	//s��t����ΪNULL
	//���ڵ�һ�������п���������
	if (s->val == t->val && isSameTree(s,t))
		return true;

	return isSameTree(s->left, t) || isSameTree(s->right, t);


}