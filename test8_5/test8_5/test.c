#define _CRT_SECURE_NO_WARNINGS 1


//��ͷ�ڵ�������������Ż�
//�����е�һ���ڵ����Ƿ�����Ч���ݣ�����������Ч���ݣ���Ϊ��ͷ�ڵ��������������Ч���ݣ���Ϊ����ͷ�ڵ������

//��ͷ�ڵ����������ɾ�������Ȳ���ͷ�ڵ�������
//��ͷ�ڵ�ĵ�����
#include<stdio.h>
#include<malloc.h>
typedef struct SHListNode
{
	int data;
	struct SHListNode* next;
}SHListNode;

void SHListPushBack(SHListNode* head, int data)
{
	SHListNode* newNode = (SHListNode*)malloc(sizeof(SHListNode));
	newNode->next = NULL;
	newNode->data = data;	

	SHListNode* tailNode = head;
	while (tailNode->next)
	{
		tailNode = tailNode->next;
	}
	tailNode->next = newNode;
}

void TestHList()
{
	SHListNode headNode;//�����ͷ�ڵ�
	headNode.next = NULL;
	SHListNode(&headNode, 1);
	SHListNode(&headNode, 2);
	SHListNode(&headNode, 3);
	SHListNode(&headNode, 4);
	SHListNode(&headNode, 5);

}
int main()
{
	TestHList();
	return 0;
}
//���⣺��ͷ�ڵ������ͷ����ֵ����û�д����Ч���ݣ� �ܷ�����ĳ��ȼ���������Ч�ڵ�ĸ����洢��ͷ����ֵ�����أ�

/*
��ͷ�ڵ�ĵ������벻��ͷ�ڵ�ĵ��������֣�
��1����һ���ڵ��Ƿ񱣴���Ч���ݣ������һ���ڵ�û�б�����Ч������Ϊ��ͷ�ڵ������������ǲ���ͷ�ڵ������
��2����ͷ�ڵ�����������Ӽ�---����Ҫ���ݶ���ָ��
���⣺��Ȼ��ͷ�ڵ�������е�һ���ڵ��в�������Ч���ݣ��ܷ�����ĳ��ȴ洢��ͷ����ֵ���У�
�𣺲���
struct ListNode
{
struct LisrNode* next;
�ֶΣ��洢�ڵ��е�����//�����Ժ����������洢ʲô���͵����ݣ����ǾͰ�����ڵ����ʲô���ͣ������Ҫ����Ӧ�ó�����ȷ����
//���Σ�int-----------�������Լ��ķ�Χ�������������ݳ��������Χ�����Ǿͱ�ʾ����
//�ַ���char----------ͬ����һ����һ����Χ��-128��127���������Ҫ������洢1000�����ݣ����ǽ�1000������ݷŵ�����ͻᱻ�ض�
//�ṹ�壺�ṹ��
};
�ҵ���⣺�ֶ���һ�д����У��������������洢һ�����֣�������ʾ�������ĳ��ȣ�����Ӧ�����Ǹ���������ʾ��
ÿһ�����Ͷ����Լ������޺����ޣ����磺charֻ�ܱ�ʾ-128��127��intֻ�ܱ�ʾ�����������޷��ҵ�һ���ܹ���ʾ��������ֵ����ͣ����Բ���
������һ��ҲҪ��ʾ������������ݵ�����

��Щ�鱾������һ�л��ʾ������Ԫ�صĸ�������������Ҫ�����������������ȡ��һ�����������Ԫ�ض��ˣ�������ʾ�Ͳ�׼ȷ��
*/