#define _CRT_SECURE_NO_WARNINGS 1
��Ŀ��������������x, y, z���������������С���������
1.���������������취����С�����ŵ�x�ϣ��Ƚ�x��y���бȽϣ����x>y��x��y��ֵ���н�����Ȼ������x��z���бȽϣ����x>z��x��z��ֵ���н�����������ʹx��С��
2.����Դ���룺

�������� :

#include"stdio.h"
#include "conio.h"
main()
{
	int x, y, z, t;
	scanf("%d%d%d", &x, &y, &z);
	if (x>y)
	{
		t = x; x = y; y = t;
	} /*����x,y��ֵ*/
	if (x>z)
	{
		t = z; z = x; x = t;
	} /*����x,z��ֵ*/
	if (y>z)
	{
		t = y; y = z; z = t;
	} /*����z,y��ֵ*/
	printf("small to big: %d %d %d\n", x, y, z);
	getch();
}
