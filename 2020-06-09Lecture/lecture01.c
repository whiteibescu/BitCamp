#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h> // 기능키 처리 가능
#include <ctype.h>


#define W 20
#define H 15
int map[H][W]; // 모든 함수 접근 가능, 0 초기화

int showMap(void) {
	for (int r = 0; r < H; ++r) { // 행 : H
		for (int c = 0; c < W; ++c) { // 열 : W
			map[r][c] = 1;	
		}
	}
	return 0;
}

int drawMap(void) {
	// 키보드로 이동을 시키고 이동경로를 벽으로 만든다...
	// 한번씩 입력 시 화면 그리고 출력하고 지우는 동작
	// <enter> 종료
	int iy, ix;
	iy = ix = 0;

	while(1){//무한반복
		system("cls"); //콘솔 상에서 실행할 수 있는 프로그램
		for (int r = 0; r < H; ++r) { // 행 : H
			for (int c = 0; c < W; ++c) { // 열 : W
				if (r == iy && c == ix) {
					printf("★"); // 영문자를 제외한 타국어 문자열
				}
				else {
					printf("%2d", map[r][c]);
				}

			printf("%2d", map[r][c]);
			}
			putchar('\n');
		} // end for
		// 키보드가 눌렸을 때
		if (_kbhit()) { 
			// 입력된 문자 확인?
			char ch = _getch();
			if (ch == '\r') { // <enter>
				break; // 멈추기~
				// 아래 return 바로 전으로 이동
			}
			// ch = tolower(ch); // <ctype.h>
			// 방향키 이동 = 1;

			if (ch == 'w' || ch == 'W') {//UP
				--iy;
			}
			if (ch == 's' || ch == 'S') {//DOWN
				++iy;
			}
			if (ch == 'a' || ch == 'A') {//LEFT
				--ix;
			}
			if (ch == 'd' || ch == 'D') {//RIGHT
				++ix;
			}
			// 현재 위치 표시
			map[iy][ix] = 1;
			map[iy][ix] = 1 - map[iy][ix];
		}
	}// break
	printf(" end drawMap()\n\n");
	return 0;
}

int main(void) {
	
	drawMap(); // 호출하는 위치보다 위에 반드시 선언 또는 정의




	return 0;
}

// 위치보다는 다른 느낌이 있어#include <stdio.h>
