//#include <stdio.h>
//int main(void)
//{
//	int num, i = 1;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//	printf("%d��\n", num);
//	do
//	{		
//		printf("%dx%d=%d\n", num, i, num * i);
//		i++;
//
//		if (i == 9) {
//			break;
//		}
//	} while (i != 0);
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{	
	int num;
	int i;

	printf("���� �Է� : ");
	scanf_s("%d", &num); //1. ����(num)�� �Է¹޴´�.
	printf("%d��\n", num);

	for (i = 1; i < 10; i++)// 1~9���� ���ؼ� ���
	{
		printf("%d * %d = %d \n", num, i, num * i);
	}
	return 0;
}
