#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define SIZE 1

struct address {
	int bunho;
	char sido[15];
	char gungu[11];
	char eupdongmyun[11];
	char gil[11];
	char ho[7];
	char name[11];
}Address[SIZE];

int menu(void)
{
	printf("��������������������\n");
	printf("��   1.�ּ� �Է�  ��\n");
	printf("��   2.�ּ� ���  ��\n");
	printf("��   3.�ּ� ����  ��\n");
	printf("��   4.�ּ� ����  ��\n");
	printf("��   5.�ּ� �˻�  ��\n");
	printf("��   6.�� ��  ��  ��\n");
	printf("��   7.��     ��  ��\n");
	printf("��������������������\n");

	return 0;
}


int menu1(void)
{
	printf("��������������������\n");
	printf("�� ��1.�ּ� �Է¡ڦ�\n");
	printf("��   2.�ּ� ���  ��\n");
	printf("��   3.�ּ� ����  ��\n");
	printf("��   4.�ּ� ����  ��\n");
	printf("��   5.�ּ� �˻�  ��\n");
	printf("��   6.�� ��  ��  ��\n");
	printf("��   7.��     ��  ��\n");
	printf("��������������������\n");

	return 0;
}

int menu2(void)
{
	printf("��������������������\n");
	printf("��   1.�ּ� �Է�  ��\n");
	printf("�� ��2.�ּ� ��¡ڦ�\n");
	printf("��   3.�ּ� ����  ��\n");
	printf("��   4.�ּ� ����  ��\n");
	printf("��   5.�ּ� �˻�  ��\n");
	printf("��   6.�� ��  ��  ��\n");
	printf("��   7.��     ��  ��\n");
	printf("��������������������\n");

	return 0;
}

int menu3(void)
{
	printf("��������������������\n");
	printf("��   1.�ּ� �Է�  ��\n");
	printf("��   2.�ּ� ���  ��\n");
	printf("�� ��3.�ּ� �����ڦ�\n");
	printf("��   4.�ּ� ����  ��\n");
	printf("��   5.�ּ� �˻�  ��\n");
	printf("��   6.�� ��  ��  ��\n");
	printf("��   7.��     ��  ��\n");
	printf("��������������������\n");

	return 0;
}

int menu4(void)
{
	printf("��������������������\n");
	printf("��   1.�ּ� �Է�  ��\n");
	printf("��   2.�ּ� ���  ��\n");
	printf("��   3.�ּ� ����  ��\n");
	printf("�� ��4.�ּ� �����ڦ�\n");
	printf("��   5.�ּ� �˻�  ��\n");
	printf("��   6.�� ��  ��  ��\n");
	printf("��   7.��     ��  ��\n");
	printf("��������������������\n");

	return 0;
}

int menu5(void)
{
	printf("��������������������\n");
	printf("��   1.�ּ� �Է�  ��\n");
	printf("��   2.�ּ� ���  ��\n");
	printf("��   3.�ּ� ����  ��\n");
	printf("��   4.�ּ� ����  ��\n");
	printf("�� ��5.�ּ� �˻��ڦ�\n");
	printf("��   6.�� ��  ��  ��\n");
	printf("��   7.��     ��  ��\n");
	printf("��������������������\n");

	return 0;
}

int menu6(void)
{
	printf("��������������������\n");
	printf("��   1.�ּ� �Է�  ��\n");
	printf("��   2.�ּ� ���  ��\n");
	printf("��   3.�ּ� ����  ��\n");
	printf("��   4.�ּ� ����  ��\n");
	printf("��   5.�ּ� �˻�  ��\n");
	printf("�� ��6.�� ��  ���ڦ�\n");
	printf("��   7.��     ��  ��\n");
	printf("��������������������\n");

	return 0;
}

int menu7(void)
{
	printf("��������������������\n");
	printf("��   1.�ּ� �Է�  ��\n");
	printf("��   2.�ּ� ���  ��\n");
	printf("��   3.�ּ� ����  ��\n");
	printf("��   4.�ּ� ����  ��\n");
	printf("��   5.�ּ� �˻�  ��\n");
	printf("��   6.�� ��  ��  ��\n");
	printf("�� ��7.��     ��ڦ�\n");
	printf("��������������������\n");

	return 0;
}

int initial(void)
{
	int i;

	for (i = 0; i < SIZE; i++) {
		Address[i].bunho = 0;
		Address[i].sido[0] = '\0';
		Address[i].gungu[0] = '\0';
		Address[i].eupdongmyun[0] = '\0';
		Address[i].gil[0] = '\0';
		Address[i].ho[0] = '\0';
		Address[i].name[0] = '\0';
	}

	return 0;
}

int input(void)
{
	int i;
	int count = 0;

	char sido_in[14] = "\0";
	char gungu_in[10] = "\0";
	char eupdongmyun_in[10] = "\0";
	char gil_in[10] = "\0";
	char ho_in[6] = "\0";
	char name_in[10] = "\0";

	printf("==�� �� �� ��==\n");

	for (i = 0; i < SIZE; i++) {
		if (Address[i].bunho == 1)
			count++;
	}
	if (count == SIZE) {
		printf("�ּ�  �Է��� ���� �Ǿ����ϴ�.\n");
		return 0;
	}
	printf("��-�� �Է�:>>");
	gets(sido_in);

	if (strcmp(sido_in, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("��-�� �Է�:>>");
	gets(gungu_in);

	if (strcmp(gungu_in, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("��-��-�� �Է�:>>");
	gets(eupdongmyun_in);

	if (strcmp(eupdongmyun_in, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("��  �Է�:>>");
	gets(gil_in);

	if (strcmp(gil_in, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("ȣ �Է�:>>");
	gets(ho_in);

	if (strcmp(ho_in, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("�̸� �Է�:>>");
	gets(name_in);

	if (strcmp(name_in, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	for (i = 0; i < SIZE; i++) {
		if (Address[i].bunho == 0) {
			Address[i].bunho = 1;
			strcpy(Address[i].sido, sido_in);
			strcpy(Address[i].gungu, gungu_in);
			strcpy(Address[i].eupdongmyun, eupdongmyun_in);
			strcpy(Address[i].gil, gil_in);
			strcpy(Address[i].ho, ho_in);
			strcpy(Address[i].name, name_in);

			break;
		}
	}
	printf("�ּҰ� �ԷµǾ����ϴ�.\n");

	return 0;
}

int output(void)
{
	int i;
	int count = 0;

	printf("== ����¡� ==\n");

	for (i = 0; i < SIZE; i++) {
		if (Address[i].bunho == 1) {
			printf("%s %s \n", Address[i].sido, Address[i].gungu);
			printf("%s %s \n", Address[i].eupdongmyun, Address[i].gil);
			printf("%s %s \n", Address[i].ho, Address[i].name);
			printf("=================================\n");
			count++;
		}
		if (count == 3) {
			printf("�ƹ�Ű�� ��������.\n");
			getchar();
			count = 0;
		}
	}

	return 0;
}

int modify(void)
{
	int i;
	int k; //������ �ּ� �ε��� ��ȣ ����
	int count = 0;
	char sido_mo[15] = "\0";
	char gungu_mo[11] = "\0";
	char eupdongmyun_mo[11] = "\0";
	char gil_mo[11] = "\0";
	char ho_mo[7] = "\0";
	char name_mo[11] = "\0";

	printf("== �ڼ����� ==\n");
	printf("�������ּ��̸��Է�:>>");
	gets(name_mo);

	if (strcmp(name_mo, "\0") == 0) {
		printf("�̸� �Է��� ���� �ʾҽ��ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	for (i = 0; i < SIZE; i++) {
		if (strcmp(name_mo, Address[i].name) == 0) {
			printf("%s %s \n", Address[i].sido, Address[i].gungu);
			printf("%s %s \n", Address[i].eupdongmyun, Address[i].gil);
			printf("%s %s \n", Address[i].ho, Address[i].name);
			printf("������ �ּ� �̸��� �˻��Ǿ����ϴ�.\n");
			printf("=================================\n");
			k = i;
		}
		else
			count++;
	}

	if (count == SIZE) {
		printf("������ �ּ� �̸��� �����ϴ�.\n");
		return 0;
	}

	printf("������ �ּ� �̸� �Է��ϰڽ��ϴ�.\n");
	printf("������-�� �Է�:>>");
	gets(sido_mo);

	if (strcmp(sido_mo, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("������-�� �Է�:>>");
	gets(gungu_mo);

	if (strcmp(gungu_mo, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("������-��-�� �Է�:>>");
	gets(eupdongmyun_mo);

	if (strcmp(eupdongmyun_mo, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("������  �Է�:>>");
	gets(gil_mo);

	if (strcmp(gil_mo, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("����ȣ �Է�:>>");
	gets(ho_mo);

	if (strcmp(ho_mo, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	printf("�����̸� �Է�:>>");
	gets(name_mo);

	if (strcmp(name_mo, "\0") == 0) {
		printf("�� �ܾ  �ԷµǾ����ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}
	strcpy(Address[k].sido, sido_mo);
	strcpy(Address[k].gungu, gungu_mo);
	strcpy(Address[k].eupdongmyun, eupdongmyun_mo);
	strcpy(Address[k].gil, gil_mo);
	strcpy(Address[k].ho, ho_mo);
	strcpy(Address[k].name, name_mo);

	printf("�ּҿ� �̸��� �����Ͽ����ϴ�.\n");

	return 0;

}

int del(void)
{
	int i;
	int yn;
	int count = 0;
	char name_de[11] = "\0";

	printf("== �ڻ����� ==\n");
	printf("�������ּ��̸��Է�:>>");
	gets(name_de);

	if (strcmp(name_de, "\0") == 0) {
		printf("�̸��� �Էµ��� �ʾҽ��ϴ�.\n");
		printf("�ٽ� �Է� �Ͻʽÿ�.\n");

		return 0;
	}
	for (i = 0; i < SIZE; i++) {
		if (strcmp(name_de, Address[i].name) == 0) {
			printf("%s %s \n", Address[i].sido, Address[i].gungu);
			printf("%s %s \n", Address[i].eupdongmyun, Address[i].gil);
			printf("%s %s \n", Address[i].ho, Address[i].name);
			printf("������ �ּ� �̸��� �˻��Ǿ����ϴ�.\n");
			printf("=================================\n");

			printf("�����Ͻðڽ��ϱ�?(y/n)>>");
			yn = _getche();
			if (yn == 'y') {
				Address[i].bunho = 0;
				Address[i].sido[0] = '\0';
				Address[i].gungu[0] = '\0';
				Address[i].eupdongmyun[0] = '\0';
				Address[i].gil[0] = '\0';
				Address[i].ho[0] = '\0';
				Address[i].name[0] = '\0';

				printf("\n�ּ� �̸��� ������ �Ǿ����ϴ�.\n");
				return 0;
			}
			else if (yn == 'n') {
				printf("\n���� ���մϴ�.\n");
				return 0;
			}
			else {
				fflush(stdin);
				printf("\n�߸��Է��ϼ̽��ϴ�.\n");
				return 0;
			}
		}
		else
			count++;
	}

	if (count == SIZE) {
		printf("������ �ּ� �̸��� �����ϴ�.\n");
		return 0;
	}

	return 0;
}

int search(void)
{
	int i;
	int count = 0;
	char name_se[11] = "\0";

	printf("== �ڰ˻��� ==\n");
	printf("�˻����ּ��̸��Է�:>>");
	gets(name_se);

	if (strcmp(name_se, "\0") == 0) {
		printf("�̸� �Է��� ���� �ʾҽ��ϴ�.\n");
		printf("�ٽ� �Է��Ͻʽÿ�.\n");

		return 0;
	}

	for (i = 0; i < SIZE; i++) {
		if (strcmp(name_se, Address[i].name) == 0) {
			printf("%s %s \n", Address[i].sido, Address[i].gungu);
			printf("%s %s \n", Address[i].eupdongmyun, Address[i].gil);
			printf("%s %s \n", Address[i].ho, Address[i].name);
			printf("�ּ� �̸��� �˻��Ǿ����ϴ�.\n");
			printf("=================================\n");

		}
		else
			count++;
	}
	if (count == SIZE) {
		printf("�˻��� �ּ� �̸��� �����ϴ�.\n");
		return 0;
	}

	return 0;
}

int help(void)
{
	printf("==�ڵ��򸻡�==\n ");
	printf("�ּҷ� ���� ���α׷��Դϴ�.\n");
	printf("���� ���� �˻��� �̸��� �Է��ϼ���.\n");

	return 0;
}

int quit(void)
{
	printf("����ġ�ڽ��ϴ�.!!\n");
	exit(0);
}

int main(void)
{
	static int sum = 1;
	int chr;

	initial();

	while (1)
	{


		if (sum == 1)
		{
			menu1();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) input();
		}
		else if (sum == 2)
		{
			menu2();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) output();
		}
		else if (sum == 3)
		{
			menu3();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) modify();

		}
		else if (sum == 4)
		{
			menu4();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) del();
		}
		else if (sum == 5)
		{
			menu5();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) search();
		}
		else if (sum == 6)
		{
			menu6();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) help();
		}
		else if (sum == 7)
		{
			menu7();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) quit();
		}
		else if (sum < 1) sum = 7;
		else if (sum > 7) sum = 1;
	}
	return 0;

}