//#include <stdio.h>
//int main(void)
//{
//	int num, i = 1;
//	printf("숫자 입력 : ");
//	scanf_s("%d", &num);
//	printf("%d단\n", num);
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

	printf("숫자 입력 : ");
	scanf_s("%d", &num); //1. 숫자(num)을 입력받는다.
	printf("%d단\n", num);

	for (i = 1; i < 10; i++)// 1~9까지 곱해서 출력
	{
		printf("%d * %d = %d \n", num, i, num * i);
	}
	return 0;
}
