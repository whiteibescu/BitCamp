#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	C����� �ڷ���
	- ������ ���� ó���� ������ � ��������
	- ���� �����ϴ� �⺻��
	- �ּҸ� �����ϴ� ������(����Ʈ ��)
*/
int main() {
	char ���� = 'A'; // ASCII - 1 byte
	short ����_2 = 10; // 2 byte
	int ����_4 = 10; // 4 byte
	long ����_4 = 10; // 4 byte => ���� long ũ�Ⱑ �۴�
	long long ����_8 = 100;

	float �Ǽ�_4;
	double  �Ǽ�_8; // math.h �Լ����� �⺻��

	// ������ -> ��������
	char *s; // ĳ���� ������ �ּҸ� �����ϴ� ����

	return 0;
}