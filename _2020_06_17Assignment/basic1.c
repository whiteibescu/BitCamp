#include <stdio.h>

int main(void)
{
	int num[10];
	printf("10���� ������ �Է����ּ��� : ");
	for (int i = 0; i < 10; ++i) {
		scanf_s("%d", &num);
	}
	printf("���: ", &num[10]);
}