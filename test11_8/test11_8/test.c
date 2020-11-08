#define _CRT_SECURE_NO_WARNINGS 1
//11. 二叉树的构建及遍历
//题目描述
//编一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树（以指针方式存储）。 例如如下的先序遍历字符串： ABC##DE#G##F### 其中“#”表示的是空格，空格字符代表空树。建立起此二叉树以后，再对二叉树进行中序遍历，输出遍历结果。
//输入描述 :
//输入包括1行字符串，长度不超过100。
//输出描述 :
//可能有多组测试数据，对于每组数据，
//输出将输入字符串建立二叉树后中序遍历的序列，每个字符后面都有一个空格。
//每个输出结果占一行。
//示例1
//输入
//abc##de#g##f###
//输出
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
		//创建根节点
		root = BuyTreeNode(szTree[*index]);

		//创建根节点的左子树
		++(*index);
		root->left = CreatBinTree(szTree, size, index, invalid);

		//创建根节点的右子树
		++(*index);
		root->right = CreatBinTree(szTree, size, index, invalid);
	}
	return root;
}


void InOrder(TreeNode* root)//中序遍历
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
	while (EOF != scanf("%s", szTree))//将输入的结果作为循环条件--如果没有循环接受输入，只能测试一组测试用户，经常看到的结果是：只通过了XX%的用例
	{
		index = 0;
		size = strlen(szTree);
		TreeNode* root = CreatBinTree(szTree, size, &index, '# ');
		InOrder(root);
		printf("\n");
	}
	return 0;
}