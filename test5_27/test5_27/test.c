#define _CRT_SECURE_NO_WARNINGS 1
//�����ͺ���бȽϣ����ܣ���
//����
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
////��
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//��ʱû���κ����⣬���ܽ��бȽ�
//------------------
//����
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
////��
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	float c = 3.0f;
//	float d = 4.0f;
//
//	float max = Max2(c, d);
//	printf("max = %lf\n", max);
//
//	max = MAX(c, d);
//	max = ((c) > (d) ? (c) : (d));
//	printf("max = %lf\n", max);
//	return 0;
//}
//������Ǹı�Ƚ����ֵ����ͣ���������Ҫ����д���������겻��Ҫ
//������ǰ����ֵ����͸�������ú���������Խ��м��
//����ǧ��
//---------------------------
////����
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
////��
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//�����ڵ��õ�ʱ��
//	//���к������úͷ��صĿ���
//	float max = Max2(c, d);
//	printf("max = %lf\n", max);
//
//	//Ԥ����׶ξ�������滻
//	//û�к����ĵ��úͷ��صĿ���
//	max = MAX(c, d);
//	//ֱ�Ӿͷ���ɣ�max = ((c) > (d) ? (c) : (d));
//	printf("max = %lf\n", max);
//	return 0;
//}
//�Ȱ� f11 --�����ֺܶ��ļ�--���ر�����ѡ��
//����Ҽ�--��ת�������--����f11һֱ��
//	������float max = Max2(c, d);���ǹ۲�����������ķ�������
//��ִ�еĴ������ǰ�f11�ῴ����ע��������
//ͬ�����е�max = MAX(c, d);ʱ�����ǿ���������������˶��ٴ���
//���Ժ��õıȺ������٣����Ч�ʸ���