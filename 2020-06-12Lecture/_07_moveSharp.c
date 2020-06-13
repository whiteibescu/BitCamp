#include "turboc.h"


void main()
{
    setcursortype(NOCURSOR); // no 커서
    int directionX = 0; // 0이면 오른쪽으로 이동
    int directionY = 0; // 00 이면 남동 01 북동 10 남서 11북서

    int x = 0; // 좌표
    int y = 0;
    while (1) {
        clrscr();
            if (directionX == 0) {
                if (x == 80) {
                    directionX = 1;
                    continue;
                }
                x++;
            }
            else {
                if (x == 0) {
                    directionX = 0;
                    continue;
                }
                x--;
            }
        
            if (directionY == 0) {
                if (y == 25) {
                    directionY = 1;
                    continue;
                }
                y++;
            }
            else {
                if (y == 0) {
                    directionY = 0;
                    continue;
                }
                y--;
            }
        
        printf("x: %d, y: %d, directionX: %d, directionY: %d", x, y, directionX, directionY);
        gotoxy(x, y);
        puts("#");
        delay(50);
    }

}

//1. #이 다시 시작위치에서 반복되도록 만드세요.
//2. #이 왕복하도록 만드세요.
//3. #이 반사되도록 만드세요. (무한 V자 만들기) 
//힌트 : x값과 y값을 모두 변화시키면 된다.