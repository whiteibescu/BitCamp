/* static ��������
1) ���� ���� �����Ǵ� ����
2) ���� �޸𸮴� �������� ������ ����
3) �ٸ� ������ �ִ� static ����������
   �̸��� �޶�� �Ѵ�.
4) �ܺο����� ���������̰�
   ���ο����� ���������̴�
5) �ٸ� �Լ����� ������ ���Ѵ�(���������Ӽ�)
6) ���α׷� ���� �� ����
   ���α׷� �Ҹ� �� �Ҹ�
   ���� ��� ������ �� �ִ�
*/

// �ð����� �̿��� ���� �ٸ� ������
// �ú���
#include "turboc.h"
void init()
{
	setcursortype(NOCURSOR);
	clrscr();
}
// clock_t == long 
// clock() : cpu�κ��� ���� �ð��� ms�� ���´�.
// static ���� ���� : 
// ������ ��ġ�� ������ �Ҽ��� ���α׷� �Ҽ�
// ���α׷��� ������ �� �޸𸮿� �ε��ǰ�
// ���α׷��� �Ҹ�� �� �޸𸮿��� �������
clock_t runFirst(char* str, clock_t delaytime, clock_t preTime)	   // #�� ������
{
	static int xpos0 = 0, ypos0 = 6;
	static int dir0 = 1;
	gotoxy(xpos0, ypos0);
	printf(str);
	if (clock() - preTime >= delaytime)
	{
		gotoxy(xpos0, ypos0);
		printf("      ");
		xpos0 += dir0;
		if (xpos0 == 0 || xpos0 == 80)
			dir0 *= -1;
		preTime = clock();
	}
	return preTime;
}
clock_t runSecond(char* str, clock_t delaytime, clock_t preTime)	// @�� ������
{
	static int xpos1 = 0, ypos1 = 12;
	static int dir1 = 1;
	gotoxy(xpos1, ypos1);
	printf(str);
	if (clock() - preTime >= delaytime)
	{
		gotoxy(xpos1, ypos1);
		printf("      ");
		xpos1 += dir1;
		if (xpos1 == 0 || xpos1 == 80)
			dir1 *= -1;
		preTime = clock();
	}
	return preTime;
}
clock_t runThird(char* str, clock_t delaytime, clock_t preTime)	// @�� ������
{
	static int xpos2 = 0, ypos2 = 18;
	static int dir2 = 1;
	gotoxy(xpos2, ypos2);
	printf(str);
	if (clock() - preTime >= delaytime)
	{
		gotoxy(xpos2, ypos2);
		printf("      ");
		xpos2 += dir2;
		if (xpos2 == 0 || xpos2 == 80)
			dir2 *= -1;
		preTime = clock();
	}
	return preTime;
}
void main()
{
	init();
	// preTime�� ������۽ð�
	// ����������� ����������۽ð��� �󸶳� 
	// �귶���� �Ǵ��ϴ� ���ؽð�
	clock_t preTime0 = clock();
	clock_t preTime1 = clock();
	clock_t preTime2 = clock();
	while (1)
	{
		preTime0 = runFirst("�ââ�", 10L, preTime0);	// 100ms -> 0.1�ʸ��� ������
		preTime1 = runSecond("�ڡ�@", 20L, preTime1);	// 200ms -> 0.2�ʸ��� ������
		preTime2 = runThird("�ݢ���", 30L, preTime2);	// 200ms -> 0.2�ʸ��� ������
	}
}