// 로컬 헤더 파이을 아래처럼 포함
#include "turboc.h"

void main()
{
	setcursortype(NOCURSOR); // no 커서

	for (int x = 0; x <= 80; ++x)
	{
		gotoxy(x, 12);
		puts("#");
		delay(100);
		gotoxy(x, 12);
		puts(" ");
	}

}

//1. #이 다시 시작위치에서 반복되도록 만드세요.
//2. #이 왕복하도록 만드세요.
//3. #이 반사되도록 만드세요. (무한 V자 만들기) 
//힌트 : x값과 y값을 모두 변화시키면 된다.