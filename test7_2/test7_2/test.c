#define _CRT_SECURE_NO_WARNINGS 1

//������34��
//��Ŀ����ϰ��������
//
//���������
//2.����Դ���룺
//�������� :
//#include<stdio.h>
//void hello_world(void)
//{
//	printf("Hello, world!\n");
//}
//void three_hellos(void)
//{
//	int counter;
//	for (counter = 1; counter <= 3; counter++)
//		hello_world();/*���ô˺���*/
//}
//int main()
//{
//	three_hellos();/*���ô˺���*/
//	return 0;
//}
//
//������35��
//��Ŀ���ı���ɫ����
//1.���������
//2.����Դ���룺
//�������� :
//
//#include "stdio.h"
//#include "conio.h"
//void main(void)
//{
//	int color;
//	for (color = 1; color < 16; color++)
//	{
//		textcolor(color);/*�����ı���ɫ*/
//		cprintf("This is color %d\r\n", color);
//	}
//	textcolor(128 + 15);
//	cprintf("This is blinking\r\n");
//	getch();
//}
//
//������36��
//��Ŀ����100֮�ڵ�����������
//1.���������
//2.����Դ���룺
//�������� :

#include<stdio.h>
#include<math.h>
#define N 101
int main()
{
	int i, j, line, a[N], k;
	for (k = 2; k<N; k++)
	{
		for (i = 2; i <= sqrt(k); i++)
		{
			if (k%i == 0)
				break;
		}
		if (i == (int)sqrt(k) + 1)
			printf("%d ", k);
	}
	return 0;
}
