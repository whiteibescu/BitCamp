#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int a, b;
	int play = 1;

	srand(time(NULL));
	a = rand() % 100 + 1;

	while (play == 1)
	{
		printf("1~100������ ���� �Է����ּ���\n");
		scanf("%d", &b);

		if (b <= 100 && b >= 1)
		{
			if (b > a)
			{
				printf("�ٿ�!!\n");

			}
			else if (b < a)
			{
				printf("��!!\n");
			}
			else if (a == b)
			{
				printf("%�����Դϴ�!!");
				play = 0;
			}
		}
	}
}