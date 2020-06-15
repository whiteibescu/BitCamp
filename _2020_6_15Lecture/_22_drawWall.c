#include "turboc.h"

//#define WIDTH = 80;
//#define HEIGHT = 25;
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


	//const int WIDTH = 80;
	//const int HEIGHT = 25;
	clrscr();
	setcursortype(NOCURSOR);
	drawWall(WIDTH / 2, 0, HEIGHT + 1, '▦');
	drawWall(HEIGHT, 1, WIDTH+2, '▦');


	int x = 0;
	int y = 0;		//좌표값
	int dirX = 1; // 변화값(증감)
	int dirY = 1;
	while (1) { //for(;;) while과 같은뜻


		gotoxy(x, y);
		puts("◎");
		delay(30);
		gotoxy(x, y);
		puts(" ");
		x += dirX;
		y += dirY;
		// 양끝에 닿으면 부호를 바꾸어라
		// 부호를 변경 = 증가<->감소
		if (x == HEIGHT || x == 0)
			dirX *= -1;
		if (y == WIDTH || y == 0)
			dirY *= -1;
	}

}