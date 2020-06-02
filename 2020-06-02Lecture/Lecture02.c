#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	// 1 ~ 25까지 연속 정수들을 출력
	// 5 x 5 출력하는 몇 가지 방법
	// 표
	for (int r = 0; r < 5; ++r) { //행
		for (int c = 0; c < 5; ++c) { // 열
			printf("%d\t", v);
			v++;// 연속하는 정수 값
			if (v > 25) {
				//강제종료
				exit(1);
			}

		}
		printf("\n");
	}









	int cnt = 0;
	for (int v = 1; v < 26; ++v)
	{
		printf("%d ", v);
		cnt++;
		// 행 하나에 5개씩 출력하면 행을 내린다...
		if (cnt == 5)
		{
			printf("\n");
			cnt = 0;
		}		
	}
	
	return 0;
}