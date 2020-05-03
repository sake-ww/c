#define _CRT_SECURE_NO_WARNINGS 1
//练习题总结
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}


//#include<assert.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char* my_strncat(char*dest, const char* str, int count)
//{
//	assert(dest != NULL && str != NULL);
//	char* ret = dest;
//	while (*++dest != '\0');
//	while (count-- && (*dest++ = *str++))
//	{
//
//	}
//	if (count > 0)
//	{
//		*dest++ = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[10] = "ghi";
//	printf("%s", my_strncat(arr1, arr2, strlen(arr2)));
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//char *my_Strncpy(char *dest, const char *src, int count)
//{
//	char *p = dest;
//	assert(dest != NULL && src != NULL);
//	while (count)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	return p;
//}
//int main()
//{
//	char dest[20] = "abcd";
//	char *src = "hello";
//	my_Strncpy(dest, src, 2);
//	printf("%s\n", dest);
//	return 0;
//}

//找单身狗小游戏

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 2, 3, 4, 6, 7 };
	//int count = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	for (i = 0; i < sz; i++)
	{
		int count = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
