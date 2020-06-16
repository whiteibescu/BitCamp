
#include <stdio.h>

int main(void)
{
	int kor[3] = { 0 };
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < 3; i++) {
		printf("%d¹øÂ° Èø»ý ±¹¾î Á¡¼ö ÀÔ·Â : ", i + 1);
		scanf_s("%d", &kor[i]);

		sum += kor[i];
	}


	avg = (double)sum / 3;

	printf("ÃÑÇÕÀº %d Æò±ÕÀº %.2lf", sum, avg);
}
