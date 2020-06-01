#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

/*
	자료형, 변수 사용
	연산자 
	- 산술연산
	- 관계연산자(비교연산자)
	- 논리연산자
	- 비트연산(2진수)


*/



int main(void) {

	// 산술연산 : 값(정수, 실수)
	int n = 10;
	double lf = 12.34;
	char ch = 'a'; // 97

	printf(" %d \n", n + 20);
	printf(" %lf \n", lf + 20);
	printf(" %d \n", ch + 20);
	printf(" %c \n", 97 + 20);
	// char도 실제로는 정수이다.
	return 0;

	//이해가 안간다....
}