// 1.문제가 뭐냐 ???
// 1-1.프로그맹 위해서 필요한 단어, 개념
// 1-2 자료형, 함수
// 2. 제어문 실행할 순서, 절차에 따라 작성
// 반복 숙달만이 살아남는 방법이다...

// 선생님이 학생 점수를 입력하고 출력하는 프로그램
// 누가? 무엇을 ?
// 정수를 입력, 출력
// 정수, 실수
// 정수 ( 0 ~ 100) scanf(). printf()
// ~ 함수를 사용 시 반환, 전달

// 첫번째 실행되는게 뭔지 잘 파악해야함!!!!!
//  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int step01() {

	int score;
	printf("Score > ");
	scanf_s("%d", &score); //입력 받아라... 저장한다...
	// 변수에 값을 다른 함수가 저장하게 하려면 변수 주소를 준다....
	return 0;

	printf(" 입력받은 점수 : ");

}

int step02() {
	// 점수 3개, 3과목 : 국어, 영어, 수학
	// 변수에는 1개의 값을 저장할 수 있다...
	int kor, eng, math; // 변수 여러 개 사용시, 각각 변수 의미(용도)

	// scanf, printf 한 번 실행 시 여러 개 입출력함수
	printf("국어 영어 수학 점수 순서로 입력 >");
	scanf_s("%d %d %d", &kor, &eng, &math); // 순서가 중요

	printf("%d %d %d \n", kor, eng, math);

	return 0;
	





}

int step03() {
	// 학생들이 총 5명이 있는데 각 학생마다 국,영,수 점수를 가진다....
	// 총 15개의 점수들
	// 여러 개의 데이터를 처리하는 프로그램 만드는 연습
	// 1반 5명, 12반, 3학년, 행성 구 학교 5개, 시 6개
	int score[15] = { 0 };
	// 배열 요소(변수) 각 0~ 번호 == 요소번호
	// 첫번째 학생의 3과목 점수로 보겠다...
	printf("첫번째 정수 > ");
	scanf_s("%d %d %d", &score[0], &score[1], &score[2]);
	printf("첫번째 정수 > ");
	scanf_s("%d %d %d", &score[3], &score[4], &score[5]);
	printf("첫번째 정수 > ");
	scanf_s("%d %d %d", &score[6], &score[7], &score[8]);
	printf("첫번째 정수 > ");
	scanf_s("%d %d %d", &score[9], &score[10], &score[11]);
	printf("첫번째 정수 > ");
	scanf_s("%d %d %d", &score[12], &score[13], &score[14]);

	
	


	printf("%d %d %d \n", &score[0], &score[1], &score[2]);
	printf("%d %d %d \n", &score[3], &score[4], &score[5]);
	printf("%d %d %d \n", &score[6], &score[7], &score[8]);
	printf("%d %d %d \n", &score[9], &score[10], &score[11]);
	printf("%d %d %d \n", &score[12], &score[13], &score[14]);


	return 0;
}

int step04() {
	// 변수들의 개수 많아지면 제어문 활용
	// 배열과 for 거의 한 쌍
	int score[15] = { 0 };

	for (int i = 0; i < 15; ++i) {
		int v;
		scanf_s("%d", &v);

		score[i] = v;
	}

	for (int i = 0; i < 15; ++i) {
		printf("%d", score[i]);
	}

	return 0;

}

int step05() {
	// 학생 5명 당 3개의 점수가 있으니 총 15개의 정수를 입력, 저장, 출력
	// 출력, 추가적 계산(합, 평균)
	// 구분 : 학생과 점수의 구분 방법이 필요
	int score[5 * 3] = { 0 }; //[5][3]

	for (int i = 0; i < 13; i += 3) {
		int no = 1;
		printf("[%d]번 학생의 점수 > ", no);
		no++; //no+=1
		scanf_s("%d %d %d", &score[i + 0], &score[i + 1], score[i + 2]);

	}


		return 0;
	




}


int main(void) {
	// 규칙에 따르면 머리는 단순해진다...
	// 식을 만들때는 최대한 머리를 사용하라...
	// 식 : 연산자를 사용한 문장 : 산술, 관계, 논리
	// 100을 출력!!!



	step05();

	return 0;
}

