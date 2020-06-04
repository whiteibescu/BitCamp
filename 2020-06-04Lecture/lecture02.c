#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int drawLine(int x);

int main(void) {

	drawLine(1);
	drawLine(2);
	drawLine(3);
	return 0;
}






int drawLine(int x) {
		// 화면 선을 그리는 프로그램
	int y;
		// 행, 열 표현 시 반복문 2개 겹쳐서 만드는 코드
	y = (1 * x) + 5;	
	for (int r = 0; r < 10; ++r) {
		printf("[%2d]", r);
		for (int c = 0; c < 10; ++c) {
			// 각 위치(r,c)
			if (r == y && c == x) {

				printf("*");
			}
			else {
				printf("");
			}
		}
		printf("\n");
	}
	return 0;

}