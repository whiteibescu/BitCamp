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

	printf("ó�� ������ �̸��� �Է����ּ��� : ");
	scanf("%s", &name);
	printf("ó�� ������ ��ȣ�� �Է����ּ��� : ");
	scanf("%d", &number);
	

	printf("�ι�° ������ �̸��� �Է����ּ��� : ");
	scanf("%s", &name1);
	printf("�ι�° ������ ��ȣ�� �Է����ּ��� : ");
	scanf("%d", &number2);


	printf("��ȣ�� �ʿ��� ������ �Է����ּ��� : ");
	scanf("s", &Rname);

	return 0;


}