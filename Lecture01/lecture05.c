#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>


/*
	�ڷ���, ���� ���
	������
	- �������
	- ���迬����(�񱳿�����)
	- ��������
	- ��Ʈ����(2����)
*/

int main_2(void) {
	// 0�� ����, 0�� �ƴϸ� ��
	// ���ǽĵ��� ����, ���踦 �ľ�

	printf("%d \n", 10 < 2);
	printf("%d \n", 10 > 2);

	// ���� 0 �Ǵ� 1�̴� - > �������� ���Ѵ�...
}
int main(void) {
	printf(" %d \n", (1 < 0) && ('a' == 97));
	printf(" %d \n", (1 < 0) || ('a' == 97));
	printf(" %d \n", !1); //�� ���� not

	printf(" %d \n ", NULL); // 0
	printf(" %d \n", EOF);   //End of File
	return 0;

}