#define _CRT_SECURE_NO_WARNINGS 1
//ื๗าต
//#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
//2*7 + 4 = 16
//---------------------------------------------
//#include<stdio.h>
//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}
//3839
//-------------------------------------------------
//#include<stdio.h>
//int main()
//{
//	enum ENUM_A
//	{
//		X1,
//		Y1,
//		Z1 = 255,
//		A1,
//		B1,
//	};
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}
//1 257
//--------------------------------------------------
//#include <stdio.h>
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}
//02 29 00 00
#define MAX_SIZE A+B
#include <stdio.h>
struct _Record_Struct
{
	unsigned char Env_Alarm_ID : 4;
	unsigned char Para1 : 2;
	unsigned char state;
	unsigned char avail : 1;
}*Env_Alarm_Record;
int mian()
{
	//int MAX_SIZE = 0;
	struct _Record_Struct *pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
	printf("%d ", sizeof(pointer));
	return 0;
}
//20




