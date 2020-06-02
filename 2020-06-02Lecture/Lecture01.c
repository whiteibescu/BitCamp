#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*	제어문
	반복 : for while do-while
	분기 : if(논리), switch(상수,산술)
*/

int main(void) { 
	//1 ~ 25 까지 연속하는 정수들을 출력

	int min = 100;	 //입력
	int max = 25;	 //입력
	// 사용자 순서를 반대로 입력 경우도 생김....
	// 인지(판단) - 분기문....
	if (min > max)
	{
		// 두변수의 값을 교환한다.
		
		int temp = min;
		min = max;
		max = temp; 
		// 스왑하기 위해서는 변수 하나가 더 필요
		// 비트연산자 XOR 연산 활용법

		ㄹ
	}

	for (int i = min; i < max+1 ; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	return 0;
}