#define _CRT_SECURE_NO_WARNINGS 1


//6 �����е�ǰN���
//����2 / 1 + 3 / 2 + 5 / 3 + 8 / 8 + ����ǰN��֮�ͣ�ע���ɵ�2����ÿһ��ķ�����ǰһ��ķ������ĸ֮�ͣ���ĸ��ǰһ��ķ��ӡ�
//����������
//20
//���������
//32.66
//�ο����룺
#include <stdio.h>
main()
{
	int n;
	scanf("%d", &n);
	double sub, mom, sum, t, i;
	sub = 2;
	mom = 1;
	for (i = 1; i <= n; i++){
		sum += sub / mom;
		t = sub;
		sub = sub + mom;
		mom = t;
	}
	printf("%0.2f\n", sum);
	return 0;
}