
#include <stdio.h>

#define ST_NUM 3

int main(void)
{
	int kor[ST_NUM] = { 0 };
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < ST_NUM; i++) {
		printf("%d¹øÂ° Èø»ý ±¹¾î Á¡¼ö ÀÔ·Â : ", i + 1);
		scanf_s("%d", &kor[i]);

		sum += kor[i];
	}


	avg = (double)sum / ST_NUM;

	printf("ÃÑÇÕÀº %d Æò±ÕÀº %.2lf", sum, avg);
}
