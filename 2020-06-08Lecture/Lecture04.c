#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	// 동적할당 : 포인터변수, 함수 - 결국 배열
	int length = 60;
	char* p = (char*)malloc(length * sizeof(char)/*전체크기*/); // 주 용도가 배열을 만들기위해서
	// p[0]~ p[59]
	char arr[60];

	
	for (int i = 0; i < length; ++i) {
		p[i] = 'a' + 1; // 배열이다....


	}
	// 동적할당으로 생성된 공간, 배열은 반드시 해제한다...

	if (p != NULL) {
		free(p);				//이렇게 할당받은 주소를 다시 써야한다....
								//p를 변경하면 안된다....
		p = NULL;
	}
	return 0;
}