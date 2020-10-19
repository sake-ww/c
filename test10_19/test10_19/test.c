#define _CRT_SECURE_NO_WARNINGS 1

//6.��������ǰ�����
//����һ������������������ ǰ�� ������
//
//ʾ�� :
//���� : [1, null, 2, 3]
//	1
//	 \
//	  2 
//	 /
//	3
//���:[1, 2, 3]
//
//�Զ���������ǰ�������Ȼ�󽫱�����������������з��� 
//��ȻҪ�����������У����⣺����Ҫ�����Ŀռ��أ�
//����Ҫ���ռ䣺ȡ���ڶ������нڵ�ĸ���
//
//��ȡ�������нڵ����
int GetSize(struct TreeNode* root)
{
	if (NULL == root)
		return 0;

	return GetSize(root->left) + GetSize(root->right) + 1;
}
void _preorderTraversal(struct TreeNode* root, int* array,int* index)
{
	if (NULL == root)
		return;

	//�������������ڵ��е�ֵ�򱣴���������
	array[(*index)++] = root->val;
	_preorderTraversal(root->left, array, index);
	_preorderTraversal(root->right, array, index);
}

//returnSize:����Բ���---����������һ�ַ��ط�ʽ---��ͨ������������ֵ����ȥ 
//����ֵ�����ؿռ���׵�ַ
//�ռ���Ԫ�صĸ�����ͨ��returnSize����������
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
	*returnSize = GetSize(root);//��ȡ�����ж��ٸ��ڵ�
	int* ret = (int*)malloc((*returnSize)* sizeof(int));
	if (NULL == ret)
		return NULL;

	int index = 0;
	_preorderTraversal(root, ret, &index);
	return ret;
}