#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(void) {
	char ch;
	int digit = 0; // ���� ��
	int alpha = 0; // ������ ��
	int words = 0; // ���� 
	int number = 0; // �������� ���ձ���
	while ( (ch = getchar() ) != EOF) {
		/* 
		�Է��Ѱ��� �����̸� =>
		������ ���� => digit++


		
		*/
		if (ch >= '0' && ch <= '9') digit++; 
		
		if (ch >= 'A' && ch <= 'Z') alpha++;

		if (ch >= 'a' && ch <= 'z') alpha++;

		if (ch == ' ' || ch == '\t' || ch == '\n') words++; //���� : ���� �ι� => ���� ��
		
	}
	printf("���� �� ��� :%d \n", digit);
	printf("������ �� ��� :%d \n", alpha);
	printf("���� ��� :%d \n", words);


	return 0;
}
/*
���� ����
EOF (Ctrl+Z) ��� ����...

���� �� :	

������ �� :

�ܾ�� :
*/