#define _CRT_SECURE_NO_WARNINGS 1

//2 ˮ�ɻ���
//ˮ�ɻ�����ָһ��Nλ��������N >= 3��������ÿ��λ�ϵ����ֵ�N����֮�͵������������磺153 = 13 + 53 + 33�����������Nλˮ�ɻ�����
//����������
//3
//���������
//153
//370
//371
//407
//
//�ο����룺
#include <stdio.h>
int main()
{
	int n = 3;
	int i;
	int first = 1;
	for (i = 1; i<n; i++)
	{
		first *= 10;
	}
	i = first;
	for (i = first; i<first * 10; i++){
		int sum = 0;
		int p;
		int j;
		int t = i;
		for (j = 1; j <= n; j++)
		{
			p = t % 10;
			int k;
			int pn = p;
			if (p != 0){
				for (k = 1; k<n; k++)
				{
					pn *= p;
				}
				sum += pn;
			}
			t = t / 10;
		}
		if (i == sum)
			printf("%d\n", i);
	}
	return 0;
}
