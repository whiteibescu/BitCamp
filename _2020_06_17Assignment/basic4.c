#include <stdio.h>

// 4. ��, ��, �ʸ� �Է¹��� �� �ʷ� ��ȯ �� ���



int time_to_sec_p(int* time) {

	printf("%d�ð� %d�� %d�ʴ� %d��\n", *time, *(time + 1), *(time + 2), *time * 60 * 60 + *(time + 1) * 60 + *(time + 2));

	return 0;
}

int main(void) {
	int time[3] = { 2, 46, 40 };
	time_to_sec_p(time);
}