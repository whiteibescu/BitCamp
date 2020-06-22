#include <stdio.h>
#include <stdlib.h>

typedef struct _Address
{
	char name[20];
	char address[30];
	int age;
}Address;

void inputAddress(Address* pAddr)
{
	printf("�̸� �Է�: ");
	fgets(pAddr->name, sizeof(pAddr->name) - 1, stdin);
	pAddr->name[strlen(pAddr->name) - 1] = 0;
	printf("�ּ� �Է�: ");
	fgets(pAddr->address, sizeof(pAddr->address) - 1, stdin);
	pAddr->address[strlen(pAddr->address) - 1] = 0;
	printf("���� �Է�: ");
	scanf_s("%d", &(pAddr->age));
	getchar();	// '\n'�� ����
}

void showAddress(Address* pAddr)
{
	printf("\n");
	printf("�̸� : %s\n", pAddr->name);
	printf("�ּ� : %s\n", pAddr->address);
	printf("���� : %d\n", pAddr->age);
	printf("---------------------------\n");
}

void main()
{
	int num = 0;
	printf("����� �� ���� �ּҸ� �����Ͻðڽ��ϱ�? ");
	scanf_s("%d", &num);
	getchar();	// '\n'�� ����

	// Address�迭�� numũ�⸸ŭ ���޸𸮿� �Ҵ��ϰ�
	// �迭�� �����ּҸ� pAddr�� �����Ͽ���.
	Address* pAddr =
		(Address*)malloc(sizeof(Address) * num);

	for (int i = 0; i < num; i++)
		inputAddress(&pAddr[i]);

	for (int i = 0; i < num; i++)
		showAddress(&pAddr[i]);

	free(pAddr);
}