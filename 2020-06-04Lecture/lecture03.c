#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int drawLine(int x);

int main(int argc, char* argv[]) {
	int a = 1;
	int b = 5; // y�� �̵�
	int x = 0;
	int y = (a * x) + b; // �������� ����(��)
	x = 5; // ����
	y = 5; // ������


	for (int x = 0; x < 10; ++x) {
		y = (a * x) + b; // �������� ����(��)
		printf("{%d,%d}\n", x, y);
	}

	return 0;
}