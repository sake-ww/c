#define _CRT_SECURE_NO_WARNINGS 1


//������30��
//��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��������
//1.���������ͬ29��
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	long ge, shi, qian, wan, x;
//	scanf("%ld", &x);
//	wan = x / 10000;
//	qian = x % 10000 / 1000;
//	shi = x % 100 / 10;
//	ge = x % 10;
//	if (ge == wan&&shi == qian)/*��λ������λ����ʮλ����ǧλ*/
//		printf("this number is a huiwen\n");
//	else
//		printf("this number is not a huiwen\n");
//	return 0;
//}
//
//������31��
//��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ���������
//�жϵڶ�����ĸ��
//1.�����������������ȽϺã������һ����ĸһ�������ж����������if����жϵڶ�����ĸ��
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	char letter;
//	printf("please input the first letter of someday\n");
//	while ((letter = getchar()) != 'Y')/*��������ĸΪYʱ�Ž���*/
//	{
//		switch (letter)
//		{
//		case 'S':printf("please input second letter\n");
//			if ((letter = getchar()) == 'a')
//				printf("saturday\n");
//			else if ((letter = getchar()) == 'u')
//				printf("sunday\n");
//			else
//				printf("data error\n");
//			break;
//		case 'F':printf("friday\n"); break;
//		case 'M':printf("monday\n"); break;
//		case 'T':printf("please input second letter\n");
//			if ((letter = getchar()) == 'u')
//				printf("tuesday\n");
//			else if ((letter = getchar()) == 'h')
//				printf("thursday\n");
//			else
//				printf("data error\n");
//			break;
//		case 'W':printf("wednesday\n"); break;
//		default: printf("data error\n");
//		}
//	}
//	return 0;
//}
//
//������32��
//��Ŀ��Press any key to change color, do you want to try it.Please hurry up!
//1.���������������������������������
//2.����Դ���룺
//�������� :
//
//#include "conio.h"
//#include "stdio.h"
//void main(void)
//{
//	int color;
//	for (color = 0; color < 8; color++)
//	{
//		textbackground(color);/*�����ı��ı�����ɫ*/
//		cprintf("This is color %d\r\n", color);
//		cprintf("Press any key to continue\r\n");
//		getch();/*�����ַ�������*/
//	}
//}
//
//������33��
//��Ŀ��ѧϰgotoxy()��clrscr()����������
//1.���������
//2.����Դ���룺
//�������� :
//
//#include "conio.h"
//#include "stdio.h"
//void main(void)
//{
//	clrscr();/*��������*/
//	textbackground(2);
//	gotoxy(1, 5);/*��λ����*/
//	cprintf("Output at row 5 column 1\n");
//	textbackground(3);
//	gotoxy(20, 10);
//	cprintf("Output at row 10 column 20\n");
//	getch();
//}
