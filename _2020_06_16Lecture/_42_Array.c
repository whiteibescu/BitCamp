
#include <stdio.h>

int main(void)
{
	int kor[3] = { 0 };
	int sum = 0;
	double avg = 0.0;
	printf("1번째 힉생 국어 점수 입력 : ");
	scanf_s("%d", &kor[0]);
	printf("2번째 힉생 국어 점수 입력 : ");
	scanf_s("%d", &kor[1]);
	printf("3번째 힉생 국어 점수 입력 : ");
	scanf_s("%d", &kor[2]);

	sum = kor[0] + kor[1] + kor[2];
	avg = (double)sum / 3;

	printf("총합은 %d 평균은 %.2lf", sum, avg);
}
