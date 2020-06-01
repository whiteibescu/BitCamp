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
	

	//이해가 안간다....

	// printf(" %d \n", 97 / 0)
	printf(" %lf \n", (double)97 / 20);
	//먼저 실수로 바꾼 후 나누기 할 것...
	printf(" %lf \n", (double)(97 / 20));

	printf(" %d \n", n % 5);

	// 형변환 시 주의
	int a = 256;
	double b = a; // 정수에서 실수로 바꾼다
	int c = b;

	printf("%d %lf %d \n", a, b, c);

	//8byte --> 4byte : 값이 잘린다...

	return 0;
}