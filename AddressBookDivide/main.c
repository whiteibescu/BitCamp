#include "addressBookDefine.h"

AddressBook addressBook[ADDR_NUM];	// �ּҷ� ���� ���� �迭
int g_nAddrCnt = 0;	   // ���� �ο���/���� ���� ��ġ

void main()
{
	int selNum = 0;
	int isRun = 1;	// 1�̸� �ݺ�, 0�̸� ����
	loadAddressBook();
	while (isRun)
	{
		viewMenu();						// 1. �޴� �����ֱ�
		selNum = getSelNum();			// 2. ����� �Է�
		isRun = processWork(selNum);	// 3. ó��
		laterProcess();					// 4. ��ó��
	}
}