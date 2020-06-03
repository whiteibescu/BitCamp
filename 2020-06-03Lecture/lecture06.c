#include <stdio.h>




int main(void) {
	// 길이 15인 정수형 1차 배열 선언하기
	int numbers[15] = { 0 };
	int length = 15; // sizeof(배열명) / sizeof(int);
	// 모든 요소에 임의 정수를 저장하기

	for (int i = length - 1; i >= 0; --i)
	{
		numbers[i] = rand(); // 0~32656
	}

	for (int i = 0; i < length; --i)
	{
		printf("%6d", numbers[i]);
	}
	printf("\n");


	return 0;

}

