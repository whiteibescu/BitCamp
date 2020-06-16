// 지역변수(local variable)
#include <stdio.h>

void main()
{	
	for (int i = 1; i <= 10; i++)
	{
		int result = 0;
		result += i;

		printf("결과는 %d 입니다\n", result);
	}
	// result가 for문 영역에서만 유효하다
	//printf("결과는 %d 입니다\n", result);
}