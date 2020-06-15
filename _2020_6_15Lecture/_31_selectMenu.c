#include "turboc.h"

//���� ��� �ǹ��ִ� �����ڸ� ����Ѵ�.
// ó�� ���� �������ʹ� �ڵ����� 1�� �����Ѵ�.
enum {
	INPUT_ADDR = 1,
	SEARCH_ADDR,
	UPDATE_ADDR,
	DELETE_ADDR,
	PRINTALL_ADDR,
	EXIT_ADDR
};

void viewMenu()
{
	printf("\t<�ּҷ� ���� ���α׷�>\n");
	printf("1. �Է� \n");
	printf("2. �˻� \n");
	printf("3. ���� \n");
	printf("4. ���� \n");
	printf("5. ������� \n");
	printf("6. ���� \n");
}

int getSelNum()
{
	int selNum = 0;
	printf("\n��ȣ�� �����ϼ��� >> ");
	scanf_s("%d", &selNum);

	// �� �Լ��� ��ó���� ������ ������ ���ư� ��
	return selNum;
}

void inputAddress()
{
	printf("\n�Է�ó���Ͽ����ϴ�.\n");
}

void searchAddress()
{
	printf("\n�˻�ó���Ͽ����ϴ�.\n");
}

void updateAddress()
{
	printf("\n����ó���Ͽ����ϴ�.\n");
}
void deleteAddress()
{
	printf("\n����ó���Ͽ����ϴ�.\n");
}
void printAllAddress()
{
	printf("\n���ó���Ͽ����ϴ�.\n");
}
void exitApp()
{
	printf("\n�����Ͽ����ϴ�.\n");
}

void processWork(int selNum)
{
	switch (selNum)
	{
	case INPUT_ADDR:
		inputAddress();
		break;
	case SEARCH_ADDR:
		searchAddress();
		break;
	case UPDATE_ADDR:
		updateAddress();
		break;
	case DELETE_ADDR:
		deleteAddress();
		break;
	case PRINTALL_ADDR:
		printAllAddress();
		break;
	case EXIT_ADDR:
		exitApp();
	default:
		break;

	}
}

void laterProccess()
{
	getchar();				//scanf_s���� �Էµ� \n�� ó����
	getchar();				// �ƹ� �Է� �ޱ�
	clrscr();				// ȭ�� û��
}

void main()
{
	int selNum = 0;  //4����Ʈ ũ��



	while (1)
	{
		viewMenu();				// 1. �޴� �����ֱ�
		selNum = getSelNum();	// 2. ����� �Է�
		processWork(selNum);	// 3. ó��
		laterProccess();		// 4. ��ó��
	}
}