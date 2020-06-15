#include "turboc.h"

// #2. ����� �����	���
//#define WIDTH 80
//#define HEIGHT 25

// #3. ����� �����	���
enum {
	WIDTH = 80, HEIGHT = 25
};

/// <summary>
/// icon�� �������� �׸��� �Լ�
/// </summary>
/// <param name="start">�׸��� ���۵Ǵ� ��ġ</param>
/// <param name="end">�׸��� ������ ��ġ</param>
/// <param name="any">0�̸� x�� ��ȭ, 1�̸� y�� ��ȭ</param>
/// <param name="pt">x���� ���ϸ� y�����, y���� ���ϸ� x�����</param>
/// <param name="icon">�׸� icon���</param>
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

void main()
{
	// #1. ����� �����	���
	//const int WIDTH = 80;		// ���
	//const int HEIGHT = 25;	// ���
	clrscr();
	setcursortype(NOCURSOR);

	// �� �׸���
	drawWall(0, WIDTH / 2, 0, HEIGHT + 2, "��");	// x��
	drawWall(0, HEIGHT, 1, WIDTH + 4, "��");		// y��

	// moveShape �ڵ� ����
	int x = 0, y = 0;		// ��ǥ��
	int dirX = 1, dirY = 1;	// ��ȭ��(����)
	while (1)
	{
		// ���� �׸���
		int sX = 0 + WIDTH / 2 / 2;
		int eX = sX + WIDTH / 2;
		int sY = 0 + HEIGHT / 2 / 2;
		int eY = sY + HEIGHT / 2;
		drawWall(sX, eX, 0, sY, "+");	// ���x��
		drawWall(sX, eX, 0, eY, "+");	// �ϴ�x��
		drawWall(sY, eY, 1, sX, "+");	// �´�y��
		drawWall(sY, eY, 1, eX, "+");	// ���y��
		gotoxy(x, y);
		puts("��");
		delay(50);
		gotoxy(x, y);
		puts("  ");
		x += dirX;
		y += dirY;
		// x�� ��輱�� ������ x�� ��ȭ
		if (x == WIDTH || x == 0)
			dirX *= -1;
		// y�� ��輱�� ������ y�� ��ȭ
		if (y == HEIGHT || y == 0)
			dirY *= -1;
	}

}