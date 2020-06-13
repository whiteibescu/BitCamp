// 로컬 헤더 파이을 아래처럼 포함
#include "turboc.h"

void main()
{
	setcursortype(NOCURSOR); // no 커서
	while (1) {

		for (int x = 0; x < 80; ++x)
		{
			gotoxy(x, 0);
			puts("#");
			delay(10);
			gotoxy(x, 0);
			puts(" ");
		}

		for (int x = 80; x >= 0; --x)
		{
			gotoxy(x, 0);
			puts("#");
			delay(10);
			gotoxy(x, 0);
			puts(" ");
		}
	}
}

//1. #이 다시 시작위치에서 반복되도록 만드세요.
//2. #이 왕복하도록 만드세요.
//3. #이 반사되도록 만드세요. (무한 V자 만들기