// ���� ��� ������ �Ʒ�ó�� ����
#include "turboc.h"

void main()
{
	setcursortype(NOCURSOR); // no Ŀ��
	while (1) {

		for (int x = 0; x < 80; ++x)
		{
			gotoxy(x, 0);
			puts("#");
			delay(10);
			gotoxy(x, 0);
			puts(" ");
		}

		for (int x = 80; x >= 0; --x)
		{
			gotoxy(x, 0);
			puts("#");
			delay(10);
			gotoxy(x, 0);
			puts(" ");
		}
	}
}

//1. #�� �ٽ� ������ġ���� �ݺ��ǵ��� ���弼��.
//2. #�� �պ��ϵ��� ���弼��.
//3. #�� �ݻ�ǵ��� ���弼��. (���� V�� �����