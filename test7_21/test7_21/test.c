#define _CRT_SECURE_NO_WARNINGS 1

//
//5 ��������Ϸ
//ϵͳ�������һ��100���ڵ����������û�����һ����������в²⣬��Ҫ��д�����Զ�������бȽϣ�����ʾ���ˣ�too big��������С�ˣ�too small������ȱ�ʾ�µ��ˡ�����µ�����������򡣳�����Ҫͳ�ƲµĴ�����1�β�����ʾ��perfect!����3�����ڲ�����ʾ��good!������������3С��N��N>3����ʾ��not bad��������Nciû�вµ���ʾ��Game Over��������������������븺��Ҳ����ʾ��Game Over����������
//�����ʽ��
//����ĵ�һ�и���������100�����������ֱ��ʾ�û���һ���²�����֡��Լ��²��������N�����ÿ�и���һ������ֱ����Ϸ��������Ϊ������Գ�����Դ�ӡ��ϵͳ������ɵ���ֵ��
//�����ʽ��
//��ÿ�������ÿ�β²�Ľ��ֱ����Ϸ������
//�����������
//
//�ο�����:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int randnum;
	srand(time(0));
	randnum = rand() % 100;      /*100���ڵ������*/
	//printf("������������ǣ����������ˣ�%d\n",randnum);
	int guess, n;
	int count = 0;
	int finish = 0;
	do {
		if (count == 0){
			scanf("%d %d", &guess, &n);  //ע���&����
		}
		else {
			scanf("%d", &guess);
		}
		count++;
		//�������жϷ�����ǰ��Ҫ����һ�������Ǹ���ʱ�޷��ж�
		if (guess < 0){
			break;
		}
		else if (guess > randnum){
			printf("too big!\n");
		}
		else if (guess < randnum){
			printf("too small!\n");
		}
		else {
			if (count == 1){
				printf("perfect job!!!\n");
			}
			else if (count <= 3){
				printf("good job!!\n");
			}
			else {
				printf("not bad!\n");
			}
			finish = 1;
		}
		if (count == n){
			if (finish != 1){
				break;
			}
		}
	} while (finish != 1);
	printf("Game Over!!!\n");
	return 0;
}
