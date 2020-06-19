#include "turboc.h"
#include "addressBookDefine.h"
#include "addressBookModel.h"

// �ٸ� c���Ͽ� �����ϴ� ����������
// �����Ϸ��� �Ʒ�ó�� ����Ѵ�.
extern int g_nAddrCnt;
extern AddressBook addressBook[ADDR_NUM];

void saveAddressBook()
{
	FILE* fp = NULL;
	fopen_s(&fp, "addressBook.bin", "wb");

	/* ���� �����
	1. 4byte�� �迭�� ����
	2. �ڿ� ����ü �迭 ����
	*/
	fwrite(&g_nAddrCnt, sizeof(int), 1, fp);
	fwrite(addressBook, sizeof(AddressBook),
		g_nAddrCnt, fp);

	fclose(fp);
}
void loadAddressBook()
{
	FILE* fp = NULL;

	// ���������� ������ ���� ���
	if (fopen_s(&fp, "addressBook.bin", "rb") == 0)
	{
		fread(&g_nAddrCnt, sizeof(int), 1, fp);
		fread(addressBook, sizeof(AddressBook),
			g_nAddrCnt, fp);
		fclose(fp);
	}
}
