#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*	���
	�ݺ� : for while do-while
	�б� : if(��), switch(���,���)
*/

int main(void) { 
	//1 ~ 25 ���� �����ϴ� �������� ���

	int min = 1;	 //�Է�
	int max = 25;	 //�Է�
	for (int i = min; i < max+1 ; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	return 0;
}