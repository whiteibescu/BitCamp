#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*	제어문
	반복 : for while do-while
	분기 : if(논리), switch(상수,산술)
*/

int main(void) { 
	//1 ~ 25 까지 연속하는 정수들을 출력

	int min = 1;	 //입력
	int max = 25;	 //입력
	for (int i = min; i < max+1 ; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	return 0;
}