#define _CRT_SECURE_NO_WARNINGS 1
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
1.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣
2.����Դ���룺

�������� :

#include"stdio.h"
#include "conio.h"
main()
{
	int day, month, year, sum, leap;
	printf("\nplease inputyear,month,day\n");
	scanf("%d,%d,%d", &year, &month, &day);
	switch (month) /*�ȼ���ĳ����ǰ�·ݵ�������*/
	{
	case1:sum = 0; break;
	case2:sum = 31; break;
	case3:sum = 59; break;
	case4:sum = 90; break;
	case5:sum = 120; break;
	case6:sum = 151; break;
	case7:sum = 181; break;
	case8:sum = 212; break;
	case9:sum = 243; break;
	case10:sum = 273; break;
	case11:sum = 304; break;
	case12:sum = 334; break;
	default:printf("dataerror"); break;
	}
	sum = sum + day; /*�ټ���ĳ�������*/
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))/*�ж��ǲ�������*/
		leap = 1;
	else
		leap = 0;
	if (leap == 1 && month>2) /*������������·ݴ���2,������Ӧ�ü�һ��*/
		sum++;
	printf("It is the %dth day.", sum);
	getch();
}
