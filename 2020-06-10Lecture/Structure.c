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
	

	printf("�̸� : ");
	scanf("%s", dart.name);
	printf("���� : ");
	scanf("%d", dart.age);
	printf("���� : ");
	scanf("%s", dart.sex);


	printf("�̸� : %s  ���� : %d ���� : %s\n", dart.name, dart.age, dart.sex);


	/*
	printf("�̸� : ");
	scanf("%s", dart.name[1]);
	printf("���� : ");
	scanf("%s", dart.age[1]);
	printf("���� : ");
	scanf("%s", dart.sex);

	printf("�̸� : ");
	scanf("%s", dart.name[2]);
	printf("���� : ");
	scanf("%s", dart.age[2]);
	printf("���� : ");
	scanf("%s", dart.sex)[2];
	*/

	return 0;

}