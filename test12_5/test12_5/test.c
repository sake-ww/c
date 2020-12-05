#define _CRT_SECURE_NO_WARNINGS 1
//��������
//1.ð������
//for����--�����ѭ��������ð�ݵ����� 
//   for����--���ڲ�ѭ��������ð�ݵķ�ʽ--�����ڵ�����Ԫ�������бȽϣ�������Ҫ�����ڵ�Ԫ�ؽ��н�����ֱ������ĩβ
//2.����


//ð������
//ʱ�临�Ӷȣ�O��N^2��
//�ռ临�Ӷȣ�O(1 )
//�ȶ��ԣ��ȶ�
//void BubbleSort(int array[], int size)
//{
//	//����ð�ݵ�����
//	for (int i = 0; i < size - 1; ++i)//-1��Ŀ���ǿ�����ðһ�ˣ���Ϊ���һ��ð��������ֻʣ��һ��Ԫ��
//	{
//		//����ð�ݵķ�ʽ��������λ�õ�Ԫ�ؽ��бȽϣ�����������������ͽ��н���
//		/*����һ��
//		//j����ʾǰһ��Ԫ�ص��±�
//		for (int j = 0; j < size - i - 1; ++j)//-1Ŀ�ģ�j���ֻ��ȡ��ð������ĵ����ڶ���Ԫ��
//		{
//			if (array[j] > array[j + 1])
//				Swap(&array[j], &array[j + 1]);
//		}
//        */
//		//��������������Ϊ����һ�任������ע�ⷽ�����������j-1��j�Ĺ�ϵ����ֹд�ɽ���
//		//j����ʾ��һ��Ԫ�ص��±�
//		for (int j = 1; j < size - i; ++j)//-1Ŀ�ģ�j���ֻ��ȡ��ð������ĵ����ڶ���Ԫ��
//		{
//			if (array[j-1] > array[j])
//				Swap(&array[j], &array[j - 1]);
//		}
//
//	}
//}

//���⣺����������Ϊ0123456798����������ڵ�һ���б��Ѿ��źã����������������������˷Ѵ���ʱ��
//void BubbleSortOP(int array[], int size)
//{
//	int flag = 0;
//	//����ð�ݵ�����
//	for (int i = 0; i < size - 1; ++i)//-1��Ŀ���ǿ�����ðһ�ˣ���Ϊ���һ��ð��������ֻʣ��һ��Ԫ��
//	{
//		//����ð�ݵķ�ʽ��������λ�õ�Ԫ�ؽ��бȽϣ�����������������ͽ��н���
//		//j����ʾ��һ��Ԫ�ص��±�
//		flag = 0;//����ð�ݻ�û�бȽϣ���˽�flag����Ϊ0
//		for (int j = 1; j < size - i; ++j)//-1Ŀ�ģ�j���ֻ��ȡ��ð������ĵ����ڶ���Ԫ��
//		{
//			if (array[j - 1] > array[j])
//			{
//				Swap(&array[j], &array[j - 1]);
//				flag = 1;//�ڸ���ð��ʱ���仹����
//			}	
//		}
//		if (!flag)
//			return;
//	}
//}

//����ȡ�з�����������ȡ���м��������Ϊ��׼ֵ
int GetMiddleIndex(int array[], int left, int right)
{
	int mid = left + ((right - left) >> 1);

	//�������ݣ�left,mid,right-1
	if (array[left] < array[right - 1])
	{
		if (array[mid] < array[left])
			return left;
		else if (array[mid]>array[right - 1])
			return right - 1;
		else
			return mid;
	}
	else
	{
		if (array[mid] > array[left])
			return left;
		else if (array[mid] < array[right - 1])
			return right - 1;
		else
			return mid;
	}



}


int Partion1(int array[], int left, int right)
{
	int begin = left;
	int end = right - 1;
	int keyofindex = GetMiddleIndex(array, left, right);
	int key;
	if (keyofindex != right - 1)
	{
		Swap(&array[keyofindex], &array[right - 1]);
	}
	key = array[keyofindex];

	while (begin < end)
	{
		//��begin��ǰ�����ң��ұȻ�׼ֵ���Ԫ�أ��ҵ��˾�ͣ����
		while (begin < end && array[begin] <= key)
			begin++;

		//��end�Ӻ���ǰ�ң��ұȻ�׼ֵС��Ԫ�أ��ҵ��˾�ͣ����
		while (begin < end && array[end] >= key)
			end--;

		if (begin < end)
			Swap(&array[begin], &array[end]);
	}
	if (begin != right - 1)
		Swap(&array[begin], &array[right - 1]);
	return begin;
}
//��ν�������Ļ�׼ֵ�ָ
//���ݷָ 
//����һ����hore��
//��ȡ��׼ֵΪ���һ��Ԫ��
//ֻҪbegin��endû����������û�д����begin��end��������Ԫ�أ�
//begin��ǰ�����ƶ����ұȻ�׼ֵ���Ԫ�أ��ҵ�֮��ֹͣ
//end�Ӻ���ǰ�ң��ұȻ�׼ֵС��Ԫ�أ��ҵ�֮��ֹͣ 
//����begin��endλ�õ�Ԫ��--������ʱ���ǿ����佻���ģ����Բ��ȶ���
//��begin��end����ʱ���������һ��Ԫ�غ�����λ�õ�Ԫ��

//���������ڿӷ�
int Partion2(int array[], int left, int right)
{
	int begin = left;
	int end = right - 1;
	int keyofindex = GetMiddleIndex(array, left, right);
	int key;
	if (keyofindex != right - 1)
		Swap(&array[keyofindex], &array[right - 1]);

	key = array[right - 1];

	while (begin < end)
	{
		//endλ���γ���һ���µĿ�
		//��begin��ǰ�����ұȻ�׼ֵ���Ԫ��
		while (begin < end && array[begin] <= key)
			begin++;

		//��beginλ�ô��Ԫ����endλ�õĿ�
		if (begin < end)
		{
			array[end] = array[begin];
			end--;
		}

		//beginλ���γ���һ���µĿ�
		//��end�Ӻ���ǰ�ң��ұȻ�׼ֵС��Ԫ�أ���beginλ�õĿ�
		while (begin < end && array[end] >= key)
			end--;

		if (begin < end)
		{
			array[begin] = array[end];
			begin++;
		}
	}
	//�û�׼ֵ�����һ����
	array[begin] = key;
	return begin;
}

//��������ǰ��ָ�뷨
//1.��������ָ��cur��prev��cur��ǰ��prev�ں�
//2.��array[cur]<key&&++prev!=curʱ��ͬʱ�����ƶ�һ��λ�ã�����cur�ƶ�һ��λ��
//3.��2����ʱ����cur��prev
//4.��󽻻���׼ֵ��Prevλ�õ�ֵ
//���prev��cur�����ţ�˵��cur��û�������Ȼ�׼ֵ���Ԫ��
//���prev��cur�в�࣬˵��cur�ڱ��������У��Ѿ������Ȼ�׼ֵ���Ԫ����
//����prev��cur֮���Ԫ�ض��ǱȻ�׼ֵ���Ԫ��

int Partion3(int array[], int left, int right)
{
	int cur = left;
	int prev = cur - 1;

	int keyofindex = GetMiddleIndex(array, left, right);
	int key;
	if (keyofindex != right - 1)
	{
		Swap(&array[keyofindex], &array[right - 1]);
	}
	key = array[keyofindex];

	while (cur < right)
	{
		if (array[cur] < key && ++prev != cur)
			Swap(&array[cur], &array[prev]);
		++cur;
	}
	if (++prev != right - 1)
		Swap(&array[right - 1], &array[prev]);

	return prev;
}