#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ԱȺ���
//scanf/fscanf/sscanf
//printf/fprintf/sprintf

//scanf/printf ����Ա�׼������/��׼������� ��ʽ������/������ 
//fscanf/fprintf ���������������/����������� ��ʽ������/������ 
//��Ϊ��������fscanf/fprintf����scanf/printf

//sscanf/sprintf
//sscanf/swscanf 
//scanf ��һ���ַ��������ȡһ����ʽ�������ݣ�read formatted data from a string�� 

//sprintf/swprintf
//д��ʽ�������ݵ�һ���ַ�������
 
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "abcdef" };
//	//��s���������ת��Ϊ�ַ��� 
//	char buf[1024] = { 0 };
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//�����100 3.140000 abcdef
//	//������%s����ʽ�������Ϊ��������������ǳɹ�����ת��Ϊ�ַ���
//	//��sprintf�������ѽṹ�����������ת��Ϊ�ַ��� 
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
//	
//	struct S s = { 100, 3.14f, "abcdef" };
//	struct S tmp = { 0 };//�½��ṹ��
//	char buf[1024] = { 0 };
//	//���Ǵ�buf������ȡһ���ṹ�壬����һ�����뷭���ȥ 
//	//��һ�����룬���ǽ��ṹ�巭����ַ�������ʱ���ǰ��ַ��������ȥ
//
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	//��������100 3.140000 abcdef
//	
//
//	return 0;
//}
//sscanf/sprintf
//sscanf�Ǵ��ַ����ж�ȡ��ʽ��������
//sprintf�ǰѸ�ʽ����������ɣ��洢�����ַ���

//�����Ƶ����������

//�����Ƶ�����
//struct S
//{
//
//    char name[20];
//    int age;
//    double score;
//};
//
//int main()
//{
//     struct S s = { "����", 20, 55.6 };
//
//     FILE* pf = fopen("test.txt", "wb");
//     if (pf == NULL)
//     {
//         return 0;
//     }
//     //�����Ƶ���ʽд�ļ�
//     fwrite(&s, sizeof(struct S), 1, pf);
//           ��ȡ��ַ  ��ȡ��С  ��ȡ���� ��ȡ��  
//     fclose(pf);
//     pf = NULL;
//     return 0;
//}
//��ʱ���г������ⲿ��test.txt�ļ�������֣�����������������ʶ�ģ�
//��ʱ���Ǳ��Ѿ��������Զ����Ƶ���ʽд���ļ�������

//�����Ƶ����
//struct S
//{
//     char name[20];
//     int age;
//     double score;
//};
//
//int main()
//{
//     //struct S s = { "����", 20, 55.6 };
//     struct S tmp = { 0 };
//
//     FILE* pf = fopen("test.txt", "rb");
//     if (pf == NULL)
//    {
//         return 0;
//     }
//     //�����Ƶ���ʽ���ļ�
//     fread(&tmp, sizeof(struct S), 1, pf);
//     printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//     fclose(pf);
//     pf = NULL;
//     return 0;
//}
//���д��룬��� 20 55.600000
//��Ȼ�ⲿ�ļ��Զ����ƵĴ洢���ǿ������������ڲ��������û���κ�����










