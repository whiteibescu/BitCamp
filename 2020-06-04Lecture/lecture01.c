/*
1. 소스 파일 만들기 .c
2. 헤더 파일 붙이기 .h
3. main 함수 만들기 int main() { return 0; }
4. main 함수 안에 실행 내용 작성하기

선언 후 사용
@arg :
argc - 인자의 개수
argv - 문자열(들) 인자


*/
		



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


// 함수 선언부////////////////////////////////
// { } 뺀 앞부부만 적은 것
void fn(void);
////////////////////////////////////////////
int Sum(int a, int b); // 전달되는 값을 받을 변수 - 매개변수
int printIntArray(int ar[], );


int main(int argc, char** argv) { //char* argv[] 

	fn(); // 함수 호출(실행);
	int rt = getValue(); //실행 후 int 형 값을 반환한다...
	// 함수의 반환은 1개만 가능, 전달은 여러 개 가능
	int hap = Sum(2, 10);









	return 0;
}




//함수 정의부///////////////////////////////////////////////////////
void fn(void)
{
	// 반환형 void일 때
	// return 생략 가능
	return; // 함수를 종료
}
int Sum(int a, int b)
{
	// 매개변수가 있는 함수를 호출할 때는
	// 반드시 전달해야 한다...
	int s = a + b;
}