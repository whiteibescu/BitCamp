#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(void) {
	// 자료형 변수의 선언과 사용

	int num;
	num = 10;

	int score; //변수 선언 시 에러나면 위로 이동
	score = 20;

	printf("%d\n", num); // 형식 문자열 d= decimal x= hexa c= char '' s= string"" f= 실수 lf= 실수 p= 주소형 Hexa(16진)
	printf("%c %d %lf %s \n", 'A', 12, 32.45, "string");
	return 0;
	
	
}