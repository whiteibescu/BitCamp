// ���� ��� ������ �Ʒ�ó�� ����
#include "turboc.h"

void main()
{
	setcursortype(NOCURSOR); // no Ŀ��

	int x = 0; 
	int y = 0;		//��ǥ��
	int dirX = 1; // ��ȭ��(����)
	int dirY = 1;
	while (1) { //for(;;) while�� ������


		gotoxy(x, y);
		puts("#");
		delay(30);
		gotoxy(x, y);
		puts(" ");
		x += dirX;
		y += dirY;
		// �糡�� ������ ��ȣ�� �ٲپ��
		// ��ȣ�� ���� = ����<->����
		if (x == 80 || x == 0)
			dirX *= -1;
		if (y == 24 || y == 0)
			dirY *= -1;
	}
}
//1�� 2�� �ذ� �Ϸ�


//1. #�� �ٽ� ������ġ���� �ݺ��ǵ��� ���弼��.
//2. #�� �պ��ϵ��� ���弼��.
//3. #�� �ݻ�ǵ��� ���弼��. (���� V�� �����
