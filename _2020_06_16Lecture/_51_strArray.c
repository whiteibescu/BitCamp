#include <stdio.h>
#include <string.h>

#define ST_NUM 3

void main()
{
	char name0[10] = { 0 };
	char name1[10] = { 0 };
	char name2[10] = { 0 };
	int kor0 = 0, kor1 = 0, kor2 = 0;

	/* 1) scanf_s�� "ȫ�浿" o
	           "ȫ �浿" => "ȫ"
	      space/enter�� �������� �о����.
	   2) fgets�� enter�� �������� �о����.
	      �ִ�ũ������� �о����
	   fgets�� ����ϴ� ������ ���� �̸���
	   �����ص� ��� �Է¹ް� �;
	*/
	printf("1��° �л� �̸� �Է� : ");
	fgets(name0, sizeof(name0)-1, stdin);
	name0[strlen(name0) - 1] = 0;	// '\n' => '\0'
	printf("1��° �л� ���� ���� �Է�: ");
	scanf_s("%d", &kor0); getchar();

	printf("2��° �л� �̸� �Է� : ");
	fgets(name1, sizeof(name1) - 1, stdin);
	name1[strlen(name1) - 1] = 0;	// '\n' => '\0'
	printf("2��° �л� ���� ���� �Է�: ");
	scanf_s("%d", &kor1); getchar();

	printf("3��° �л� �̸� �Է� : ");
	fgets(name2, sizeof(name2) - 1, stdin);
	name2[strlen(name2) - 1] = 0;	// '\n' => '\0'
	printf("3��° �л� ���� ���� �Է�: ");
	scanf_s("%d", &kor2); getchar();

	printf("%s�л��� ���������� %d�Դϴ�\n",
		name0, kor0);
	printf("%s�л��� ���������� %d�Դϴ�\n",
		name1, kor1);
	printf("%s�л��� ���������� %d�Դϴ�\n",
		name2, kor2);
}