#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"



#include "Queue.h"



BTNode* BUyBinTreeNode(BTNDataType data)
{
	BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
	if (NULL == newNode)
	{
		assert(0);
		return NULL;
	}
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

BTNode* CreateBinTree()
{
	BTNode* root = NULL;
	BTNode* n1 = BUyBinTreeNode(1);
	BTNode* n2 = BUyBinTreeNode(2);
	BTNode* n3 = BUyBinTreeNode(3);
	BTNode* n4 = BUyBinTreeNode(4);
	BTNode* n5 = BUyBinTreeNode(5);
	BTNode* n6 = BUyBinTreeNode(6);

	root = n1;
	root->left = n2;
	n2->left = n3;

	root->right = n4;
	n4->left = n5;
	n4->right = n6;
	return root;
}

//假设：遍历操作就是将节点中的值域打印出来
//根节点--》根节点的左子树--》根节点的右子树
void preOrder(BTNode* root)
{
	if (root)
	{
		printf("%d ", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void InOrder(BTNode* root)
{
	if (root)
	{
        InOrder(root->left);
		printf("%d ", root->data);
        InOrder(root->right);
	}
}

void PostOrder(BTNode* root)
{
	if (root)
	{	
		PostOrder(root->left);
		PostOrder(root->right);
		printf("%d ", root->data);
	}
}

void LevelOrder(BTNode* root)
{
	Queue q;
	if (NULL == root)
		return;

	QueueInit(&q);
	QueuePush(&q, root);

	while (!QUeueEmpty(&q))
	{
		BTNode* cur QueueFront(&q);
		printf("%d", cur->data);
		QueuePop(&q);

		//如果cur左孩子存在，将左孩子入队列
		if (cur->left)
			QueuePush(&q, cur);

		//如果cur右孩子存在，将右孩子入队列
		if (cur->right)
			QueuePush(&q, cur);
	}
	QueueDestroy(&q);
}

int GetNodeCount(BTNode* root)//获取二叉树中节点的个数
{
	//if (NULL == root)
	//	return 0;
	//int leftSize = GetNodeCount(root->left);
	//int rightSize = GetNodeCount(root->right);
	//return leftSize + rightSize + 1;

	//if (NULL == root)
	//	return 0;
	//return GetNodeCount(root->left) + GetNodeCount(root->right) + 1;

	ruturn NULL == root ? 0 : GetNodeCount(root->left) + GetNodeCount(root->right) + 1;
}
//方法：树空--》直接返回
//非空--》递归获取root左子树中节点个数leftSize，递归获取root右子树中节点个数rightSize  最后return leftSize + rightSize + 1；

int GetLeafNodeCount(BTNode* root)//获取二叉树中叶子节点的个数
{
	if (NULL == root)
		return 0;

	if (NULL == root->left && NULL == root->right)
		return 1;

	return GetLeafNodeCount(root->left) + GetLeafNodeCount(root->right);

}
//获取二叉树中的叶子节点方法：空树--》直接返回0
//非空：递归求左子树中叶子节点个数，递归求右子树中叶子节点个数
//返回：左子树叶子节点个数+右子树叶子节点个数

int GetKLevelNodeCount(BTNode* root, unsigned int k)//获取二叉树中第k层节点的个数
{
	if (NULL == root || k == 0)
		return 0;

	//第一层只有根节点
	if (1 == k)
		return 1;

	//将问题转换为：到子树中求k-1层节点个数
	return GetKLevelNodeCount(root->left, k - 1) + GetKLevelNodeCount(root->right, k - 1);
}
//如果k大于二叉树的层数时，返回什么？0

BTNode* Find(BTNode* root, BTNDataType data)//找值为data节点
{	
	BTNode* ret = NULL;
	if (NULL == root)
		return NULL;

	if (root->data == data)
		return root;

	//现在左子树中找，找到了直接返回
	//如果左子树没有找到，在到右子树中查找
	//(ret = Find(root->left, data) || Find(root->right, data));
	if (ret = Find(root->left, data))
		return ret;

	return Find(root->right,data);
}

int GetHeight(BTNode* root)//获取二叉树的高度
{
	int leftHeight = 0, rightHeight = 0;
	if (NULL == root)
		return 0;

	leftHeight = GetHeight(root->left);
	rightHeight = GetHeight(root->right);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;

}
//方法：
//如果树为空直接返回0
//非空--求递归求root左右子树的高度--return较高子树高度+1；

int BinaryTreeComplete(BTNode* root)
{
	Queue q;
	int flag = 0;
	int ret = 0;
	//空树也是完全二叉树
	if (NULL == root)
		return 1;

	//非空
	//1.按照层序遍历规则找第一个不饱和的节点 
	QueueInit(&q);//初始化
	QueuePush(&q, root);
	while (!QUeueEmpty(&q))
	{
		BTNode* cur = QueueFront(&q);
		if (flag)
		{
			//后序节点就不能有孩子
			if (cur->left || cur->right)
				break; 
		}
		else
		{
			//找第一个不饱和的节点
	    	if (cur->left && cur->right)
		    {
		    	QueuePush(&q, cur->left);
		 	    QueuePUsh(&q, cur ->right);
		     }
		     else if (cur->left)
		     {
		    	//cur只有左孩子
			    QueuePush(&q, cur->left);
			    flag = 1;
		     }
		    else if (cur->right)
		    {
			    //cur只有有右孩子
				break;	
	     	}
		    else
		    {
			    flag = 1;
		    }
	        QueuePop(&q);	 
  		}

		if (!QUeueEmpty(&q))
			ret = 1;
		QueueDestroy(&q);
		return ret;
		return 1;
	}
}
//完全二叉树节点
//按照层序规则往后遍历遇到的第一个不饱和（不是两个孩子）的节点
//解决方法：
//1.按照层序遍历方式找第一个不饱和的节点
//2.从该节点之后，所有的节点不能右二叉树，如果有则不是完全二叉树，如果有则是



void DestroyTree(BTNode** root)
{
	assert(root);//root中的内容：就是外部实参的地址
	if (*root)//*root才是外部的实参
	{
		DestroyTree(&(*root)->left);
		DestroyTree(&(*root)->right);
		free(*root);
		*root = NULL;
	}
}

void TestBinTree()
{
	BTNode* root = CreateBinTree();
	printf("前序遍历结果： ");
	preOrder(root);
	printf("\n");

	printf("中序遍历结果： ");
	InOrder(root);
	printf("\n");

	printf("后序遍历结果： ");
	PostOrder(root);
	printf("\n");
}