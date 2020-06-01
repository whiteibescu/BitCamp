#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>


/*
	자료형, 변수 사용
	연산자
	- 산술연산
	- 관계연산자(비교연산자)
	- 논리연산자
	- 비트연산(2진수)
*/

int main_2(void) {
	// 0은 거짓, 0이 아니면 참
	// 조건식들의 순서, 관계를 파악

	printf("%d \n", 10 < 2);
	printf("%d \n", 10 > 2);

	// 정수 0 또는 1이다 - > 논리적으로 말한다...
}
int main(void) {
	printf(" %d \n", (1 < 0) && ('a' == 97));
	printf(" %d \n", (1 < 0) || ('a' == 97));
	printf(" %d \n", !1); //논리 반전 not

	printf(" %d \n ", NULL); // 0
	printf(" %d \n", EOF);   //End of File
	return 0;

}