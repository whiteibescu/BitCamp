#include <stdio.h>

int main(void)
{
	int i, j;
	int multiplication[10][10]; //2차원 배열 선언

	for (i = 2; i <= 9; i++) //간단 명료하게 말하기 
	{
		printf("\n[ %d단 ]\n\n", i);

		for (j = 1; j <= 9; j++)
		{
			multiplication[i][j] = i * j;
			printf("%d X %d = %d \n", i, j, multiplication[i][j]);
		}
	} 

	return 0;
/*
2차원 배열을 통한 구구단 출력을 하는 문제입니다.
INT I J 
2차배열을 선언했습니다 = MULTIPLICATION
FOR FOR문
*/