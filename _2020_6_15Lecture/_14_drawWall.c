#include "turboc.h"

void main() {

	clrscr();
	setcursortype(NOCURSOR);

	int wallx;
	int wally;

	for (wallx = 0; wallx <= 80; wallx++) {
		gotoxy(wallx, 0);
		puts("#");

		gotoxy(wallx, 25);
		puts("#");
	}

	for (wally = 0; wally <= 25; wally++)
	{
		gotoxy(0, wally);
		puts("#");

		gotoxy(80, wally);
		puts("#");
	}

	int x = 0;
	int y = 0;		//��ǥ��
	int dirX = 1; // ��ȭ��(����)
	int dirY = 1;
	while (1) { //for(;;) while�� ������


		gotoxy(x, y);
		puts("#");
		delay(30);
		gotoxy(x, y);
		puts(" ");
		x += dirX;
		y += dirY;
		// �糡�� ������ ��ȣ�� �ٲپ��
		// ��ȣ�� ���� = ����<->����
		if (x == 80 || x == 0)
			dirX *= -1;
		if (y == 24 || y == 0)
			dirY *= -1;
	}
}