/* ���� ����(global Variable)
1. ���� ���� ���� �ʴ�
2. 0���� �ʱ�ȭ ���� �ʾƵ� �ڵ� 0���� �ʱ�ȭ
3. ��𼭳� ��밡���ϴ�
4. ���α׷� ��ü���� ���� ������ ��������
5. ������ �̸��� ���������� ������ 
���������� �켱������ ���´�.
*/
#include "turboc.h"

int g_EnterNum = 0;

void checkEnter()
{
	int g_EnterNum = 0;
	printf("VIPS�� �����ϼ̽��ϴ�\n");
	g_EnterNum++;
}

void showMenu()
{
	printf("1. �ֽ���\n");
	printf("2. �ƿ���\n");
	printf("3. VIPS\n");
	printf("4. Exit\n");
}

int getSelMenu()
{
	int num = 0;
	printf("\n�����ϼ��� >> ");
	num = getchar() - '0';
	getchar();	// \n���� ������ ����
	return num;
}

void main()
{
	while (1)
	{
		clrscr();
		showMenu();
		int sel = getSelMenu();
		if (sel == 3)
			checkEnter();
		else if (sel == 4)
			break;
	}
	printf("VIPS�� ������ ���� %d ���Դϴ�.", 
			g_EnterNum);
}

