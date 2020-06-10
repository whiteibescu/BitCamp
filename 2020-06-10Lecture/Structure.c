#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

struct person {
	char name[15];
	int age;
	char sex[15];
};

int main(void) {
	struct person dart;
	

	printf("이름 : ");
	scanf("%s", dart.name);
	printf("나이 : ");
	scanf("%d", dart.age);
	printf("성별 : ");
	scanf("%s", dart.sex);


	printf("이름 : %s  나이 : %d 성별 : %s\n", dart.name, dart.age, dart.sex);


	/*
	printf("이름 : ");
	scanf("%s", dart.name[1]);
	printf("나이 : ");
	scanf("%s", dart.age[1]);
	printf("성별 : ");
	scanf("%s", dart.sex);

	printf("이름 : ");
	scanf("%s", dart.name[2]);
	printf("나이 : ");
	scanf("%s", dart.age[2]);
	printf("성별 : ");
	scanf("%s", dart.sex)[2];
	*/

	return 0;

}