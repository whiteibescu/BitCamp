//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("���� ������ �Է����ּ��� : ");
//	scanf_s("%d", &num);
//
//	for (int i = 0; i < num; ++i) 
//	{
//		printf("�����մϴ�!\n");
//	}
//	
//}

#include <stdio.h>

int main()
{
	int num; 
	int i = 0;
	printf("���� ������ �Է����ּ��� : ");
	scanf_s("%d", &num);
	do
	{
		printf("�����մϴ�!\n");
		++i;
	} while (i < num);
}