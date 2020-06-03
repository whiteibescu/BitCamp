#include <stdio.h>




int main(void){
	// 일정한 크기 배열을 무한한 공간처럼 사용하는 방법(알고리즘)
	// 2 개 이상의 변수들로 공간을 제어하는 방법
	// 요소 번호로 제어하는 아이디어 원형 큐

	// 스택 : 선입후출, 후입선출

	int score[10] = { 0 };
	int sp = -1; //마지막 요소
	// 추가하기
	++sp;
	score[sp] = 1;

	int value = score[sp];
	--sp;

	return 0;
}