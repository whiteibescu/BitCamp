#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h> // ���Ű ó�� ����
#include <ctype.h>


#define W 20
#define H 15
int map[H][W]; // ��� �Լ� ���� ����, 0 �ʱ�ȭ

int showMap(void) {
	for (int r = 0; r < H; ++r) { // �� : H
		for (int c = 0; c < W; ++c) { // �� : W
			map[r][c] = 1;	
		}
	}
	return 0;
}

int drawMap(void) {
	// Ű����� �̵��� ��Ű�� �̵���θ� ������ �����...
	// �ѹ��� �Է� �� ȭ�� �׸��� ����ϰ� ����� ����
	// <enter> ����
	int iy, ix;
	iy = ix = 0;

	while(1){//���ѹݺ�
		system("cls"); //�ܼ� �󿡼� ������ �� �ִ� ���α׷�
		for (int r = 0; r < H; ++r) { // �� : H
			for (int c = 0; c < W; ++c) { // �� : W
				if (r == iy && c == ix) {
					printf("��"); // �����ڸ� ������ Ÿ���� ���ڿ�
				}
				else {
					printf("%2d", map[r][c]);
				}

			printf("%2d", map[r][c]);
			}
			putchar('\n');
		} // end for
		// Ű���尡 ������ ��
		if (_kbhit()) { 
			// �Էµ� ���� Ȯ��?
			char ch = _getch();
			if (ch == '\r') { // <enter>
				break; // ���߱�~
				// �Ʒ� return �ٷ� ������ �̵�
			}
			// ch = tolower(ch); // <ctype.h>
			// ����Ű �̵� = 1;

			if (ch == 'w' || ch == 'W') {//UP
				--iy;
			}
			if (ch == 's' || ch == 'S') {//DOWN
				++iy;
			}
			if (ch == 'a' || ch == 'A') {//LEFT
				--ix;
			}
			if (ch == 'd' || ch == 'D') {//RIGHT
				++ix;
			}
			// ���� ��ġ ǥ��
			map[iy][ix] = 1;
			map[iy][ix] = 1 - map[iy][ix];
		}
	}// break
	printf(" end drawMap()\n\n");
	return 0;
}

int main(void) {
	
	drawMap(); // ȣ���ϴ� ��ġ���� ���� �ݵ�� ���� �Ǵ� ����




	return 0;
}

// ��ġ���ٴ� �ٸ� ������ �־�#include <stdio.h>
