#include <stdio.h>
#include <conio.h>

int main(void)
{

	while (1)
	{
		printf("1. �ּ� �Է�\n");
		printf("2. �ּ� �˻�\n");
		printf("3. �ּ� ����\n");
		printf("4. �ּ� ����\n");
		printf("5. ���α׷� ����\n");

		printf("��ȣ�� �����ϼ��� >> ");

		char sel = _getch();	//���ڸ�
		printf("%c �� �����ϼ̽��ϴ�\n", sel);
		if (sel == '5') {
			printf("�ȳ��� �輼�� ^^\n");
			break;
		}
		else {
			
			printf("������ ó���Ͽ����ϴ�~\n");
			printf("**********************\n\n");
		}
		




		/*<�ڵ� ����>
		1.�ڵ� ���� Ctrl + K, F*/



	}

}