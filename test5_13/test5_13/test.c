#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//FILE*
//strerror(errno)
#include <errno.h>
#include <string.h>

//��ϰ��fgetc��fputc
//д�ļ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//���ļ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);//fgetcֻ�ܶ�һ��
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//���ļ�
//��ʱ���ⲿ��test.txt���ڵڶ�������һ���ַ�����㣩�����磺hello
//int main()
//{
//	char buf[1024] = { 0 };//����һ����ʱ����
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	printf("%s\n", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//�����
//abc
//
//�밴���������.....
//buf�����Դ�һ�����У����Բ��ü�\n
//���ͣ��������ļ�����洢ʱ���洢�ľ���abc\n��������ȡʱ��Ҳ��\n��ȡ�ˣ����Ի�����
//      �����Լ����ļ�����д��helloû��д\n�����Զ�ȡʱ������\n
//һ��ֻ�ܶ�ȡһ�У���������������

//int main()
//{
//	char buf[1024] = { 0 };//����һ����ʱ����
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//fgets��..1......,....2....,...3.....��;
//��ȡ��3Ϊ��ַ�����ݣ�����ŵ�1���棬��ȡ 2���ݣ����֣� ��С������

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//ע�⣺fputs���д�Ļ����Ҫ���У��Լ�Ҫд\n����Ȼ����һ���ַ�

//���벢��ȡ�ַ���
//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	//char buf[1024] = {0};
//	////fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	////fputs(buf, stdout);//�������׼�����
//
//	//�ȼ���
//
//	//gets(buf);
//	//puts(buf);
//
//	return 0;
//}

//����ṹ��
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "abc" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ȡ�ṹ��
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//
//	return 0;
//}
// %.2f ����ָ����ȡС�����λ



