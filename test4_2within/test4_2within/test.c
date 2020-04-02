#define _CRT_SECURE_NO_WARNINGS 1
//给定四个数，判断一个数，然后求结果。
//#include <stdio.h>
//int main()
//{
//	float p, w, s, d, f;
//	printf("请输入p,w,s,d:\n");
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

//给定二次函数中的abc，求解。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a, b, c, x1, x2, d, p, q;
//	printf("请输入a，b，c:\n");
//	scanf("%f %f %f", &a, &b, &c);
//    d = ((b*b) - (4 * a * c));
//	if (a == 0)
//	{
//		printf("方程不是二次方程,方程的解为：\n");
//		x1 = -(b / c);
//		printf("x1 = %f", x1);
//	}
//	if (a != 0)
//	{
//		//d = ((b*b) - (4 * a*c));
//		if (d == 0)
//		{
//			printf("方程是二次方程，并且他有两个相等的实根，方程的解为：\n");
//			printf("x1 = x2 = %f", (-(b / (2 * a))));
//		}
//		else if (d > 0)
//		{
//			printf("方程是二次方程，方程的解为：\n");
//			p = ((-b) + sqrt(d)) / (2*a);
//			q = ((-b) - sqrt(d)) / (2*a);
//			printf("x1 = %f", p);
//			printf("x2 = %f", q);
//		}
//		if (d < 0)
//		{
//			printf("方程是二次方程，并且他有两个共轭复根，方程的解为：\n");
//			p = (-b) / (2 * a);
//			q = sqrt(-d) / (2 * a);
//			printf("x1 = %f + %fi", p, q);
//			printf("x1 = %f - %fi", p, q);
//		}
//	}
//	return 0;
//}

//输入字母，判断大小写，并全部转换为小写。
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

//案例：输入字母成绩，得到相应成绩范围。（校内上课内容）
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
//		printf("60以下\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//输入成绩，得到相应字母。
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
//		printf("输入错误\n");
//	return 0;
//}



