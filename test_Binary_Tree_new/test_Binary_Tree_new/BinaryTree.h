#pragma once
#include<malloc.h>
#include<assert.h>
#include<stdio.h>

//binary tree node data type�������ڵ���������
typedef int BTNDataType;


typedef struct BTNode
{
	struct BTNode* left;
	struct BTNode* right;
	BTNDataType data;//�ڵ��е�ֵ��
}BTNode;


BTNode* CreateBinTree();//����
void preOrder(BTNode* root);//ǰ�����root�����
void InOrder(BTNode* root);//�������
void PostOrder(BTNode* root);//�������
void LevelOrder(BTNode* root);//�������
int GetNodeCount(BTNode* root);//��ȡ�������нڵ�ĸ���
int GetLeafNodeCount(BTNode* root);//��ȡ��������Ҷ�ӽڵ�ĸ���
int GetKLevelNodeCount(BTNode* root, unsigned int k);//��ȡ�������е�k��ڵ�ĸ���
BTNode* Find(BTNode* root, BTNDataType data);//��ֵΪdata�ڵ�
int GetHeight(BTNode* root);//��ȡ�������ĸ߶�

// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root);

void DestroyTree(BTNode** root);//����


void TestBinTree();