#include "turboc.h"

//#define WIDTH = 80;
//#define HEIGHT = 25;



//직선으로 그리는 함수
/// <param name="start">그림이 시작되는 위치 </param>
/// <param name="end">그림이 끝난 위치</param>
/// <param name="any">0부터 goalVal까지 변화</param>
/// <param name="pt">x축이 변화면 y축 기준, yㅊ구이 변하면 x축 기준</param>
/// <param name="icon">그릴 icon 모양</param>
void drawWall(int start, int end, int any, int pt, char* icon)
{
	int i = 0;
	for (i = start; i <= end; i++) 
	{
		if (any == 0)
			gotoxy(i, pt);
		else if (any == 1)
			gotoxy(pt, i);
		puts(icon);
	}
}


void main() {


	const int WIDTH = 80;
	const int HEIGHT = 25;
	clrscr();
	setcursortype(NOCURSOR);

	//벽 그리기
	drawWall(0, WIDTH / 2, 0, HEIGHT + 1, '▦');
	drawWall(0, HEIGHT, 1, WIDTH + 2, '▦');


	int x = 0;
	int y = 0;		//좌표값
	int dirX = 1; // 변화값(증감)
	int dirY = 1;
	while (1) { //for(;;) while과 같은뜻


		//상자 그리기
		int sX = 0 + WIDTH / 2 / 2;
		int eX = sX + WIDTH / 2;
		int sY = 0 + HEIGHT / 2 / 2;
		int eY = sY + HEIGHT / 2;
		drawWall(sX, eX, 0, sY, '◈');  //상단 X축
		drawWall(sX, eX, 0, eY, '◈');  //하단 X축
		drawWall(sX, eX, 0, sY, '◈');  //좌단 X축
		drawWall(sY, eY, 1, eX, '◈');  //우단 Y축
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
