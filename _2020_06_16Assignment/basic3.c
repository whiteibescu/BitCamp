#include <stdio.h>

int main()
{
	int sum = 0; //합계 변수 선언
	int i = 0;

		for (int i = 1; i <= 10; i++)
		{
			sum += i;
		}
		printf("1에서 부터 10까지의 합은\n%d 입니다. \n", sum);



	return 0;
}