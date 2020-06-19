#include "turboc.h"

#define ADDR_NUM	100

// ���� ��� �ǹ��ִ� ���ڸ� ����Ѵ�
// ó�� ���� �������ʹ� �ڵ����� 1�� �����Ѵ�
enum {
	INPUT_ADDR = 1,
	SEARCH_ADDR,
	UPDATE_ADDR,
	DELETE_ADDR,
	PRINTALL_ADDR,
	EXIT_ADDR
};

typedef struct _AddressBook
{
	char name[20];
	char address[30];
	int age;
	float height;
	float weight;
}AddressBook;

AddressBook addressBook[ADDR_NUM];	// �ּҷ� ���� ���� �迭
int g_nAddrCnt = 0;	   // ���� �ο���/���� ���� ��ġ

// �Լ� ����/�Լ� �����
void viewMenu();
int getSelNum();
void userInputAddress(AddressBook* pAddr);
void inputAddress();
void searchAddress();
void updateAddress();
void deleteAddress();
void showAddress(AddressBook* pAddr);
void printAllAddress();
void exitApp();
int processWork(int selNum);
void laterProcess();


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

void inputAddress()
{
	AddressBook* pAddr = &addressBook[g_nAddrCnt];
	userInputAddress(pAddr);
	g_nAddrCnt++;
	printf("�Է�ó���Ͽ����ϴ�~\n");
}
void searchAddress()
{
	char name[20] = { 0 };
	printf("�˻��� �̸� �Է�: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAddrCnt; i++)
	{
		// ���������� �Ű澲�� �ʰڴ�.
		if (strncmp(name, addressBook[i].name,
				strlen(name)) == 0)	// ����
		{
			showAddress(&addressBook[i]);
			break;
		}
	}
	printf("�˻�ó���Ͽ����ϴ�~\n");
}
void updateAddress()
{
	char name[20] = { 0 };
	printf("������ �̸� �Է�: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAddrCnt; i++)
	{
		// ���������� �Ű澲�� �ʰڴ�.
		if (strncmp(name, addressBook[i].name,
			strlen(name)) == 0)	// ����
		{
			printf("[������ �����͸� ���� �Է�]\n");
			userInputAddress(&addressBook[i]);
			showAddress(&addressBook[i]);
			break;
		}
	}
	printf("����ó���Ͽ����ϴ�~\n");
}
void deleteAddress()
{
	char name[20] = { 0 };
	printf("������ �̸� �Է�: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	for (int i = 0; i < g_nAddrCnt; i++)
	{
		// ���������� �Ű澲�� �ʰڴ�.
		if (strncmp(name, addressBook[i].name,
			strlen(name)) == 0)	// ����
		{
			showAddress(&addressBook[i]);
			printf("Really(Y/N)? ");
			char ch = getchar();
			getchar();			// '\n'�� ����
			if (ch == 'Y' || ch == 'y')
			{
				for (int j = i + 1; j < g_nAddrCnt; j++)
				{
					addressBook[j - 1] = addressBook[j];
				}
				g_nAddrCnt--;	
				printf("����ó���Ͽ����ϴ�~\n");
			}			
			break;
		}
	}
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

void printAllAddress()
{
	for (int i = 0; i < g_nAddrCnt; i++)
	{
		showAddress(&addressBook[i]);
	}
	printf("��ü���ó���Ͽ����ϴ�~\n");
}
void exitApp()
{
	printf("���α׷� �����ϰڽ��ϴ�~\n");
}

int processWork(int selNum)
{
	int ret = 1;

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
		ret = 0;
		break;
	default:
		printf("�� �� �Է��ϼ̽��ϴ�!\n");
		break;
	}

	return ret;
}

void laterProcess()
{
	getchar();		// scanf_s���� �Էµ� \n�� ó��
	getchar();		// �ƹ� �Է�(ȭ�� ��� ����)
	clrscr();		// ȭ�� û��
}

void main()
{
	int selNum = 0;
	int isRun = 1;	// 1�̸� �ݺ�, 0�̸� ����
	while (isRun)
	{
		viewMenu();						// 1. �޴� �����ֱ�
		selNum = getSelNum();			// 2. ����� �Է�
		isRun = processWork(selNum);	// 3. ó��
		laterProcess();					// 4. ��ó��
	}
}