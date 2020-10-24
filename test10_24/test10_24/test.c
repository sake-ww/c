#define _CRT_SECURE_NO_WARNINGS 1
//8.�������ĺ������
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
	_preorderTraversal(root->left, array, index);
	_preorderTraversal(root->right, array, index);
	array[(*index)++] = root->val;
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