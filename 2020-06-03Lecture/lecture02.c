#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int score[] = { 1,2,3,4,5,6,7,8,9 }; // ������
	int length = sizeof(score)/sizeof(score[0]); // �迭�� ���̸� ������ ���� ������ �� ��Ұ� ������ �� ��ҷ� ������ ��� ��Ұ� ������ �� �˰ٴ�.
	// sizeof() ���� = ���̿� ũ�⸦ �Ǵ��ؼ� ���� �� = byte
	printf("size of array : %d \n", sizeof(score)); // �迭��
	printf("size of element : %d \n", sizeof(score[0])); // ��Ҹ�
	
	printf("long %d \n", sizeof(long));
	printf("long int %d \n", sizeof(long int));
	printf("long long %d \n", sizeof(long long));


	printf("%d \n", score); // �迭�� ���� �ּ�, [0]�� ����� �ּ�

}