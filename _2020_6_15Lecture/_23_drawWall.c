#include "turboc.h"

//#define WIDTH = 80;
//#define HEIGHT = 25;



//�������� �׸��� �Լ�
/// <param name="start">�׸��� ���۵Ǵ� ��ġ </param>
/// <param name="end">�׸��� ���� ��ġ</param>
/// <param name="any">0���� goalVal���� ��ȭ</param>
/// <param name="pt">x���� ��ȭ�� y�� ����, y������ ���ϸ� x�� ����</param>
/// <param name="icon">�׸� icon ���</param>
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

	//�� �׸���
	drawWall(0, WIDTH / 2, 0, HEIGHT + 1, '��');
	drawWall(0, HEIGHT, 1, WIDTH + 2, '��');


	int x = 0;
	int y = 0;		//��ǥ��
	int dirX = 1; // ��ȭ��(����)
	int dirY = 1;
	while (1) { //for(;;) while�� ������


		//���� �׸���
		int sX = 0 + WIDTH / 2 / 2;
		int eX = sX + WIDTH / 2;
		int sY = 0 + HEIGHT / 2 / 2;
		int eY = sY + HEIGHT / 2;
		drawWall(sX, eX, 0, sY, '��');  //��� X��
		drawWall(sX, eX, 0, eY, '��');  //�ϴ� X��
		drawWall(sX, eX, 0, sY, '��');  //�´� X��
		drawWall(sY, eY, 1, eX, '��');  //��� Y��
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
