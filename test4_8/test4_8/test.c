#define _CRT_SECURE_NO_WARNINGS 1

//�Ͽ���ϰ���ܽ�
//int main()
//{
//	//����������Ԫ�صĵ�ַ
//	//1. sizeof(������) - ��������ʾ��������
//	//2. &������ - ��������ʾ��������
//	//
//	//һά����
//	//int a[] = { 1, 2, 3, 4 };//4*4 = 16
//	//printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
//	//printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n", sizeof(*a));   //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
//	//printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n", sizeof(a[1])); //4 - ��2��Ԫ�صĴ�С
//	//printf("%d\n", sizeof(&a));   //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n", sizeof(*&a));  //16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
//	//printf("%d\n", sizeof(&a + 1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
//	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//
//	//�ַ�����
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", strlen(arr));//���ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	//printf("%d\n", sizeof(arr));//sizeof��������������С��6*1 = 6�ֽ�
//	//printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
//	//printf("%d\n", sizeof(*arr));   //1   arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
//	//printf("%d\n", sizeof(arr[1])); //1
//	//printf("%d\n", sizeof(&arr));   //4/8 &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
//	return 0;
//}
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p));
	//printf("%d\n", sizeof(p[0]));
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));
	////��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a[0][0]));
	//printf("%d\n", sizeof(a[0]));
	//printf("%d\n", sizeof(a[0] + 1));
	//printf("%d\n", sizeof(*(a[0] + 1)));
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(*(a + 1)));
	//printf("%d\n", sizeof(&a[0] + 1));
	//printf("%d\n", sizeof(*(&a[0] + 1)));
	//printf("%d\n", sizeof(*a));
	//	printf("%d\n", sizeof(a[3]));
	return 0;
}