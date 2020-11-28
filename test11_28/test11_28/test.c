#define _CRT_SECURE_NO_WARNINGS 1
//ѡ������
void SelectSortOP(int array[], int size)
{
	int begin = 0, end = size - 1;
	while (begin < end)
	{
		//��[begin,end]��������������С��Ԫ��
		int maxPos = begin, minPos = begin;
		int j = begin + 1;

		while (j <= end)
		{
			if (array[j] >array[maxPos])
				maxPos = j;

			if (array[j] < array[minPos])
				minPos = j;
			++j;
		}

		//������Ԫ�ز�����������λ�á�
		if (maxPos != end)
			Swap(&array[maxPos], &array[end]);

		//���endλ�ô洢�ĸպ�����С��Ԫ�أ�����Ľ����ͽ���С��Ԫ��λ�ø�����--maxpos
		//��СԪ�ص�λ�÷����˸ı䣬�����Ҫ����minPos
		if (minPos == end)//minPos��end�պ���ȵ�����£�˵���ڽ���֮ǰ��СԪ��һ�������һ��
			minPos = maxPos;

		//��С��Ԫ�ز����������ʼλ��
		if (minPos != begin)
			Swap(&array[minPos], &array[begin]);

		++begin;
		--end;
	}
}
//ѡ��������ʲôȱ�ݣ�
//�ظ�����̫��
//��ô���ܼ����ظ�����������
//---������
//1.���ѣ�����ѻ��ǽ�С�ѣ� ȡ�����û���Ҫ���򣨴�ѣ����ǽ��򣨽���
//���⣺������Ҫ�õ�ʲô������---���µ���
//______���µ����Ǵ��ĸ�λ�ÿ�ʼ�����ģ�������һ����Ҷ�ӽڵ��λ��~�����ڵ����еĽڵ�Ӧ�����µ������ɽ��ɶ�
//______������һ����Ҷ�ӽڵ���������ģ�������һ����Ҷ�ӽڵ�������һ��Ҷ�ӽڵ��˫�ף�(size-1-1)/2
//2.���ö�ɾ����˼���������
//______���Ѷ�Ԫ����������һ��Ԫ�ؽ��н���������������������С��Ԫ�طŵ�ĩβ��
//______��������ЧԪ�ظ�������һ�� 
//______���Ѷ���Ԫ�����µ��� 
//���ģ����µ���

void HeapAdjust(int array[], int size, int parent)
{
	//��child���parent�ϴ�ĺ��ӣ�Ĭ���ȱ��parent������
	//�ȱ�����ӵ�ԭ���ǣ����parent�к��ӣ�parentһ�����������ӣ�Ȼ������Һ���
	int child = parent * 2 + 1;

	while (child < size)
	{
		//��parent�нϴ�ĺ���:parent���Һ��ӱȽ�
		//�����ȱ�֤parent���Һ��Ӵ���
		if (child + 1 < size && array[child + 1] > array[child])
			child += 1;

		//���parent�Ƿ�����ѵ�����
		if (array[child] > array[parent])
		{
			Swap(&array[child], &array[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			return;
	}
}