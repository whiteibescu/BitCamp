#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int nums[10];
	int len = 10;
	int* p = (int*)malloc(len * 4);// 동적 배열은 길이 변경 가능

	// 길이를 추가(늘린다)가 불가하지만
	// 동적배열은 가변 길이로써 변경이 가능
	len = +12;
	p = (int*)realloc(p, len * 4);// 이 함수는 동적할당으로 생성된 것만 사용 가능
	
	
	free(p);

	
	return 0; 
}