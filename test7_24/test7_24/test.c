#define _CRT_SECURE_NO_WARNINGS 1

//7 Լ������ʽ
//�ؼ�������ӷ�ĸ�����Լ��
//����������
//4 / 8
//���������
//1 / 2
//�ο����룺

#include <stdio.h>
int main()
{
	int sub, mom, a, b, t;
	scanf("%d/%d", &sub, &mom);
	a = sub;
	b = mom;
	//շת����������Լ��
	while (b > 0){
		t = a%b;
		a = b;
		b = t;
	}
	printf("%d/%d\n", sub / a, mom / a);
	return 0;
}

