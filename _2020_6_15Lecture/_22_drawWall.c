#include "turboc.h"

//#define WIDTH = 80;
//#define HEIGHT = 25;
//�������� �׸��� �Լ�
//0���� goalVal���� ��ȭ
//x���� ��ȭ�� y�� ����, y������ ���ϸ� x�� ����
//�׸� icon ���


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
	drawWall(WIDTH / 2, 0, HEIGHT + 1, '��');
	drawWall(HEIGHT, 1, WIDTH+2, '��');


	int x = 0;
	int y = 0;		//��ǥ��
	int dirX = 1; // ��ȭ��(����)
	int dirY = 1;
	while (1) { //for(;;) while�� ������


		gotoxy(x, y);
		puts("��");
		delay(30);
		gotoxy(x, y);
		puts(" ");
		x += dirX;
		y += dirY;
		// �糡�� ������ ��ȣ�� �ٲپ��
		// ��ȣ�� ���� = ����<->����
		if (x == HEIGHT || x == 0)
			dirX *= -1;
		if (y == WIDTH || y == 0)
			dirY *= -1;
	}

}