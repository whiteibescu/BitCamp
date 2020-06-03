#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	//포인터 변수의 선언 : 자료형 * 변수명;
	// 포인터 변수에 저장된 주소에 어떤 유형 있냐

	char ch;	//문자 1개 저장하는 변수
	char* p1;	// char 변수를 가리키는 포인터 변수
		// char 변수 여러 개를 다룰 수 있다.... ( 배열 처럼 )
	char** p2;  //char 변수를 가리키는 포인터변수를 가리키는 포인터변수 == 포인터를 가르키는 포인터 point of p 줄여서 pop
				// 삼중 이하만 사용

	char* ap1[3]; //포인터 변수들을 요소로 하는 1차 배열
	char	(*ap2)[3]; // 배열을 가르키는 (((배열 포인터)))
	char* (*ap3)[3]; 

	char (*fp)(void);		//함수 배열을 가르키는 포인터변수
	char (*evt[5])(void);		//함수 포인터 배열

	//주소를 저장한다 포인터!
	//포인터 변수 => 가르킨다

	
	return 0;
}