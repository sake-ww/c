#define _CRT_SECURE_NO_WARNINGS 1

//
//5 猜数字游戏
//系统随机产生一个100以内的正整数，用户输入一个数对其进行猜测，需要编写程序自动对其进行比较，并提示大了（too big），或者小了（too small），相等表示猜到了。如果猜到，则结束程序。程序还需要统计猜的次数，1次猜中提示“perfect!”，3次以内猜中提示“good!”，次数大于3小于N（N>3）提示“not bad”；超过Nci没有猜到提示“Game Over”，并结束程序。如果输入负数也会提示“Game Over”结束程序。
//输入格式：
//输入的第一行给出不超过100的正整数，分别表示用户第一个猜测的数字、以及猜测的最大次数N。随后每行给出一个数字直到游戏结束。（为方便调试程序可以打印出系统随机生成的数值）
//输出格式：
//在每行中输出每次猜测的结果直到游戏结束。
//输入输出样例
//
//参考代码:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int randnum;
	srand(time(0));
	randnum = rand() % 100;      /*100以内的随机数*/
	//printf("产生的随机数是（这里作弊了）%d\n",randnum);
	int guess, n;
	int count = 0;
	int finish = 0;
	do {
		if (count == 0){
			scanf("%d %d", &guess, &n);  //注意加&符号
		}
		else {
			scanf("%d", &guess);
		}
		count++;
		//负数的判断放在最前面要不第一个参数是负数时无法判断
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
