
#include <stdio.h>

#define ST_NUM 3

int main(void)
{
	int kor[ST_NUM] = { 0 };
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < ST_NUM; i++) {
		printf("%d��° ���� ���� ���� �Է� : ", i + 1);
		scanf_s("%d", &kor[i]);

		sum += kor[i];
	}


	avg = (double)sum / ST_NUM;

	printf("������ %d ����� %.2lf", sum, avg);
}
