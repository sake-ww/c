#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ļ��������д
//�������ⲿ���ļ����ݸ�Ϊ��abcdef
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//fseek:�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ�롣
//	//pf����ص�ָ��
//	//2��ƫ���� ������Ϊ������
//	//SEEK_END���ļ�ָ��ĵ�ǰλ��
//	
//	//SEEK_CUR�ļ�ָ��ĵ�ǰλ�ã�
//	//SEEK_END�ļ���ĩβλ�ã�����ʱָ����\0ǰ�棩
//	//SEEK_SET�ļ���ʼλ�ã�
//	//����pfָ����ļ�ָ�� �ԣ��ļ�ָ��ĵ�ǰλ�ã�Ϊ������ƫ�� ƫ�ƣ�ƫ������
//
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//ftell�������ļ�ָ���������ʼλ�õ�ƫ����
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//�����4
//ԭ��:�������ⲿ���ļ�������abcdefһ������fseek(pf, -2, SEEK_END)�൱�ڴӺ���ǰ����������6-2=4

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//��ʱ���ǲ���λ�ļ�ָ�룬Ĭ�ϴ��ļ���λ������ʼλ��
//���������0

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	fgetc(pf);
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//��ʱ���Ƕ�ȡһ������ʱ�ļ�ָ��������ƫ��һ��
//�������Ϊ��1

//rewind�����ļ�ָ���λ�ûص��ļ�����ʼλ��
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);//��ʱ���Ƕ�ȡһ������ʱ�ļ�ָ��������ƫ��һ��
//	printf("%c\n", ch);
//
//	rewind(pf);//��ָ���λ�÷�������ʼλ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//�����a
//      a
//----------------------------------------------------------------------
//�ļ������ж�feof

//�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
//����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β������

//1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF ��fgetc��������NULL��fgets��
//2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����

//int main()
//{
//	//EOF  ת������ᷢ����ֵΪ-1
//	//feof();//EOF - end of file - �ļ�������־
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//��ʱ���ǽ��ⲿ�ļ�test.txt�������ݸ�Ϊ�����գ�
//���д��루����ⲿ�ļ���������ݣ���-1

//����perror(����Ҫ����ͷ�ļ���
//int main()
//{
//	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(errno));
//	
//	//perror
//	FILE* pf = fopen("test2.txt", "r");//test2.txt�ļ�������
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//���ļ�
//  //����������	
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//�����open file test2.txt��No such file or directory�����׷��־������
//����ȫ�������strerror(errno)��

//�ⲿ�ļ�test.txt���ݸ�Ϊ��abcdef
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}
	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;

	return 0;
}




