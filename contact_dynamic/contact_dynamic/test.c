#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("************************************\n");
	printf("*****1.add          2.del      *****\n");
	printf("*****3.search       4.modify   *****\n");
	printf("*****5.show         6.sort     *****\n");
	printf("*****0.exit                    *****\n");
	printf("************************************\n");

}
int main()
{
	int input = 0;
	//����ͨѶ¼
	//int size = 0;
	//struct PeoInfo con[MAX];//���һǧ������Ϣ
	struct Contact con;//�൱��������//con����ͨѶ¼�����������dataָ���size��capacity
	//��ʼ��ͨѶ¼
	InitContact(&con);
	 
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContct(&con);
			break;
		case MODIFY:
			ModfyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		//case SORT:
			//SortContact(&con);
			break;
		case EXIT:
			//����ͨѶ¼-�ͷŶ�̬���ٵ��ڴ�
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	}while(input);
	return 0;
}




