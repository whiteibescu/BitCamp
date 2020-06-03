#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>




int main(void) {
	
	int shape[40] = { 1 };
	int cur = 1;
	while (1) {
		system("cls"); //윈도우 명령 : 화면 지우기

		for (int i = 0; i < 40; ++i)
		{
			// 요소의 값에 따라 출력할 문자열이 다르다...
			printf("%s", (shape[i]) ?"@ ": "  " );
		}

		printf("\n");
		// 1을 한 칸씩 오른쪽으로 옮긴다........
		shape[cur-1] = 0;
		shape[cur] = 1;
		cur++;
		cur %= 40; // 0 ~39

	}

	return 0;
}