// 로컬 헤더 파이을 아래처럼 포함
#include "turboc.h"

void main()
{
	int x = 0;
	int dir = 1; // 우:1, 좌: -1
	setcursortype(NOCURSOR); // no 커서
	while (1) { //for(;;) while과 같은뜻


		gotoxy(x, 0);
		puts("#");
		delay(30);
		gotoxy(x, 0);
		puts(" ");
		x = x + dir;  // x += dir;
		if (x == 80)
			dir = -1;
		else if (x == 0)
			dir = 1;
	}
}
//1번 2번 해결 완료


//1. #이 다시 시작위치에서 반복되도록 만드세요.
//2. #이 왕복하도록 만드세요.
//3. #이 반사되도록 만드세요. (무한 V자 만들기