#define _CRT_SECURE_NO_WARNINGS 1

//������17��
//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//1.�������������while���, ����Ϊ������ַ���Ϊ��\n��.
//
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	char c;
//	int letters = 0, space = 0, digit = 0, others = 0;
//	printf("please input some characters\n");
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
//			letters++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0'&&c <= '9')
//			digit++;
//		else
//			others++;
//	}
//	printf("all in all:char=%d space=%d digit=%d others=%d\n", letters, space, digit, others);
//	return 0;
//}
//
//������18��
//��Ŀ����s = a + aa + aaa + aaaa + aa��a��ֵ������a��һ�����֡�����2 + 22 + 222 + 2222 + 22222(��ʱ
//����5�������)������������м��̿��ơ�
//1.����������ؼ��Ǽ����ÿһ���ֵ��
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	int a, n, count = 1;
//	long int sn = 0, tn = 0;
//	printf("please input a and n\n");
//	scanf("%d %d", &a, &n);
//	printf("a=%d,n=%d\n", a, n);
//	while (count <= n)
//	{
//		tn = tn + a;
//		sn = sn + tn;
//		a = a * 10;
//		++count;
//	}
//	printf("a+aa+...=%ld\n", sn);
//	return 0;
//}
//
//������19��
//��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6 = 1��2��3.���
//�ҳ�1000���ڵ�����������
//
//�������������ճ���<�C��ҳ����14.
//2.����Դ���룺
//�������� :
//#include<stdio.h>
//int main()
//{
//	static int k[10];
//	int i, j, n, s;
//	for (j = 2; j<1000; j++)
//	{
//		n = -1;
//		s = j;
//		for (i = 1; i<j; i++)
//		{
//			if ((j%i) == 0)
//			{
//				n++;
//				s = s - i;
//				k[n] = i;
//			}
//		}
//		if (s == 0)
//		{
//			printf("%d is a wanshu", j);
//			for (i = 0; i<n; i++)
//				printf("%d,", k[i]);
//			printf("%d\n", k[n]);
//		}
//	}
//	return 0;
//}
//
//������20��
//��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£�������
//��10�����ʱ�������������ף���10�η�����ߣ�
//1.���������������ע��
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	float sn = 100.0, hn = sn / 2;
//	int n;
//	for (n = 2; n <= 10; n++)
//	{
//		sn = sn + 2 * hn;/*��n�����ʱ������������*/
//		hn = hn / 2; /*��n�η����߶�*/
//	}
//	printf("the total of road is %f\n", sn);
//	printf("the tenth is %f meter\n", hn);
//	return 0;
//}

