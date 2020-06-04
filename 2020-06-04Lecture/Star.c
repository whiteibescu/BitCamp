#include <stdio.h>



int main(void) {
	// 화면 선을 그리는 프로그램

	// 행, 열 표현 시 반복문 2개 겹쳐서 만드는 코드
	
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {

			if (i == 0 && j == 4) {

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