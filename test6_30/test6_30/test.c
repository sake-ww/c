#define _CRT_SECURE_NO_WARNINGS 1
//
//������26��
//��Ŀ�����õݹ鷽����5!��
//1.����������ݹ鹫ʽ��fn = fn_1 * 4!
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	int i;
//	int fact(int j);
//	for (i = 1; i <= 5; i++)
//		printf("%d!=%d\n", i, fact(i));
//	return 0;
//}
//int fact(int j)
//{
//	int sum;
//	if (j == 0)
//		sum = 1;
//	else
//		sum = j*fact(j - 1);
//	return sum;
//}
//
//������27��
//��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
//1.���������
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	int i = 5;
//	void palin(int n);
//	palin(i);
//	printf("\n");
//	return 0;
//}
//void palin(int n)
//{
//	char next;
//	if (n <= 1)
//	{
//		next = getchar();
//		printf("\n\0:");
//		putchar(next);
//	}
//	else
//	{
//		next = getchar();
//		palin(n - 1);
//		putchar(next);
//	}
//}
//
//������28��
//��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�
//3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ���
//�ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
//1.������������õݹ�ķ������ݹ��Ϊ���ƺ͵��������׶Ρ�Ҫ��֪�����������������֪��
//�����˵��������������ƣ��Ƶ���һ�ˣ�10�꣩���������ơ�
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//age(int n)
//{
//	int c;
//	if (n == 1) c = 10;
//	else c = age(n - 1) + 2;
//	return(c);
//}
//int main()
//{
//	printf("%d", age(5));
//	return 0;
//}
//
//������29��
//��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
//
//���������ѧ��ֽ��ÿһλ�������½��ͣ�(������һ�ּ򵥵��㷨��ʦר��002�������ṩ)
//2.����Դ���룺
//�������� :
//#include<stdio.h>
//int main()
//{
//	long a, b, c, d, e, x;
//	scanf("%ld", &x);
//	a = x / 10000;/*�ֽ����λ*/
//	b = x % 10000 / 1000;/*�ֽ��ǧλ*/
//	c = x % 1000 / 100;/*�ֽ����λ*/
//	d = x % 100 / 10;/*�ֽ��ʮλ*/
//	e = x % 10;/*�ֽ����λ*/
//	if (a != 0) printf("there are 5, %ld %ld %ld %ld %ld\n", e, d, c, b, a);
//	else if (b != 0) printf("there are 4, %ld %ld %ld %ld\n", e, d, c, b);
//	else if (c != 0) printf(" there are 3,%ld %ld %ld\n", e, d, c);
//	else if (d != 0) printf("there are 2, %ld %ld\n", e, d);
//	else if (e != 0) printf(" there are 1,%ld\n", e);
//	return 0;
//}
