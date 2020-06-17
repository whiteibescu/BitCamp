// 포인터 변수 : 위치정보만 담을 수 있다. 주소 (Address)

#include <stdio.h>

int main()
{
	int num = 10;
	int num1 = 100;
	/*
	아무것도 지칭하지 않는다
	-int 변수의 주소를 담는다
	-int 배열의 주소를 담는다
	*/
	int* ptr = NULL;
	
	ptr = &num;

	// 주소를 통해 원래 변수를 접근할 수 있다.
	printf("%d\n", *ptr);

	ptr = &num1;
	printf("%d\n", *ptr);
}