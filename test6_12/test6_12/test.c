#define _CRT_SECURE_NO_WARNINGS 1


ѭ������
int Binary_Search_loop(int A[], int low, int high, int key)
{
	int mid = (high + low) / 2;
	while (high>low)
	{
		mid = (high + low) / 2;
		if (A[mid]>key)		//�뵱ǰ������λ���Ƚϣ�������ƥ���һ��
			high = mid;
		else if (A[mid]<key)
			low = mid + 1;
		else			//�����ǡ�õ�ǰ��λ��ƥ�䣬ֱ�ӷ��ؼ���
			return mid;
	}
	if (high == low)			//ֻʣ���һ��Ԫ��û�бȽϣ�ֱ�ӱȽ�
	if (A[low] == key)		//������Ԫ�ػ��ǲ�ƥ�䣬�Ǿͷ���-1
		return low;
	else
		return -1;
}
�ݹ鷨��
��ʹ�õݹ鷨��ֱ�ۣ���ͬʱҲ�����˿ռ临�Ӷȣ�
int Binary_Search(int A[], int low, int high, int key)
{
	int mid;
	if (low<high)
	{
		mid = (low + high) / 2;
		if (A[mid]>key)					//�뵱ǰ��λ���Ƚϣ�������ƥ���һ��
			return Binary_Search(A, low, mid, key);
		else if (A[mid]<key)
			return Binary_Search(A, mid + 1, high, key);
		else						//���ǡ����λ������ƥ�䣬ֱ�ӷ���
			return mid;
	}
	else 							//���ֻʣһ��Ԫ�أ�ֱ���ж��Ƿ�ƥ��
	if (A[low] != key)
		return -1;
	else
		return low;
}

