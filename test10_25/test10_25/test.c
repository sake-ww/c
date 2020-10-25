#define _CRT_SECURE_NO_WARNINGS 1
//9. 另一颗树的子树
//给定两个非空二叉树 s 和 t，检验 s 中是否包含和 t 具有相同结构和节点值的子树。s 的一个子树包括 s 的一个节点和这个节点的所有子孙。s 也可以看做它自身的一棵子树。
//
//示例 1:
//给定的树 s :
//
//   3
//  / \
// 4   5
// \
//1   2
//给定的树 t：
//
//  4
// / \
//1   2
//返回 true，因为 t 与 s 的一个子树拥有相同的结构和节点值。
//
//示例 2:
//给定的树 s：
//
//   3
//  / \
// 4   5
// \
//1   2
//   /
//   0
//给定的树 t：
//
// 4
// \
//1   2
//返回 false。
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

	//s树存在， t树不存在
	if (NULL == t)
		return true;

	//s和t都不为NULL
	//根节点一样，才有可能是子树
	if (s->val == t->val && isSameTree(s,t))
		return true;

	return isSameTree(s->left, t) || isSameTree(s->right, t);


}