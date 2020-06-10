#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

struct person {
	char name[30];
	int age;
	char sex[30];
};

int main(void) {
	int choose;
	printf("=========================\n");
	printf("① 주소록 추가\n\n");
	printf("② 주소록 보기\n\n");
	printf("③ 주소록 검색\n");
	printf("=========================\n");
	scanf("%d", &choose);





	struct person dart[2];
	int i;
	
	for (int i = 0; i < 2; ++i) {
		printf("이름 : ");
		scanf("%s", &dart[i].name);
		printf("나이 : ");
		scanf("%d", &dart[i].age);
		printf("성별 : ");

		scanf("%s", &dart[i].sex);
	}
	


	for (int i = 0; i < 2; ++i) {
		
		
		printf("이름 : %s  나이 : %d 성별 : %s\n", dart[i].name, dart[i].age, dart[i].sex);
	}
	return 0;

}
