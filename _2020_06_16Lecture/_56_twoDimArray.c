// 2�� �л��� 3����(��,��,��) ���� �Է¹���
// ������ ��� ���

#include <stdio.h>

/*
int [3][4]�� 2�׷����� �����Ѵ�
int arr[2][3][4];
*/
void main()
{
	// int [3]���� 2�׷����� �����Ѵ�
	// 2�� 3�� 
	int arr[2][3] = { {99,87,78},
					  {78,89,90} };
	printf("sizeof(int) : %d\n", sizeof(int));
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", &arr[i][j]);
		}
		printf("\n");
	}
}