#define _CRT_SECURE_NO_WARNINGS 1

//3.��ת������
//��תһ�ö�������
//ʾ����
//���룺
//    4
//   / \
//  2   7
// / \ / \
//1   3 6   9
//
//�����
//    4
//   / \
//  7   2
// / \ / \
//9  6 3  1
//����һ����ѭ���ķ�ʽ����
struct TreeNode* invertTree(struct TreeNode* root)
{
	if (root)
	{
		//��root�����Һ��ӽ��н���
		struct TreeNode* temp = root->left;
		root->left = root->right;
		root->right = temp;

		//�õݹ�ķ�ʽ�����Ӻ��Һ���
		invertTree(root->left);
		invertTree(root->right);
	}
	return root;
}

�����������ò������
void MirrorNor(BTNode* root)
{
	Queue q;
	if (NULL == root)
		return;

	Queueinit(&q);
	QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* cur = QueueFront(&q);
		BTNode* temp = cur->left;
		cur->left = cur->right;
		cur->right = cur->temp;

		QueuePop(&q);

		if (cur->left)
			QueuePush(&q, cur->left);

		if (cur->right)
			QueuePush(&q, cur->right);
	}
	QueueDestroy(&q);
}