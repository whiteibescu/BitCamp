#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int drawLine(int x);

int main(int argc, char* argv[]) {
	int a = 1;
	int b = 5; // y축 이동
	int x = 0;
	int y = (a * x) + b; // 변수들의 관계(식)
	x = 5; // 수평선
	y = 5; // 수직선


	for (int x = 0; x < 10; ++x) {
		y = (a * x) + b; // 변수들의 관계(식)
		printf("{%d,%d}\n", x, y);
	}

	return 0;
}