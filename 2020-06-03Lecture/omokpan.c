#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>




int main(void) {

	int W = 19;
	int H = 19;
	int omokpan[19 * 19] = { 1,0,1,1,0 };


	
	// 요소의 값이 0이면 +

	for (int r = 0; r < H; ++r) {
		for (int c = 0; c < W; ++c) {
			
			int v = omokpan[r * W + c];
			if ( v == 0 ) {
				printf("┼ ");
			}
			else if ( v == 1 ) {
				printf("○");
			}
		}
		printf("\n");
	}
	return 0;
}