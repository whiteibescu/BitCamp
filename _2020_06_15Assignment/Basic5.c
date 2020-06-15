#include <stdio.h> 
int main()
{
	int num;
	
	printf("양의 정수를 입력해주세요 : ");
	scanf_s("%d", &num);

	if (num > 0)
	for (int i = 0; i < num; ++i) {
		printf("감사합니다.\n");
	}

	else if (num < 0)
	{
		printf("잘못입력하셨습니다. 종료합니다...");
			exit(0);
	}


	
}

