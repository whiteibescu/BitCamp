#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(void) {
	char ch = 'A';
	printf("size : %d \n", sizeof(ch));
	printf("address : %d \n", &(ch));	//������ �ּ�
	printf("size : %d \n\n", sizeof(&ch)); //�ּ��� ũ��

	char* p;
	printf("size : %d \n", sizeof(p));
	printf("address : %d \n", &(p));	//������ �ּ�
	printf("size : %d \n", sizeof(&p)); //�ּ��� ũ��

	p = &ch;		//ch ������ �ּҸ� �����Ѵ�...
	printf("%d \n", p); //�ּ�
	printf("%d \n", *p); // �̸� ch �� �� 
	*p = "B";
	printf("%c \n", ch);
	
	p = 'C';

	return 0;
}















int main_01(void)
{
	//������ ������ ���� : �ڷ��� * ������;
	// ������ ������ ����� �ּҿ� � ���� �ֳ�

	char ch;	//���� 1�� �����ϴ� ����
	char* p1;	// char ������ ����Ű�� ������ ����
		// char ���� ���� ���� �ٷ� �� �ִ�.... ( �迭 ó�� )
	char** p2;  //char ������ ����Ű�� �����ͺ����� ����Ű�� �����ͺ��� == �����͸� ����Ű�� ������ point of p �ٿ��� pop
				// ���� ���ϸ� ���

	char* ap1[3]; //������ �������� ��ҷ� �ϴ� 1�� �迭
	char	(*ap2)[3]; // �迭�� ����Ű�� (((�迭 ������)))
	char* (*ap3)[3]; 

	char (*fp)(void);		//�Լ� �迭�� ����Ű�� �����ͺ���
	char (*evt[5])(void);		//�Լ� ������ �迭

	//�ּҸ� �����Ѵ� ������!
	//������ ���� => ����Ų��

	
	return 0;
}