#define _CRT_SECURE_NO_WARNINGS 1
//10. 判断一颗二叉树是否是平衡二叉树，高度差值也叫平衡因子
//给定一个二叉树，判断它是否是高度平衡的二叉树。
//本题中，一棵高度平衡二叉树定义为：
//一个二叉树每个节点的左右两个子树的高度差的绝对值不超过1。
//
//示例 1:
//给定二叉树[3, 9, 20, null, null, 15, 7]
// 3
// \
//9  20
//  / \
//15   7
//返回 true 。
//示例 2:
//给定二叉树[1, 2, 2, 3, 3, null, null, 4, 4]
//     1
//    / \
//   2   2
//  / \
// 3   3
// \
//4  4
//返回 false 。
//
int Height(struct TreeNode* root)
{
	if (NULL == root)
		return 0;

	int leftHeight = Height(root->left);
	int rightHeighr = Height(root->right);

	return leftHeight > rightHeighr ? leftHeight + 1 : rightHeighr + 1;	
}

以下代码有缺陷：
bool isBalanced(struct TreeNode* root)
{
	if (NULL == root)
		return true;

	//检测根节点是否满足平衡性
	int leftHeight = Height(root->left);
	int rightHeight = Height(root->right);
	if (abs(rightHeight - leftHeight) > 1)//abs绝对值
		return false;

	//递归检测根节点的左右子树是否满足平衡树的性质
	return isBalanced(root->left) && isBalanced(root->right);
}
该种检测平衡树的方式：代码检测效率低
检测每层节点时都需要求上一层节点的高度，即：求n层时需要求（1+2+3+...n）即：时间复杂度为：O(N^2)
上面的方法时：从上往下来进行检测--必然会有大量求高度的重复
能否对上述问题进行优化？
从下往上进行检测：
bool _isBalanced(struct TreeNode* root,int* height)
{
	if (NULL == root)
	{
		*height = 0;
		return true;
	}
	int leftHeight = 0, rightHeight = 0;
	if (_isBalanced(root->left, &leftHeight) &&
		_isBalanced(root->right, &rightHeight) &&
		abs(rightHeight - leftHeight) <= 1)
	{
		*height = leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
		return true;
	}
	return false;
}
bool isBalanced(struct TreeNode* root)
{
	int height = 0;
	return _isBalanced(root, &height);
}