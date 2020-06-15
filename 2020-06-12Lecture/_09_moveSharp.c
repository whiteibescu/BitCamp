// 로컬 헤더 파이을 아래처럼 포함
#include "turboc.h"

void main()
{
	setcursortype(NOCURSOR); // no 커서

	int x = 0; 
	int y = 0;		//좌표값
	int dirX = 1; // 변화값(증감)
	int dirY = 1;
	while (1) { //for(;;) while과 같은뜻


		gotoxy(x, y);
		puts("#");
		delay(30);
		gotoxy(x, y);
		puts(" ");
		x += dirX;
		y += dirY;
		// 양끝에 닿으면 부호를 바꾸어라
		// 부호를 변경 = 증가<->감소
		if (x == 80 || x == 0)
			dirX *= -1;
		if (y == 24 || y == 0)
			dirY *= -1;
	}
}
//1번 2번 해결 완료


//1. #이 다시 시작위치에서 반복되도록 만드세요.
//2. #이 왕복하도록 만드세요.
//3. #이 반사되도록 만드세요. (무한 V자 만들기
