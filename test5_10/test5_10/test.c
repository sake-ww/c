#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ܴ�����ʱ��������������������ʵ���������Ľ�����
//��򷽷�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//���ͣ�a = a^b
//      b = a^b^b=a
//      a = a^a^b=b


//�Ӽ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//
//	return 0;
//}


//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ�����
//1
//int main()
//{
//	int num = 10;
//	int count = 0;//����
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}//2
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//����
//	for (i = 0; i<32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}
//3
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//����
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}

//sizeof��������������ͣ���ռ�ռ�Ĵ�С��
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)40
//	printf("%d\n", sizeof(ch));//(3)10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//++��--�����
//ǰ��++��--
//ǰ��++��--��
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int x = ++a;
//	//�ȶ�a����������Ȼ���ʹ��a��Ҳ���Ǳ��ʽ��ֵ��a����֮���ֵ��xΪ11��
//	int y = --a;
//	//�ȶ�a�����Լ���Ȼ���ʹ��a��Ҳ���Ǳ��ʽ��ֵ��a�Լ�֮���ֵ��yΪ10;
//	return 0;
//}

//����++��--
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int x = a++;
//	//�ȶ�a��ʹ�ã������ӣ�����x��ֵ��10��֮��a���11��
//	int y = a--;
//	//�ȶ�a��ʹ�ã����Լ�������y��ֵ��11��֮��a���10��
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//��������Ľ����ʲô��//a=1 b=2 c=3 d=4


//if (a > 5)
//b = 3;
//else
//b = -3;
//����������exp1 ?exp2 : exp3

// b=(a>5?a:-3)























