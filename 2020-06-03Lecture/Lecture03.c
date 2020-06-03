#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	// 정수 배열 -추가
	int score[10] = { 0 };
	int last = -1;   // 마지막 추가된 요소번호
	++last;
	score[last] = 1; // 처음이자 마지막 
	++last;
	score[last] = 2; // 마지막 
	++last;
	score[last] = 3; // 마지막 

	// 출력시 추가된 값들(저장한) 출력

	for(int i=0; i <= last; i++)
	{
		printf("[%d] %d\n", i, score[i]);
	}

	if (last < 10-1) {
		++last;
		score[last] = 3; // 범위 내 추가되 있어야 한다.
	}
	else {
		printf("full \n");
	}

	return 0;
}








int main_02(void) {
	int maxLength = 10;
	int d2[2][5]; 
	int score[2 * 5] = { 0 }; //변수명을 안쓴다 상수 사용가능
	int index = 1 * 5 +2; //초기화된 배열 생성
	score[7] = 1;
	printf("%d \n", score[index]);
	printf("%d \n", score[7]);

	return 0;

}