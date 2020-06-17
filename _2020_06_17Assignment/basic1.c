#include <stdio.h>

int main(void)
{
	int num[10];
	printf("10개의 정수를 입력해주세요 : ");
	for (int i = 0; i < 10; ++i) {
		scanf_s("%d", &num);
	}
	printf("출력: ", &num[10]);
}