// ���� ��� ������ �Ʒ�ó�� ����
#include "turboc.h"

void main()
{
	int x = 0;
	int dir = 1; // ��:1, ��: -1
	setcursortype(NOCURSOR); // no Ŀ��
	while (1) { //for(;;) while�� ������


		gotoxy(x, 0);
		puts("#");
		delay(30);
		gotoxy(x, 0);
		puts(" ");
		x = x + dir;  // x += dir;
		if (x == 80)
			dir = -1;
		else if (x == 0)
			dir = 1;
	}
}
//1�� 2�� �ذ� �Ϸ�


//1. #�� �ٽ� ������ġ���� �ݺ��ǵ��� ���弼��.
//2. #�� �պ��ϵ��� ���弼��.
//3. #�� �ݻ�ǵ��� ���弼��. (���� V�� �����