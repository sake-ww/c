#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//�ṹ�崫��
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//int main()
//{
//	struct S s;
//	s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//	printf("%d %c %f", s.a,s.c,s.d);
//	return 0;
//}
//---------------------------------
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//	printf("%d %c %f\n", tmp.a, tmp.c, tmp.d);//�������
//	                                          //����������δ��ݵ������Ͷ�������ֵ
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(s);
//	printf("%d %c %f", s.a,s.c,s.d);//0   0.00000//�ڶ���%c   //����ȥ���ı�s
//	return 0;
//}
//������Ϊ��100 w 3.140000
//            0   0.000000

//tmp��s  �ĵ�ַ��һ��
//������Init(s);���ݵĽṹ�岻�ܱ��ı䣬�����ı䣬����Ҫ��ַ

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//	printf("%d %c %f", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	printf("%d %c %f", s.a,s.c,s.d);
//	return 0;
//}
//������Ϊ��100 w 3.140000
//            100 w 3.140000

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %f\n", tmp.a, tmp.c, tmp.d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	//��ӡ�ṹ��
//	Print1(s);//��ӡ�ṹ��ʱ������ֱ�Ӵ�s����ֵ��
//	return 0;
//}

struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
void Print2(struct S* ps)
//void Print2(const struct S* ps)//��ֹps���ı�
{
	printf("%d %c %f", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	//��ӡ�ṹ��
	Print2(&s);//��ӡ�ṹ��ʱ������ֱ�Ӵ�s
	           //��ӡ�ṹ��ʱ����ַ��s���С�
	return 0;
}





