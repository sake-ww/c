#define _CRT_SECURE_NO_WARNINGS 1

//3 ��ӡ�žſھ���
//����Ҫ������������������N�������1 * 1��N * N�Ĳ��ֿھ���
//�ο����룺
//
#include <stdio.h>

main()
{
	int n = 5, j = 1, i;
	while (j <= n){
		i = 1;
		while (i <= j){
			printf("%d*%d=%d\t", i, j, i*j);
			i++;
		}
		printf("\n");
		j++;
	}

	return 0;
}
