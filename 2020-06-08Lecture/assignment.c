#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(void) {
	char ch;
	int digit = 0; // 숫자 수
	int alpha = 0; // 영문자 수
	int words = 0; // 띄어쓰기 
	int number = 0; // 정수들의 총합까지
	int prev = 0;
	int n = 0;
	while ( (ch = getchar() ) != EOF) {
		/* 
		입력한것이 숫자이면 =>
		개수를 센다 => digit++


		
		*/
		if (ch >= '0' && ch <= '9') digit++; 
		
		if (ch >= 'A' && ch <= 'Z') alpha++;

		if (ch >= 'a' && ch <= 'z') alpha++;

		if (ch == ' ' || ch == '\t' || ch == '\n') words++; //문제 : 엔터 두번 => 워드 수
		
		if ((n > 0) && (n == prev)) {
			words--;
		}

		prev = n;
		n++;
	}
	printf("숫자 수 출력 :%d \n", digit);
	printf("영문자 수 출력 :%d \n", alpha);
	printf("단어수 출력 :%d \n", words);


	return 0;
}
/*
갯수 세기
EOF (Ctrl+Z) 기능 포함...

숫자 수 :	

영문자 수 :

단어수 :
*/