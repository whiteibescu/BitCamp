#include <stdio.h>	// puts
#include <string.h> // strlen
#include "addressDefine.h" // ADDR_LEN, Address����ü
#include "addressModel.h"	// saveAllAddress

// �ٸ� ���� �����ϴ� ���������� 
// �����ؼ� ����ϰڴ�
// �������� x, �������� o
// �����ʱ�ȭ �ϸ� ������ ���� �߻�
// �׷��� ���� �ʱ�ȭ �ϸ� �ȵȴ�.
extern Address g_Address[ADDR_LEN];
extern int g_addrCnt;

// �Լ��� ���Ǻ�(������)
void showMenu()
{
	puts("1. Insert");
	puts("2. PrintAllAddress");
	puts("3. Exit");
}

int getSelMenu()
{
	int num = 0;
	printf("Select Number >> ");
	num = getchar() - '0';	// ���ڼ���->����
	getchar();	// ���ۿ� �����ִ� '\n'�� ����
	return num;
}

void insertAddress()
{
	if (g_addrCnt == ADDR_LEN)
	{
		puts("Memory Full!!!");
		return;
	}

	char name[20];
	char address[30];
	int age = 0;
	printf("\n--------[Insert]----------\n");
	printf("�̸��� �Է��ϼ��� >> ");
	/*
	-1) ���ۿ��� '\n'���������� �о���δ�
	�׷��� name���� �������� '\n'�� �����Ѵ�
	-2)stdin: standard input�� ���ڷ�
		   consoleȯ��ô뿡 ���� �⺻����
		   �Է���ġ�� Ű���忴�� �Ϳ��� ��Ե�
	-3)fgets�� ������ ���ڿ� stdin�� �ָ� Ű�����
	   ���� �Է�
	   ������������ fp�� �����ϸ� ���Ϸκ��� �Է�
	   �Ѷ��ξ� �о���δ�('\n'����)
	*/
	// "ȫ�浿\n"
	// "ȫ�浿\n" : strlen => 7����
	// name[7-1] : '\n' => '\0'
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;// '\0', NULL
	printf("�ּҸ� �Է��ϼ��� >> ");
	fgets(address, sizeof(address) - 1, stdin);
	address[strlen(address) - 1] = 0;
	printf("���̸� �Է��ϼ��� >> ");
	scanf_s("%d", &age);
	getchar();	// ���ۿ� ���� '\n'�� ����

	// �������� ����ü �迭�� ��������
	// �Ʒ�ó�� �ϸ� �ּҸ� ���簡 �ȴ�
	//g_Address[g_addrCnt].name = name;

	// ���ڿ��� ����� �ݵ�� �Լ��� ����ض�
	strncpy_s(g_Address[g_addrCnt].name,
		sizeof(g_Address[g_addrCnt].name),
		name, sizeof(name));
	strncpy_s(g_Address[g_addrCnt].address,
		sizeof(g_Address[g_addrCnt].address),
		address, sizeof(address));
	g_Address[g_addrCnt].age = age;

	// �����ο���/���������� �迭�� ��ġ
	g_addrCnt++;	// ����Ǿ����ϱ� ����
}

void printAllAddress()
{
	for (int i = 0; i < g_addrCnt; i++)
	{
		printf("\n---------------------\n");
		printf("�̸� : %s\n", g_Address[i].name);
		printf("�ּ� : %s\n", g_Address[i].address);
		printf("���� : %d\n", g_Address[i].age);
	}
}

int processAddress(int sel)
{
	int ret = 1;

	switch (sel)
	{
	case INSERT_ADDR:
		insertAddress();
		break;
	case PRINTALL_ADDR:
		printAllAddress();
		break;
	case EXIT_PROGRAM:
		ret = 0;
		saveAllAddress();
		//exit(0);
		break;
	default:
		puts("Invalid Number!");
		break;
	}

	return ret;
}
