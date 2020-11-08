#define _CRT_SECURE_NO_WARNINGS 1
//11. �������Ĺ���������
//��Ŀ����
//��һ�����򣬶����û������һ����������ַ��������ݴ��ַ�������һ������������ָ�뷽ʽ�洢���� �������µ���������ַ����� ABC##DE#G##F### ���С�#����ʾ���ǿո񣬿ո��ַ����������������˶������Ժ��ٶԶ������������������������������
//�������� :
//�������1���ַ��������Ȳ�����100��
//������� :
//�����ж���������ݣ�����ÿ�����ݣ�
//����������ַ���������������������������У�ÿ���ַ����涼��һ���ո�
//ÿ��������ռһ�С�
//ʾ��1
//����
//abc##de#g##f###
//���
//c b e g d f a
//
#include<malloc.h>
#include<stdio.h>
typedef struct TreeNode
{
	struct TreeNode* left;
	struct TreeNode* right;
	char ch;
}TreeNode;

TreeNode* BuyTreeNode(char ch)
{
	TreeNode* newnode = (TreeNode*)malloc(sizeof(TreeNode)); 
	if (NULL == newnode)
		return NULL;

	newnode->left = NULL;
	newnode->right = NULL;
	newnode->ch = ch; 
	return newnode;
}

TreeNode* CreatBinTree(char szTree[], int size, int* index, char invalid)
{
	TreeNode* root = NULL;
	if (*index < size && szTree[*index] != invalid)
	{
		//�������ڵ�
		root = BuyTreeNode(szTree[*index]);

		//�������ڵ��������
		++(*index);
		root->left = CreatBinTree(szTree, size, index, invalid);

		//�������ڵ��������
		++(*index);
		root->right = CreatBinTree(szTree, size, index, invalid);
	}
	return root;
}


void InOrder(TreeNode* root)//�������
{
	if (root)
	{
		InOrder(root->left);
		printf("%c ", root->ch);
		InOrder(root->right);
	}
}

int main()
{
	char szTree[100] = { 0 };
	int size = 0;
	int index = 0;
	while (EOF != scanf("%s", szTree))//������Ľ����Ϊѭ������--���û��ѭ���������룬ֻ�ܲ���һ������û������������Ľ���ǣ�ֻͨ����XX%������
	{
		index = 0;
		size = strlen(szTree);
		TreeNode* root = CreatBinTree(szTree, size, &index, '# ');
		InOrder(root);
		printf("\n");
	}
	return 0;
}