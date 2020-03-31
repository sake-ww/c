#define _CRT_SECURE_NO_WARNINGS 1int main()
#include <assert.h>
#include <stdio.h>
//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一
#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, ret = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 1) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							int ret = 0;
							ret |= (1 << (a - 1));
							ret |= (1 << (b - 1));
							ret |= (1 << (c - 1));
							ret |= (1 << (d - 1));
							ret |= (1 << (e - 1));
							while (ret)
							{
								if (ret % 2 == 0)
									break;
								ret = ret / 2;
							}
							if (ret == 0)
							{
								printf("%d %d %d %d %d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}

	}
	return 0;
}





//int main()
//{
//	char xs;
//	for (xs = 'a'; xs <= 'd'; xs++)
//	{
//		if ((xs != 'a') || (xs == 'c') || (xs == 'd') || (xs != 'd') == 3)
//		{
//			printf("凶手是%c\n", xs);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int s = 1, h;
//	int i, j;
//	scanf("%d", &h);
//	printf("1\n");
//	for (i = 2; i <= h; s = 1, i++)
//	{
//		printf("1 ");
//		for (j = 1; j <= i - 2; j++)
//			printf("%d ", (s = (i - j) * s / j));
//		printf("1\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}