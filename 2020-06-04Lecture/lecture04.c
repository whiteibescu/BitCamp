#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <time.h>

// �������� : �Լ� �ۿ��� ����� ����
// - �� �ҽ� ���Ͽ� ���ǵ� ��� �Լ����� ��� ����

int main(int argc, char** argv) {
	// ���� ��ġ�� ���� ������ ���� : ���� ������
	// ���� ���� : �Լ� ������ ����� ���� : �� �Լ��� ����� �� �ִ�.
	// { } �� �������� ������...

	int v1 = 10;
	int* p;
	{
		int v2 = 1000;
		v1 = 20;
		v2 = 2000;
		p = &v2;
		printf("v2 : %p \n", &v2);
	}
	printf("v2 : %d \n", *p);
	*p = 3000;
	printf("%p -> %d \n", p, *p);
	// v2 = 3000; // ���� �� ����� ������ ���� �ۿ��� ��� �Ұ�




	return 0;
}