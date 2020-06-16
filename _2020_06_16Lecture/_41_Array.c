/* 배열 (짝, 줄서있다)
1) 용도
  국어점수 3명의 학생 입력
  int kor0, kor1, kor2;
  국어점수 1000명의 학생 입력
  int kor[1000];
  int 변수가 1000개 줄서있다.
*/
#include <stdio.h>

int main(void)
{
	int kor0 = 0, kor1 = 0, kor2 = 0;
	int sum = 0;
	double avg = 0.0;
	printf("1번째 힉생 국어 점수 입력 : ");
	scanf_s("%d", &kor0);
	printf("1번째 힉생 국어 점수 입력 : ");
	scanf_s("%d", &kor1);
	printf("1번째 힉생 국어 점수 입력 : ");
	scanf_s("%d", &kor2);
	// 정수와 정수의 연산의 결과는 정수
	// 275 / 3 => 275.0 / 3 => 소수점 가능
	sum = kor0 + kor1 + kor2;
	avg = (double)sum / 3;

	printf("총합은 %d 평균은 %.2lf", sum, avg);
}
