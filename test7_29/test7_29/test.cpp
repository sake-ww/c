#define _CRT_SECURE_NO_WARNINGS 1

//const�ͺ������
#include <iostream>
using namespace std;
#define  pi "3.14159"//��һд���д��""
void testfunc()
{
	int r = 2;
	double s = PI*r*r;//ֱ���滻�� double s = "3.14159"*r*r;
	cout << s << endl;
}
int main()
{
	testfunc();
	return 0;
}

//const
//#include <iostream>
//using namespace std;
////const double pi = "3.14";//double���������һ���ַ���������ֱ�Ӿͱ��벻��ȥ��const��������ͼ�⣩	 
//void Testfunc()
//{
//	int r = 2;
//	double s = pi * r *r;
//	cout << s << endl;
//}
//int main()
//{
//	Testfunc();
//	return 0;
//}

//�����ܷ�const���εĽ����Ϊ������--������
//#include <iostream>
//using namespace std;
//void Testfunc()
//{
//	const int a = 10;
//	//Ҫ��֤��const���ε�a�Ƿ�Ϊ������������������������
//	//��Ϊ����������ʱ����Ҫ��������Ĵ�С��������Ĵ�С����ʱ����
//	//����ɹ�����Ϊa��const���Σ�aʱһ������
//	//ע�⣺��c�����У���const���εı������ܽ����Ϊ�������Ծ�ʱһ��������ֻ�����ñ������ܱ��޸ģ�����c�����У���const���εı����ǣ�һ�����ܱ��޸ĵı��������ܽ����Ϊ���� 
//	int array[10];//����ɹ�
//	int array[a];//����ɹ�
//
//	//����ʧ�ܣ���Ϊb��һ������������������ʱ����Ҫһ��������ָ������Ĵ�С
//	int b = 10;
//	int array2[b];//����ʧ��
//}
//int main()
//{
//	Testfunc();
//	return 0;
//}