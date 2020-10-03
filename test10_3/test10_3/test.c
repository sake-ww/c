#define _CRT_SECURE_NO_WARNINGS 1

//3.翻转二叉树
//翻转一棵二叉树。
//示例：
//输入：
//    4
//   / \
//  2   7
// / \ / \
//1   3 6   9
//
//输出：
//    4
//   / \
//  7   2
// / \ / \
//9  6 3  1
//方法一：用循环的方式进行
struct TreeNode* invertTree(struct TreeNode* root)
{
	if (root)
	{
		//将root的左右孩子进行交换
		struct TreeNode* temp = root->left;
		root->left = root->right;
		root->right = temp;

		//用递归的方式求左孩子和右孩子
		invertTree(root->left);
		invertTree(root->right);
	}
	return root;
}

方法二：利用层序遍历
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