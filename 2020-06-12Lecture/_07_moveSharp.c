#include "turboc.h"


void main()
{
    setcursortype(NOCURSOR); // no Ŀ��
    int directionX = 0; // 0�̸� ���������� �̵�
    int directionY = 0; // 00 �̸� ���� 01 �ϵ� 10 ���� 11�ϼ�

    int x = 0; // ��ǥ
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

//1. #�� �ٽ� ������ġ���� �ݺ��ǵ��� ���弼��.
//2. #�� �պ��ϵ��� ���弼��.
//3. #�� �ݻ�ǵ��� ���弼��. (���� V�� �����) 
//��Ʈ : x���� y���� ��� ��ȭ��Ű�� �ȴ�.