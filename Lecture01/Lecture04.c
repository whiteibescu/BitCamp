#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

/*
	�ڷ���, ���� ���
	������ 
	- �������
	- ���迬����(�񱳿�����)
	- ��������
	- ��Ʈ����(2����)


*/



int main(void) {

	// ������� : ��(����, �Ǽ�)
	int n = 10;
	double lf = 12.34;
	char ch = 'a'; // 97

	printf(" %d \n", n + 20);
	printf(" %lf \n", lf + 20);
	printf(" %d \n", ch + 20);
	printf(" %c \n", 97 + 20);
	// char�� �����δ� �����̴�.
	

	//���ذ� �Ȱ���....

	// printf(" %d \n", 97 / 0)
	printf(" %lf \n", (double)97 / 20);
	//���� �Ǽ��� �ٲ� �� ������ �� ��...
	printf(" %lf \n", (double)(97 / 20));

	printf(" %d \n", n % 5);

	// ����ȯ �� ����
	int a = 256;
	double b = a; // �������� �Ǽ��� �ٲ۴�
	int c = b;

	printf("%d %lf %d \n", a, b, c);

	//8byte --> 4byte : ���� �߸���...

	return 0;
}