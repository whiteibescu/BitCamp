#include "addressBookDefine.h"
#include "turboc.h"
#include "addressBookController.h"

// �ٸ� c���Ͽ� �����ϴ� ����������
// �����Ϸ��� �Ʒ�ó�� ����Ѵ�.
extern int g_nAddrCnt;
extern AddressBook addressBook[ADDR_NUM];

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
	saveAddressBook();

	printf("���α׷� �����ϰڽ��ϴ�~\n");
}