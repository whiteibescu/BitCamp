#include "turboc.h"
#include <conio.h>

#define WIDTH   45
#define HEIGHT   40

#define TRUE   1
#define FALSE   0

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
void drawWall(int start, int end, int any, int pt, char* icon) {

    for (int i = start; i <= end; i++) {

        if (any == 0) {
            gotoxy(i, pt);
        }
        else if (any == 1) {
            gotoxy(pt, i);
        }

        puts(icon); 
    }

}

/// <summary>
/// 좌상단점을 기준으로 너비, 높이에 해당하는 상자 그리기
/// </summary>
/// <param name="left">좌단 x</param>
/// <param name="top">상단 x</param>
/// <param name="width"></param>
/// <param name="height"></param>
void drawObs(int left, int top, int width, int height) {
    drawWall(left, left + width, 0, top, "#");
    drawWall(left, left + width, 0, top + height, "#");
    drawWall(top, top + height, 1, top, "#");
    drawWall(top, top + height, 1, top + width, "#");

}

void main()
{
    setcursortype(NOCURSOR);
    char* bar = "▣▣▣▣";
    int preX, preY;
    int newX, newY;
    preX = newX = WIDTH / 2 - strlen(bar) / 2 + 30;
    preY = newY = HEIGHT / 5 * 4 + 38;

    drawXLine(2 + 30, WIDTH + 2 + 30, HEIGHT + 2 + 30, "*");
    drawXLine(2 + 30, WIDTH + 2 + 30, 2 + 30, "*");
    drawYLine(2 + 30, HEIGHT + 2 + 30, WIDTH + 2 + 30, "*");
    drawYLine(2 + 30, HEIGHT + 2 + 30, 2 + 30, "*");
    drawObs(38, 38, 4, 4);
    /*drawObs(39, 42, 2, 2);
    drawObs(38, 38, 4, 4);*/
    drawObs(45, 44, 4, 4);
    drawBar(newX, newY, bar);

    int x = 3 + 30, y = 3 + 30;
    int wayX = 1, wayY = 1;
    int count = 0;
    int restart = 0;
    while (TRUE)
    {
    REGAME:
        setcursortype(NOCURSOR);
        gotoxy(x, y);
        puts("●");
        delay(20);
        gotoxy(x, y);
        puts("  ");

        if (count == 2) {
            if (wayX == 1) x++;
            else x--;
            if (wayY == 1) y++;
            else y--;
            if (x == 3 + 30 || x == WIDTH + 1 + 30) wayX *= -1;
            if (y == 3 + 30 || y == HEIGHT + 1 + 30 || (y == newY - 1 && x >= newX && x <= newX + 8)) wayY *= -1;
            count = 0;
            if (y == HEIGHT / 5 * 4 + 38 + 1)
            {
                gotoxy(50, 52);
                puts("game over");
                gotoxy(47, 54);
                puts("재도전 1, 종료 2");
                scanf_s("%d", &restart);
                getchar();
                if (restart == 1) {

                    gotoxy(50, 52);
                    puts("           ");
                    gotoxy(47, 54);
                    puts("                    ");
                    continue;
                }
                else if (restart == 2) { break; }

            }
        }

        count++;
        preX = newX;
        preY = newY;

        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            if (newX > 3 + 30)
                newX--;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            if (newX < WIDTH + 24)
                newX++;
        }
        if (newX != preX || newY != preY)
            drawBar(preX, preY, "        ");
        drawBar(newX, newY, bar);
    }
}