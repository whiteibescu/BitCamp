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
	printf("�� �ּҷ� �߰�\n\n");
	printf("�� �ּҷ� ����\n\n");
	printf("�� �ּҷ� �˻�\n");
	printf("=========================\n");
	scanf("%d", &choose);





	struct person dart[2];
	int i;
	
	for (int i = 0; i < 2; ++i) {
		printf("�̸� : ");
		scanf("%s", &dart[i].name);
		printf("���� : ");
		scanf("%d", &dart[i].age);
		printf("���� : ");

		scanf("%s", &dart[i].sex);
	}
	


	for (int i = 0; i < 2; ++i) {
		
		
		printf("�̸� : %s  ���� : %d ���� : %s\n", dart[i].name, dart[i].age, dart[i].sex);
	}
	return 0;

}
