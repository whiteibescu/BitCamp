// ���� ��� ������ �Ʒ�ó�� ����
#include "turboc.h"

void main() 
{
	setcursortype(NOCURSOR); // no Ŀ��
	
	for (int x = 0; x <= 80; ++x) 
	{
		clrscr();				// ȭ�� û��
		gotoxy(x, 12);
		puts("#");
		delay(100);
	}




}