#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	C언어의 자료형
	- 문제를 보고 처리할 값들이 어떤 종류인지
	- 값을 저장하는 기본형
	- 주소를 저장하는 참조형(포인트 형)
*/
int main() {
	char 문자 = 'A'; // ASCII - 1 byte
	short 정수_2 = 10; // 2 byte
	int 정수_4 = 10; // 4 byte
	long 정수_4 = 10; // 4 byte => 언어마다 long 크기가 작다
	long long 정수_8 = 100;

	float 실수_4;
	double  실수_8; // math.h 함수들의 기본형

	// 참조형 -> 포인터형
	char *s; // 캐릭형 변수의 주소를 저장하는 변수

	return 0;
}