#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>




int main(void) {
	
	int shape[40] = { 1 };
	int cur = 1;
	while (1) {
		system("cls"); //������ ��� : ȭ�� �����

		for (int i = 0; i < 40; ++i)
		{
			// ����� ���� ���� ����� ���ڿ��� �ٸ���...
			printf("%s", (shape[i]) ?"@ ": "  " );
		}

		printf("\n");
		// 1�� �� ĭ�� ���������� �ű��........
		shape[cur-1] = 0;
		shape[cur] = 1;
		cur++;
		cur %= 40; // 0 ~39

	}

	return 0;
}