#pragma once
#include<malloc.h>
#include<assert.h>
#include<stdio.h>

//binary tree node data type二叉树节点数据类型
typedef int BTNDataType;


typedef struct BTNode
{
	struct BTNode* left;
	struct BTNode* right;
	BTNDataType data;//节点中的值域
}BTNode;


BTNode* CreateBinTree();//创建
void preOrder(BTNode* root);//前序遍历root这个数
void InOrder(BTNode* root);//中序遍历
void PostOrder(BTNode* root);//后序遍历
void LevelOrder(BTNode* root);//层序遍历
int GetNodeCount(BTNode* root);//获取二叉树中节点的个数
int GetLeafNodeCount(BTNode* root);//获取二叉树中叶子节点的个数
int GetKLevelNodeCount(BTNode* root, unsigned int k);//获取二叉树中第k层节点的个数
BTNode* Find(BTNode* root, BTNDataType data);//找值为data节点
int GetHeight(BTNode* root);//获取二叉树的高度

// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root);

void DestroyTree(BTNode** root);//销毁


void TestBinTree();