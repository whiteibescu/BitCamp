#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>




int main(void) {
	int y, x;
	int a, b;
	a = 1;
	b = 0;
	for(x =0; x < 20; ++x){


	y = (a * x) + b;

	for (int r = 0; r < 20; ++r) {
		for (int c = 0; c < 20; ++c) {
			
			(r==y && c==x) ?
			printf("��") : printf("  ");
		}
		printf("\n");
		}
	}
		return 0;
}



/*
int main_01(int argc, char* argv[]) {
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
*/