#define _CRT_SECURE_NO_WARNINGS 1
//2. 二叉树的最大深度
//给定一个二叉树，找出其最大深度。
//二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
//说明 : 叶子节点是指没有子节点的节点。
//示例：
//给定二叉树[3, 9, 20, null, null, 15, 7]，
//
//	  3
//	 / \
//	 9  20
//	   / \
//	 15   7
//返回它的最大深度 3 。
//
int maxDepth(struct TreeNode* root)
{
	if (NULL == root)
		return 0;//空树高度为零

	int leftHeight = maxDepth(root->left);
	int rightHeight = maxDepth(root->right);

	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}
