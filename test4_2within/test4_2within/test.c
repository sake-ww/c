#define _CRT_SECURE_NO_WARNINGS 1
//�����ĸ������ж�һ������Ȼ��������
//#include <stdio.h>
//int main()
//{
//	float p, w, s, d, f;
//	printf("������p,w,s,d:\n");
//	scanf("%f %f %f %f", &p, &w, &s, &d);
//	if (s < 250)
//    	f = p * w * s * 1;
//	if (250<=s && s<500)
//		f = p * w * s * 0.02;
//	if (500 <= s && s<1000)
//		f = p * w * s * 0.05;
//	if (1000 <= s && s<2000)
//		f = p * w * s * 0.08;
//	if (2000 <= s && s<3000)
//		f = p * w * s * 0.1;
//	if (s>= 3000)
//		f = p * w * s * 0.15;
//	printf("%f ", f);
//	return 0;
//}

//�������κ����е�abc����⡣
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a, b, c, x1, x2, d, p, q;
//	printf("������a��b��c:\n");
//	scanf("%f %f %f", &a, &b, &c);
//    d = ((b*b) - (4 * a * c));
//	if (a == 0)
//	{
//		printf("���̲��Ƕ��η���,���̵Ľ�Ϊ��\n");
//		x1 = -(b / c);
//		printf("x1 = %f", x1);
//	}
//	if (a != 0)
//	{
//		//d = ((b*b) - (4 * a*c));
//		if (d == 0)
//		{
//			printf("�����Ƕ��η��̣���������������ȵ�ʵ�������̵Ľ�Ϊ��\n");
//			printf("x1 = x2 = %f", (-(b / (2 * a))));
//		}
//		else if (d > 0)
//		{
//			printf("�����Ƕ��η��̣����̵Ľ�Ϊ��\n");
//			p = ((-b) + sqrt(d)) / (2*a);
//			q = ((-b) - sqrt(d)) / (2*a);
//			printf("x1 = %f", p);
//			printf("x2 = %f", q);
//		}
//		if (d < 0)
//		{
//			printf("�����Ƕ��η��̣�����������������������̵Ľ�Ϊ��\n");
//			p = (-b) / (2 * a);
//			q = sqrt(-d) / (2 * a);
//			printf("x1 = %f + %fi", p, q);
//			printf("x1 = %f - %fi", p, q);
//		}
//	}
//	return 0;
//}

//������ĸ���жϴ�Сд����ȫ��ת��ΪСд��
//#include<stdio.h>
//int main()
//{
//	char zm;
//	scanf("%c\n", &zm);
//	zm = (zm > 'A' && zm < 'Z') ? (zm + 32): zm;
//	printf("%c",zm);
//	return 0;
//
//}

//������������ĸ�ɼ����õ���Ӧ�ɼ���Χ����У���Ͽ����ݣ�
//#include <stdio.h>
//int main()
//{
//	char grade;
//	scanf("%c\n", &grade);
//	switch (grade)
//	{
//	case 'A':
//		printf("85-100\n");
//		break;
//	case 'B':
//		printf("70-84\n");
//		break;
//	case 'C':
//		printf("60-69n\n");
//		break;
//	case 'D':
//		printf("60����\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//����ɼ����õ���Ӧ��ĸ��
//#include <stdio.h>
//int main()
//{
//	int cj;
//	scanf("%d", &cj);
//	if (cj >= 0 && cj <= 100)
//	{
//		if (cj >= 85)
//			printf("A\n");
//		if (cj > 70 && cj <= 84)
//			printf("B\n");
//		if (cj > 60 && cj <= 69)
//			printf("C\n");
//		if (cj <= 60)
//			printf("D\n");
//	}
//	else 
//		printf("�������\n");
//	return 0;
//}



