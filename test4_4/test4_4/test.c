#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ж����ʹ�С
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));          //1
//	printf("%d\n", sizeof(short));         //2
//	printf("%d\n", sizeof(int));           //4
//	printf("%d\n", sizeof(long));          //4
//	printf("%d\n", sizeof(long long));     //8
//	printf("%d\n", sizeof(float));         //4
//	printf("%d\n", sizeof(double));        //8
//	printf("%d\n", sizeof(long double));   //8
//	return 0;
//}
//ע�⣺������ô������ͣ���ʵ��Ϊ�˸��ӷḻ�ı�������еĸ���ֵ��

//#include <stdio.h>
//int global = 2019;//ȫ�ֱ���
//int main()
//{
//	int local = 2018;//�ֲ�����
//	//���涨���global�᲻�������⣿
//	int global = 2020;//�ֲ�����
//	printf("global = %d\n", global);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";                              //bit
//	char arr2[] = { 'b', 'i', 't' };                  //bitXXXXXX(��ӡ����)
//	char arr3[] = { 'b', 'i', 't', '\0' };            //bit
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//ע���ӡʱ��Ҫ����   \0      {'','','','\0'};

//��������Ҫ����Ļ�ϴ�ӡһ��Ŀ¼�� c : \code\test.c
//���Ǹ����д���룿

//#include <stdio.h>
//int main()
//{
//	printf("c:\code\test.c\n");
//	return 0;
//}
//���Ǵ�����룬������Ϊ       c:code  est.c

//#include <stdio.h>
//int main()
//{
//	//����1������Ļ�ϴ�ӡһ��������'����ô����
//	//����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}
//ת���ַ� ����
//\ ? ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
//\' ���ڱ�ʾ�ַ�����'
//\�� ���ڱ�ʾһ���ַ����ڲ���˫����
//\\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
//\a �����ַ�������
//\b �˸��
//\f ��ֽ��
//\n ����
//\r �س�
//\t ˮƽ�Ʊ��
//\v ��ֱ�Ʊ��
//\ddd ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 X
//\xdd dd��ʾ2��ʮ���������֡� �磺 \x30 0


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));            //6
//	// \32��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));        //14     c : \t e s t \32 8 \t e s t . c 
//	return 0;
//}


//ע�ͷ���
/**/     //c����
//       //c++

//���ú������򻯴���
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &a, &b);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
////�������룬д�ɺ������£�
//#include <stdio.h>
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//����������             �Լ����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//static
//����1
//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
 //������ 1 1 1 1 1 1 1 1 1 1
//����2
//#include <stdio.h>
//void test()
//{
//	//static���ξֲ�����
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//��������1 2 3 4 5 6 7 8 9 10
//static���ǽ�һ�������̶��������´θı䡣

//ȫ�ֱ�����������������int main()֮�ⶨ��ĺ�����ʹ�ý��ʹ��ʱ�����Ǹ�ֵ��

//int Add(int x, int y) {
//	return x + y;
//}
////test.c
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}
//����2
//static int Add(int x, int y) 
//{
//	return x + y;
//}
////test.c
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}

////define�����ʶ������
//#define MAX 1000
////define�����
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//#define���峣���ͺ꣬������ʹ��

//int main()
//{
//	int num = 10;
//	&num;//ȡ��num�ĵ�ַ
//	printf("%p\n", &num);//��ӡ��ַ��%p--�Ե�ַ����ʽ��ӡ
//	return 0;
//}
//��������ͬ��ԭ��Ϊ��ÿ�δ�ŵ�ַ��ͬ

//int main()
//{
//	int num = 10;
//	int *p = &num;
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}
//ָ����Ըı������ֵ

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}
//�����4 4 4 4 
//��ÿһ����ͬ��ϵͳ��32����64����ָ���С��һ����4����8��


//�ṹ�壬������ʾ���ӵĺ�����
//struct Stu
//{
//	char name[20];//����
//	int age;      //����
//	char sex[5];  //�Ա�
//	char id[15]; //ѧ��
//};
////�ṹ��ĳ�ʼ����
////��ӡ�ṹ����Ϣ
//int main()
//{
//	struct Stu s = { "����", 20, "��", "20180101" };
//	//.Ϊ�ṹ��Ա���ʲ�����
//	printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//	//->������
//	struct Stu *ps = &s;
//	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps ->id);
//}

//typedef   �����ı䶨�庯���ı���������

