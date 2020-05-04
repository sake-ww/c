#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
enum
{
	valid = 1,
	invalid = 0
};
int flag = valid;
int my_atoi(const char* str)
{
	assert(str);
	long long ret = 0;
	int symbol = 1;//�����жϷ���
	//�ж��Ƿ�Ϊ���ַ�
	if (*str == '\0')
	{
		flag = invalid;
		return 0;
	}
	//ȥ���ո�,�Ʊ��
	while (isspace(*str))
	{
		str++;
	}
	//�жϷ���
	if ((*str == '-'))
	{
		symbol = -1;
		str++;
		if (((*str < '0') || (*str > '9')))
		{
			flag = invalid;
			return 0;
		}
	}
	else if (*str == '+')
	{
		str++;
	}
	else if (((*str < '0') || (*str > '9')))
	{
		flag = invalid;
		return 0;
	}
	//�������쳣����ʼת��
	while ((*str != '\0') && (*str >= '0') && (*str <= '9'))
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	//���Ϸ���
	ret *= symbol;
	//������Ƿ����
	//int 0111 1111 1111 1111 1111 1111 1111 1111 �����
	//     7     f    f   f     f    f    f    f
	//    1000 0000 0000 0000 0000 0000 0000 0000 �����
	//      8    0    0   0     0    0    0    0
	if (((ret > 0x7fffffff) && (symbol == 1)) ||
		(ret < (signed int)0x80000000) && (symbol == -1))
	{
		flag = invalid;
		return 0;
	}
	//ret�Ϸ�
	flag = valid;
	return ret;
}
//��ӡ����Ƿ��쳣
void PrintState()
{
	if (flag)
		printf("����\n");
	else
		printf("�쳣\n");
}
void Test()
{
	printf("value=%d ", my_atoi("123456789"));//����123456789
	PrintState();
	printf("value=%d ", my_atoi("-123456789"));//����-123456789
	PrintState();
	printf("value=%d ", my_atoi("-123456789abc"));//����,������ĸ��ֹ-123456789
	PrintState();
	printf("value=%d ", my_atoi("    -123456789abc"));//����,ǰ����ո�-123456789
	PrintState();

	printf("value=%d ", my_atoi("abc123456789"));//�쳣,ǰ������ĸ0
	PrintState();
	printf("value=%d ", my_atoi("-abc123456789"));//�쳣,ǰ������ĸ0
	PrintState();
	printf("value=%d ", my_atoi("+abc123456789"));//�쳣,ǰ������ĸ0
	PrintState();
	printf("value=%d ", my_atoi("123.456789"));//���� ���123
	PrintState();
	printf("value=%d ", my_atoi("+123.456789"));//���� ���123
	PrintState();
	printf("\n\n\n");
	printf("value=%d ", my_atoi(""), flag);//�쳣:���ַ���0
	PrintState();
	printf("value=%d ", my_atoi("123456789123456789"));//�쳣:�����0
	PrintState();
	printf("value=%d ", my_atoi("-123456789123456789"));//�쳣:�����0
	PrintState();
	printf("value=%d ", my_atoi("abcd"));//�쳣:�޷�ת��0
	PrintState();
}
int main()
{
	Test();
	return 0;
}