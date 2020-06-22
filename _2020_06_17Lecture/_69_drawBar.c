#include "turboc.h"
#define WIDTH	80
#define HEIGHT	25

#define TRUE	1
#define FALSE	0

#define UP_KEY 72
#define DOWN_KEY 80
#define LEFT_KEY 75
#define RIGHT_KEY 77


void drawXLine(int sX, int eX, int yPos, const char* icon)
{
	int x = 0;
	for (x = sX; x <= eX; x++)
	{
		gotoxy(x, yPos);
		puts(icon);
	}
}

void drawYLine(int sY, int eY, int xPos, const char* icon)
{
	int y = 0;
	for (y = sY; y <= eY; y++)
	{
		gotoxy(xPos, y);
		puts(icon);
	}
}

void drawBar(int x, int y, char* bar)
{
	gotoxy(x, y);
	puts(bar);
}

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
void drawWall(int start, int end, int any, int pt, const char* icon)
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

/// <summary>
/// �»������ �������� �ʺ�, ���̿� �ش��ϴ� ���� �׸���
/// </summary>
/// <param name="left">�´� x</param>
/// <param name="top">��� y</param>
/// <param name="width">�ʺ�</param>
/// <param name="height">����</param>
void drawBox(int left, int top, int width, int height)
{
	drawWall(left, left + width, 0, top, "+");			// ��� x�� Edge
	drawWall(left, left + width, 0, top + height, "+");	// �ϴ� x�� Edge
	drawWall(top, top + height, 1, left, "+");			// �´� y�� Edge
	drawWall(top, top + height, 1, left + width, "+");	// ��� y�� Edge
}

void drawXLine(int sX, int eX, int yPos, const char* icon)
{
	int x = 0;
	for (x = sX; x <= eX; x++)
	{
		gotoxy(x, yPos);
		puts(icon);
	}
}
void drawYLine(int sY, int eY, int xPos, const char* icon)
{
	int y = 0;
	for (y = sY; y <= eY; y++)
	{
		gotoxy(xPos, y);
		puts(icon);
	}
}

/// <summary>
/// �»������ �������� �ʺ�, ���̿� �ش��ϴ� ���� �׸���
/// </summary>
/// <param name="left">�´� x</param>
/// <param name="top">��� y</param>
/// <param name="width">�ʺ�</param>
/// <param name="height">����</param>
void drawBox1(int left, int top, int width, int height)
{
	drawXLine(left, left+width, top, "��");
	drawXLine(left, left+width, top+height, "��");
	drawYLine(top, top+height, left, "��");
	drawYLine(top, top+height, left+width, "��");
}
void main()
{
	char* bar = "�âââ�";
	char* bar = "�âââ�";
	int preX, preY;
	int newX, newY;
	preX = newX = WIDTH / 2 - strlen(bar) / 2;
	preY = newY = HEIGHT / 5 * 4;

	drawXLine(0, WIDTH + 2, HEIGHT + 2, "��");
	drawYLine(0, HEIGHT + 2, WIDTH + 2, "��");
	drawBar(newX, newY, bar);

	while (TRUE)
	{
		if (_kbhit())	// Ű�� ���ȴ�?
		{
			preX = newX;
			preY = newY;

			char key = _getch();
			switch (key)
			{
			case UP_KEY:
				newY--;
				break;
			case DOWN_KEY:
				newY++;
				break;
			case LEFT_KEY:
				newX--;
				break;
			case RIGHT_KEY:
				newX++;
				break;
			}
			drawBar(preX, preY, "        ");
			drawBar(newX, newY, bar);
		}
	}
	// #1. ����� �����	���
	//const int WIDTH = 80;		// ���
	//const int HEIGHT = 25;	// ���
	clrscr();
	setcursortype(NOCURSOR);

	// �� �׸���
	drawXLine(30, WIDTH, HEIGHT+2, "��");		// x��
	drawYLine(12, HEIGHT, WIDTH+2, "��");		// y��

	// moveShape �ڵ� ����
	int x = 0, y = 0;		// ��ǥ��
	int dirX = 1, dirY = 1;	// ��ȭ��(����)
	while (1)
	{
		drawBox1(0, 0, 10, 5);
		drawBox1(0, 25 - 5, 10, 5);
		drawBox1(80 - 10, 0, 10, 5);
		drawBox1(80 - 10, 25 - 5, 10, 5);
		// ��� ���� �׸���
		int left = 0 + WIDTH / 2 / 2;
		int top = 0 + HEIGHT / 2 / 2;
		int width = WIDTH / 2;
		int height = HEIGHT / 2;
		drawBox1(left, top, width, height);

		int barSx = WIDTH / 2 - strlen(bar) / 2;
		int barEx = barSx + strlen(bar)/2;
		drawXLine(barSx, barEx, HEIGHT/5*4, "��");

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