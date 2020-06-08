#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_array(){
// 문자열 3개를 입력받아 출력하세요
	char s1[80];
	char s2[80];
	char s3[80];
	printf("string > ");
	fgets(s1, sizeof(s1), stdin);
	printf("string > ");
	fgets(s2, sizeof(s3), stdin);
	printf("string > ");
	fgets(s2, sizeof(s3), stdin);

	fputs(s1, stdout); //file (, FILE stream);
	fputs(s2, stdout); //
	fputs(s3, stdout);
	
	return 0;
}
int string_loop() {
	// 문자열 5개를 저장하는 배열
	char list[5][80];
	for (int i = 0; i < 5; ++i) {
		printf("string >");
		fgets(list[i], sizeof(list[i]), stdin);
	}

	for (int i = 0; i < 5; ++i) {
		printf("string >");
		fgets(list[i], sizeof(list[i]), stdout);
	}
	
	return 0;

}

int string_points() {
	//포인터 배열 : 포인터 변수들을 여러 가지고 있다...
	char* pl[5];
	for (int i = 0; i < 5; ++i) {
		printf("string >");
		pl[i] = (char*)malloc(80);
		fgets(pl[i], 80, stdin);

	}

	for (int i = 0; i < 5; ++i) {
		fputs(pl[i], stdout);
	}

	for (int i = 0; i < 5; ++i) {
		free(pl[i]);
	}
	




	return 0;
}



int string_dynamic() {
	char** ap = NULL; //포인터 배열 (동적)
	int count;
	printf("문자열 입력개수 : ");
	scanf_s("%d", &count);
	ap = (char**)malloc(count * sizeof(*ap)); //포인터가 가르키는 변수의 크기?

	for (int i = 0; i < count; ++i)
	{
		printf("string >");
		ap[i] = (char*)malloc(80);
		fgets(ap[i], 80, stdin);
				
	}

	for (int i = 0; i < count; ++i) {
		fputs(ap[i], stdout);
	}

	for (int i = 0; i < count; ++i) { // 포인터 요소부터 해제 하고
		free(ap[i]);
	}
	free(ap);						//해제


	return 0;
}


int main(void) {
	 
	string_points();


	return 0;
}

