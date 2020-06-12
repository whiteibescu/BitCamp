// 로컬 헤더 파이을 아래처럼 포함
#include "turboc.h"

void main() 
{
	setcursortype(NOCURSOR); // no 커서
	
	for (int x = 0; x <= 80; ++x) 
	{
		clrscr();				// 화면 청소
		gotoxy(x, 12);
		puts("#");
		delay(100);
	}




}