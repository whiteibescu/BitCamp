#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 자료형이 같아야함
요소명 type에 따르다.

*/
int main(void) {
	// 배열 선언, 생성 - 자료형, 최대 개수(길이)
	int arr[10];		// [] 하나 인 것을 1차 배열 - 선형
	char string[80];		//문자 배열 -> 문자열 80은 기본값 -> 콘솔창 ********************* 꼭 외우기

	int length = 10;
	int curlength = 0;		//현재 길이, 최대 길이를 항상 비교

	int index = 0;  // 요소번호 : 각 요소의 일련 번호

	// 배열명 : arr -  [0]번 요소의 주소를 의미함...
	// 요소명 : 배열명 [번호]
	// 요소가 배열인 경우 - 2차(다차) 배열
	// 요소명 == 배열명

	// 처리 방법 - 반복문 사용
	for (int i = 0; i < length; ++i) {
		arr[i] = (i + 1);  //모든 요소에 임의 값을 저장
	}
	for (int i = 0; i < length; ++i) {
		printf("%d, ", arr[i]); //요소의 값을 출력
	}

	return 0;
}