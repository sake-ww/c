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

//���裺�����������ǽ��ڵ��е�ֵ���ӡ����
//���ڵ�--�����ڵ��������--�����ڵ��������
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

		//���cur���Ӵ��ڣ������������
		if (cur->left)
			QueuePush(&q, cur);

		//���cur�Һ��Ӵ��ڣ����Һ��������
		if (cur->right)
			QueuePush(&q, cur);
	}
	QueueDestroy(&q);
}

int GetNodeCount(BTNode* root)//��ȡ�������нڵ�ĸ���
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
//����������--��ֱ�ӷ���
//�ǿ�--���ݹ��ȡroot�������нڵ����leftSize���ݹ��ȡroot�������нڵ����rightSize  ���return leftSize + rightSize + 1��

int GetLeafNodeCount(BTNode* root)//��ȡ��������Ҷ�ӽڵ�ĸ���
{
	if (NULL == root)
		return 0;

	if (NULL == root->left && NULL == root->right)
		return 1;

	return GetLeafNodeCount(root->left) + GetLeafNodeCount(root->right);

}
//��ȡ�������е�Ҷ�ӽڵ㷽��������--��ֱ�ӷ���0
//�ǿգ��ݹ�����������Ҷ�ӽڵ�������ݹ�����������Ҷ�ӽڵ����
//���أ�������Ҷ�ӽڵ����+������Ҷ�ӽڵ����

int GetKLevelNodeCount(BTNode* root, unsigned int k)//��ȡ�������е�k��ڵ�ĸ���
{
	if (NULL == root || k == 0)
		return 0;

	//��һ��ֻ�и��ڵ�
	if (1 == k)
		return 1;

	//������ת��Ϊ������������k-1��ڵ����
	return GetKLevelNodeCount(root->left, k - 1) + GetKLevelNodeCount(root->right, k - 1);
}
//���k���ڶ������Ĳ���ʱ������ʲô��0

BTNode* Find(BTNode* root, BTNDataType data)//��ֵΪdata�ڵ�
{	
	BTNode* ret = NULL;
	if (NULL == root)
		return NULL;

	if (root->data == data)
		return root;

	//�������������ң��ҵ���ֱ�ӷ���
	//���������û���ҵ����ڵ��������в���
	//(ret = Find(root->left, data) || Find(root->right, data));
	if (ret = Find(root->left, data))
		return ret;

	return Find(root->right,data);
}

int GetHeight(BTNode* root)//��ȡ�������ĸ߶�
{
	int leftHeight = 0, rightHeight = 0;
	if (NULL == root)
		return 0;

	leftHeight = GetHeight(root->left);
	rightHeight = GetHeight(root->right);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;

}
//������
//�����Ϊ��ֱ�ӷ���0
//�ǿ�--��ݹ���root���������ĸ߶�--return�ϸ������߶�+1��

int BinaryTreeComplete(BTNode* root)
{
	Queue q;
	int flag = 0;
	int ret = 0;
	//����Ҳ����ȫ������
	if (NULL == root)
		return 1;

	//�ǿ�
	//1.���ղ�����������ҵ�һ�������͵Ľڵ� 
	QueueInit(&q);//��ʼ��
	QueuePush(&q, root);
	while (!QUeueEmpty(&q))
	{
		BTNode* cur = QueueFront(&q);
		if (flag)
		{
			//����ڵ�Ͳ����к���
			if (cur->left || cur->right)
				break; 
		}
		else
		{
			//�ҵ�һ�������͵Ľڵ�
	    	if (cur->left && cur->right)
		    {
		    	QueuePush(&q, cur->left);
		 	    QueuePUsh(&q, cur ->right);
		     }
		     else if (cur->left)
		     {
		    	//curֻ������
			    QueuePush(&q, cur->left);
			    flag = 1;
		     }
		    else if (cur->right)
		    {
			    //curֻ�����Һ���
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
//��ȫ�������ڵ�
//���ղ������������������ĵ�һ�������ͣ������������ӣ��Ľڵ�
//���������
//1.���ղ��������ʽ�ҵ�һ�������͵Ľڵ�
//2.�Ӹýڵ�֮�����еĽڵ㲻���Ҷ������������������ȫ�����������������



void DestroyTree(BTNode** root)
{
	assert(root);//root�е����ݣ������ⲿʵ�εĵ�ַ
	if (*root)//*root�����ⲿ��ʵ��
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
	printf("ǰ���������� ");
	preOrder(root);
	printf("\n");

	printf("������������ ");
	InOrder(root);
	printf("\n");

	printf("������������ ");
	PostOrder(root);
	printf("\n");
}