#include <stdio.h>

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
	printf("1��° �л� ���� ���� �Է�: ");
	scanf_s("%d", &kor0);
}