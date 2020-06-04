#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <time.h>

// 지역변수 : 함수 밖에서 선언된 변수
// - 이 소스 파일에 정의된 모든 함수들이 사용 간으

int main(int argc, char** argv) {
	// 선언 위치에 따른 변수의 구분 : 변수 지역성
	// 지역 변수 : 함수 내에서 선언된 변수 : 이 함수만 사용할 수 있다.
	// { } 도 지역성을 가진다...

	int v1 = 10;
	int* p;
	{
		int v2 = 1000;
		v1 = 20;
		v2 = 2000;
		p = &v2;
		printf("v2 : %p \n", &v2);
	}
	printf("v2 : %d \n", *p);
	*p = 3000;
	printf("%p -> %d \n", p, *p);
	// v2 = 3000; // 지역 내 선언된 변수는 지역 밖에서 사용 불가




	return 0;
}