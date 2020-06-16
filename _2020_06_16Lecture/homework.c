#include <stdio.h>
#include <string.h>

#define ST_NUM 3

void main()
{
	// char[20]배열이 3개 있다
	char names[ST_NUM][20] = { 0 };
	int kor[ST_NUM] = { 0 };
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < ST_NUM; i++)
	{
		printf("%d번째 이름 입력 >> \n", i + 1);
		scanf_s("%s", &names[i], 20);

		printf("%d번째 학생 국어 점수 입력 : ", i + 1);
		scanf_s("%d", &kor[i]);
		sum += kor[i];
		avg = (double)sum / ST_NUM;
	}

	printf("\n총합은 %d 평균은 %.2lf\n\n", sum, avg);
	for (int i = 0; i < ST_NUM; i++)
	{
		printf("이름 : %s \n 점수 : %d\n", names[i], kor[i]);
	}
}

