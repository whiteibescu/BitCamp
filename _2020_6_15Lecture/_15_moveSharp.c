#include "turboc.h"

//직선으로 그리는 함수
//0부터 goalVal까지 변화
//x축이 변화면 y축 기준, yㅊ구이 변하면 x축 기준
//그릴 icon 모양
void drawWall(int goalVal, int any, int pt, char* icon)
{
	int i = 0;
	for (i = 0; i <= goalVal; i++) {
		
		if (any == 0)
			gotoxy(i, pt);
		else if (any == 1)
			gotoxy(pt, i);
		puts(icon);
	}
}



void main() {

	clrscr();
	setcursortype(NOCURSOR);
	drawWall(80 / 2, 0, 24, '▦');
	drawWall(25, 1, 79, '▦');
}