#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int leftdan = 2;
	int dan;
	int v;
	for (int bl = 0; bl < 3; ++bl, leftdan += 3) {
		for (int row = 0; row < 9; ++row) {
			for (int col = 0; col < 3; col++) {
				dan = leftdan + col; // 레프트 단을 이용한다
				v = row+1;
				printf("%d x %d = %d \t", dan, v, (dan*v));
			}
			printf("\n");
		}
		printf("------\n");
	}
	return 0;

}