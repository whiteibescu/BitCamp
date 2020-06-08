#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 문자열 - 문자 배열 - char []
// 배열명 - 주소((&[0])
// 문자열의 처리는 첫 글자로부터 '/0' 까지 - 가변 길이

int string_def() {


	char str[80] = { "korea 2020 fi" };

	// 문자열 출력 "%s", char *, for
	printf("%s \n", str); // 배열명 [0]번에서부터 널문자 전까지

	int v = puts(str);// &[0]
	printf(" v : %d \n", v);

	for (int i = 0; str[i] != '\0'; ++i) {
		// 화면에 1 글자 출력
		putchar(str[i]);
	}
	putchar('\n');

	// fputs();
}


//start program 
int main(int argc, char** argv) {

	string_def(); //문자열의 끝이 있다....
	

	return 0;

}