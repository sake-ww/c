#define _CRT_SECURE_NO_WARNINGS 1

������6��
��Ŀ����*�������ĸC��ͼ����
1.���������������'*'����ֽ��д����ĸC���ٷ��������
2.����Դ���룺

�������� :

#include"stdio.h"
#include "conio.h"
main()
{
	printf("Hello C-world!\n");
	printf(" ****\n");
	printf(" *\n");
	printf(" * \n");
	printf(" ****\n");
	getch();
}

������7��
��Ŀ���������ͼ��������c���������У���һ����Very Beautiful!
1.����������ַ�����256������ͬ�ַ���ͼ�β�һ����������������
2.����Դ���룺

�������� :

#include"stdio.h"
#include "conio.h"
main()
{
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	getch();
}
