#define _CRT_SECURE_NO_WARNINGS 1


////��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
////1.�����������10�������жϣ��Ƚ���������100���ٿ������ٽ���������268���ٿ��������������
////�Ľ�������������������ǽ�����뿴���������
////2.����Դ���룺
//#include "math.h"
//#include "stdio.h"
//#include "conio.h"
//main()
//{
//	long int i, x, y, z;
//	for (i = 1; i<100000; i++)
//	{
//		x = sqrt(i + 100); /*xΪ����100�󿪷���Ľ��*/
//		y = sqrt(i + 268); /*yΪ�ټ���168�󿪷���Ľ��*/
//		if (x*x == i + 100 && y*y == i + 268) /*���һ������ƽ������ƽ�����ڸ�������˵����������ȫƽ����*/
//			printf("/n%ld/n", i);
//	}
//	getch();
//}
////��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
////1.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬����
////����������������·ݴ���3ʱ�迼�Ƕ��һ�졣
////2.����Դ���룺
//#include "stdio.h"
//#include "conio.h"
//main()
//{
//	int day, month, year, sum, leap;
//	printf("/nplease input year,month,day/n");
//	scanf("%d,%d,%d", &year, &month, &day);
//	switch (month) /*�ȼ���ĳ����ǰ�·ݵ�������*/
//	{
//	case 1:sum = 0; break;
//	case 2:sum = 31; break;
//	case 3:sum = 59; break;
//	case 4:sum = 90; break;
//	case 5:sum = 120; break;
//	case 6:sum = 151; break;
//	case 7:sum = 181; break;
//	case 8:sum = 212; break;
//	case 9:sum = 243; break;
//	case 10:sum = 273; break;
//	case 11:sum = 304; break;
//	case 12:sum = 334; break;
//	default:printf("data error"); break;
//	}
//	sum = sum + day; /*�ټ���ĳ�������*/
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) /*�ж��ǲ�������*/
//		leap = 1;
//	else
//		leap = 0;
//	if (leap == 1 && month>2) /*������������·ݴ���2,������Ӧ�ü�һ��*/
//		sum++;
//	printf("It is the %dth day.", sum);
//	getch();
//}
////��Ŀ��������������x, y, z���������������С���������
////1.���������������취����С�����ŵ�x�ϣ��Ƚ�x��y���бȽϣ����x>y��x��y��ֵ���н�����
////Ȼ������x��z���бȽϣ����x>z��x��z��ֵ���н�����������ʹx��С��
////2.����Դ���룺
//#include "stdio.h"
//#include "conio.h"
//main()
//{
//	int x, y, z, t;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x>y)
//	{
//		t = x; x = y; y = t;
//	} /*����x,y��ֵ*/
//	if (x>z)
//	{
//		t = z; z = x; x = t;
//	} /*����x,z��ֵ*/
//	if (y>z)
//	{
//		t = y; y = z; z = t;
//	} /*����z,y��ֵ*/
//	printf("small to big: %d %d %d/n", x, y, z);
//	getch();
//}
////��Ŀ�����9 * 9�ھ���
////1.����������������п��ǣ���9��9�У�i�����У�j�����С�
////2.����Դ���룺
//#include "stdio.h"
//#include "conio.h"
//main()
//{
//	int i, j, result;
//	printf("/n");
//	for (i = 1; i<10; i++)
//	{
//		for (j = 1; j<10; j++)
//		{
//			result = i*j;
//			printf("%d*%d=%-3d", i, j, result); /*-3d��ʾ����룬ռ3λ*/
//		}
//		printf("/n"); /*ÿһ�к���*/
//	}
//	getch();
//}
