#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 3. �ʸ� �Է¹��� �� ��, �� �ʷ� ��ȯ �� ���
int sec_to_time_p(int sec) {
    // printf("�� �Է�->");

    printf("%d�ð� %d�� %d��\n", sec / 60 / 60, sec / 60 % 60, sec % 60);

    return 0;
}

void main() {
	sec_to_time_p(1000000);
} 