#define _CRT_SECURE_NO_WARNINGS 1
//2. ��������������
//����һ�����������ҳ��������ȡ�
//�����������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
//˵�� : Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣
//ʾ����
//����������[3, 9, 20, null, null, 15, 7]��
//
//	  3
//	 / \
//	 9  20
//	   / \
//	 15   7
//�������������� 3 ��
//
int maxDepth(struct TreeNode* root)
{
	if (NULL == root)
		return 0;//�����߶�Ϊ��

	int leftHeight = maxDepth(root->left);
	int rightHeight = maxDepth(root->right);

	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}
