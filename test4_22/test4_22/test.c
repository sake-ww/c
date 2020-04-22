#define _CRT_SECURE_NO_WARNINGS 1
//
//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		int a;
//		char b;
//		short c;
//		short d;
//	};
//	struct tagTest1 stT1;
//
//	printf("%d ", sizeof(stT1));
//	return 0;
//}
//4 + 1+3 + 2 + 2

//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		int a;
//		short b;
//		int c;
//		char d;
//	};
//	struct tagTest1 stT1;
//
//	printf("%d ", sizeof(stT1));
//	return 0;
//}
//4 + 2+2 + 4 + 4

//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		int a;
//		short b;
//		char c;
//		int d
//
//	};
//	struct tagTest1 stT1;
//
//	printf("%d ", sizeof(stT1));
//	return 0;
//}

//4 + 2 + 1+1 + 4

int main(int argc, char* argv[])
{
	struct tagTest1//2+2 + 4 + 2 + 2
	{
		short a;
		char d;
		long b;
		long c;
	};
	struct tagTest2//4 + 2 + 1+1 +4
	{
		long b;
		short c;
		char d;
		long a;
	};
	struct tagTest3//2+2 + 4 + 1+3 + 4
	{
		short c;
		long b;
		char d;
		long a;
	};
	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;

	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	return 0;
}



