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

//배열명이 주소다
char* toString() { //문자열을 반환하는 함수
	// 지역변수는 함수 종료 시 사라진다...
	// 동적할당 - 힙에 생성되어서 함수와는 관계 유지 가능
	char * name = (char*)malloc(80)
	// 문자열을 저장(대입)
	//name = "jangs ma"; // 배열명은 상수다... 대입연산 불가
	
	strncpy(name, "jangs ma", 80); // 문자열 저장 시 

	free(name);

	return NULL; //주소가 없다 = 
}

int getString(char *param, int size) {  //문자열을 받는 함수
	int i;
	for (int i = 0; i < sizeof(param) / sizeof(char); ++i) {
		param[i] = '0' + i;
	}
	param[i] = 0;
	return 0;

	return 0;
}


int main(void) {
	 
	char * p = toString();
	if (p == NULL) { //널 확인하기..
		printf("문자열이 없다\n");
	}
	else {
	printf("%s \n", p);
	free(p);
	}
	char name[80]
	getString(name);//배열명, 길이
	printf("%s ")

	return 0;
}

