#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	// 1 ~ 25���� ���� �������� ���
	// 5 x 5 ����ϴ� �� ���� ���
	// ǥ
	for (int r = 0; r < 5; ++r) { //��
		for (int c = 0; c < 5; ++c) { // ��
			printf("%d\t", v);
			v++;// �����ϴ� ���� ��
			if (v > 25) {
				//��������
				exit(1);
			}

		}
		printf("\n");
	}









	int cnt = 0;
	for (int v = 1; v < 26; ++v)
	{
		printf("%d ", v);
		cnt++;
		// �� �ϳ��� 5���� ����ϸ� ���� ������...
		if (cnt == 5)
		{
			printf("\n");
			cnt = 0;
		}		
	}
	
	return 0;
}