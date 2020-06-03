#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int score[] = { 1,2,3,4,5,6,7,8,9 }; // 묵시적
	int length = sizeof(score)/sizeof(score[0]); // 배열의 길이를 변수에 따로 저장할 것 요소가 같으니 한 요소로 나누니 몇개의 요소가 나오는 지 알겟다.
	// sizeof() 연산 = 길이와 크기를 판단해서 많이 씀 = byte
	printf("size of array : %d \n", sizeof(score)); // 배열명
	printf("size of element : %d \n", sizeof(score[0])); // 요소명
	
	printf("long %d \n", sizeof(long));
	printf("long int %d \n", sizeof(long int));
	printf("long long %d \n", sizeof(long long));


	printf("%d \n", score); // 배열의 시작 주소, [0]번 요소의 주소

}