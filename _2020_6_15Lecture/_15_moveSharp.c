#include "turboc.h"

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

	clrscr();
	setcursortype(NOCURSOR);
	drawWall(80 / 2, 0, 24, '��');
	drawWall(25, 1, 79, '��');
}