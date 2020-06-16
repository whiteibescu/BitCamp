/* 3명의 학생의 이름과 국어점수를 입력 받고 전체 총점과 평균과 각 학생 이름과 점수를 출력하세요...*/
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
		printf("%d번째 이름 입력 >> \n", i+1);
		fgets(names[i], sizeof(names[i]) - 1, stdin); 
		names[i][strlen(names[i]) - 1] = 0;		

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

