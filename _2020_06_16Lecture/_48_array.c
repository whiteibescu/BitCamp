// ���������� 50�̻� ~ 100���� ������ ���� ����
#include "turboc.h"

#define ST_NUM 100

void main()
{
	int kor[ST_NUM] = { 0 };// ��� 0���� �ʱ�ȭ
	int sum = 0;
	double avg = 0.0;

	randomize();	// ���� �ʱ�ȭ
	for (int i = 0; i < sizeof(kor) / sizeof(kor[0]); i++)
	{
		//printf("%d��° �л� ���� ���� �Է�: ", i + 1);
		kor[i] = 50+random(51);
		sum += kor[i];

		printf("%02d\t", kor[i]);
		if (i % 10 == 9)
			printf("\n");
	}
	printf("\n");

	avg = (double)sum / ST_NUM;

	printf("������ %d�Դϴ�\n", sum);
	printf("����� %.2lf�Դϴ�\n", avg);
}