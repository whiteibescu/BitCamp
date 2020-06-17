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

void main()
{
	char* bar = "¢Ã¢Ã¢Ã¢Ã";

	while(TRUE)
	{ 
		drawXLine(0, WIDTH + 2, HEIGHT + 2, "¢È");
		drawYLine(0, HEIGHT + 2, WIDTH + 2, "¢Ç");
		drawBar(WIDTH / 2 - strlen(bar) / 2,
				HEIGHT / 5 * 4, bar);

		if (_kbhit())	// Å°°¡ ´­·È´Ï?
		{
			char key = _getch();
			switch (key)
			{
			case UP_KEY:
				break;
			case DOWN_KEY:
				break;
			case LEFT_KEY:
				break;
			case RIGHT_KEY:
				break;
			}
		}
	}
}