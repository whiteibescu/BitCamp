#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct student
{
	char name[20];
	int number;
	char sex;

};








int main(void)
{
	char name; 
	int number;
	char name1; 
	int number2;
	char Rname;

	printf("처음 저장할 이름을 입력해주세요 : ");
	scanf("%s", &name);
	printf("처음 저장할 번호를 입력해주세요 : ");
	scanf("%d", &number);
	

	printf("두번째 저장할 이름을 입력해주세요 : ");
	scanf("%s", &name1);
	printf("두번째 저장할 번호를 입력해주세요 : ");
	scanf("%d", &number2);


	printf("번호가 필요한 성함을 입력해주세요 : ");
	scanf("s", &Rname);

	return 0;


}