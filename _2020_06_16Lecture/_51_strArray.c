#include <stdio.h>

#define ST_NUM 3

void main()
{
	char name0[10] = { 0 };
	char name1[10] = { 0 };
	char name2[10] = { 0 };
	int kor0 = 0, kor1 = 0, kor2 = 0;

	/* 1) scanf_s는 "홍길동" o
	           "홍 길동" => "홍"
	      space/enter를 기준으로 읽어들임.
	   2) fgets는 enter를 기준으로 읽어들임.
	      최대크기까지만 읽어들임
	   fgets를 사용하는 이유는 성과 이름을
	   띄어쓰기해도 모두 입력받고 싶어서
	*/
	printf("1번째 학생 이름 입력 : ");
	fgets(name0, sizeof(name0)-1, stdin);
	printf("1번째 학생 국어 점수 입력: ");
	scanf_s("%d", &kor0);
}