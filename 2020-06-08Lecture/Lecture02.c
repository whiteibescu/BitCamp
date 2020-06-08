#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_def() {
	char str[80] = { 0 };
	char ch;
	int i = 0;
	while ((ch = getchar()) != '\n') {
		if (i == 0) {
			if ('a'<=ch&&ch<='z') {// 소문자이면....
			
			}
		}
	}
	str[i] = 0;  // 문자열 마지막에 반드시 널문자로 끝내야한다...;


	gets_s(str, sizeof(str)-2);

	while (1) {
		int v = scanf_s("%s", str, sizeof(str));

		if (v == 0) { break; }

		puts(str);
	}
}
// 이름 STRING 
//  학생 점수...
