
#include <stdio.h>

int main(void)
{
	int kor[3] = { 0 };
	int sum = 0;
	double avg = 0.0;
	printf("1��° ���� ���� ���� �Է� : ");
	scanf_s("%d", &kor[0]);
	printf("2��° ���� ���� ���� �Է� : ");
	scanf_s("%d", &kor[1]);
	printf("3��° ���� ���� ���� �Է� : ");
	scanf_s("%d", &kor[2]);

	sum = kor[0] + kor[1] + kor[2];
	avg = (double)sum / 3;

	printf("������ %d ����� %.2lf", sum, avg);
}
