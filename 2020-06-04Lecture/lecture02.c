#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int drawLine(int x);

int main(void) {

	drawLine(1);
	drawLine(2);
	drawLine(3);
	return 0;
}






int drawLine(int x) {
		// ȭ�� ���� �׸��� ���α׷�
	int y;
		// ��, �� ǥ�� �� �ݺ��� 2�� ���ļ� ����� �ڵ�
	y = (1 * x) + 5;	
	for (int r = 0; r < 10; ++r) {
		printf("[%2d]", r);
		for (int c = 0; c < 10; ++c) {
			// �� ��ġ(r,c)
			if (r == y && c == x) {

				printf("*");
			}
			else {
				printf("");
			}
		}
		printf("\n");
	}
	return 0;

}