#define _CRT_SECURE_NO_WARNINGS 1
//3.�ռ临�Ӷ�
//��⣺��ʱ�临�Ӷ���һ����������ѧ���ʽ���Ǻ����д������������󣩸����ĺ���

//��1��
//unsigned long long Fib(int N)
//{
//	unsigned long long first = 1;
//	unsigned long long second = 1;
//	unsigned long long ret = 1;//������
//	for (int i = 2; i < N; ++i)
//	{
//		ret = first + second;
//		first = second;
//		second = ret;
//	}
//	return ret;
//}
//int main()
//{
//	printf("%d ", Fib(10));
//	return 0; 
//}
//int N,unsigned long long first,unsigned long long second,unsigned long long ret,int iһ�������������
//�����ı����ǹ̶��ģ���ˣ�
//�ռ临�Ӷ�O(1)