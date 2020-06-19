#include "addressBookDefine.h"
#include "turboc.h"
#include "addressBookView.h"

void viewMenu()
{
	printf("\t<�ּҷ� ���� ���α׷�>\n");
	printf("1. �Է�\n");
	printf("2. �˻�\n");
	printf("3. ����\n");
	printf("4. ����\n");
	printf("5. ��ü���\n");
	printf("6. ����\n");
}

int getSelNum()
{
	int selNum = 0;
	printf("\n��ȣ�� �����ϼ��� >> ");
	scanf_s("%d", &selNum);
	getchar();		// '\n'�� ���ۿ��� ����

	return selNum;
}

void userInputAddress(AddressBook* pAddr)
{
	printf("�̸� �Է�: ");
	fgets(pAddr->name, sizeof(pAddr->name), stdin);
	pAddr->name[strlen(pAddr->name) - 1] = '\0';	// '\n' -> '\0'
	printf("�ּ� �Է�: ");
	fgets(pAddr->address, sizeof(pAddr->address), stdin);
	pAddr->address[strlen(pAddr->address) - 1] = '\0';
	printf("���� �Է�: ");
	char age[4] = { 0 };
	fgets(age, sizeof(age), stdin);	// "24"
	pAddr->age = atoi(age);		// "24" -> 24
	printf("Ű �Է�: ");
	char height[10] = { 0 };
	fgets(height, sizeof(height), stdin); // "174.5"
	pAddr->height = (float)atof(height);	   //"174.5" -> 174.5
	printf("������ �Է�: ");
	char weight[10] = { 0 };
	fgets(weight, sizeof(weight), stdin);	// "75.5"
	pAddr->weight = (float)atof(weight);	   // "75.5" -> 75.5
}

void laterProcess()
{
	getchar();		// scanf_s���� �Էµ� \n�� ó��
	getchar();		// �ƹ� �Է�(ȭ�� ��� ����)
	clrscr();		// ȭ�� û��
}

void showAddress(AddressBook* pAddr)
{
	printf("�̸� : %s\n", pAddr->name);
	printf("�ּ� : %s\n", pAddr->address);
	printf("���� : %d\n", pAddr->age);
	printf("Ű : %.1f\n", pAddr->height);
	printf("������ : %.1f\n", pAddr->weight);
	printf("----------------------\n\n");
}