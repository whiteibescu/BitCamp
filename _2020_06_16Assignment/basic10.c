#include <stdio.h>

int main(void)
{
	int i, j;
	int multiplication[10][10]; //2���� �迭 ����

	for (i = 2; i <= 9; i++) //���� ����ϰ� ���ϱ� 
	{
		printf("\n[ %d�� ]\n\n", i);

		for (j = 1; j <= 9; j++)
		{
			multiplication[i][j] = i * j;
			printf("%d X %d = %d \n", i, j, multiplication[i][j]);
		}
	} 

	return 0;
/*
2���� �迭�� ���� ������ ����� �ϴ� �����Դϴ�.
INT I J 
2���迭�� �����߽��ϴ� = MULTIPLICATION
FOR FOR��
*/