/*
-�ּ� ���� ���� : ������ ����
int* ptr 
1) int������ �ּҸ� ���� �� �ִ�
   ; int�� ����ų �� �ִ�
2) int �迭�� �����ּҸ� ���� �� �ִ�
*/

#include <stdio.h>

void main()
{
	int arr[2][3] = { {99,87,78},
					  {78,89,90} };
	int* ptr = &arr[0][0];
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0][0]); i++)
	{
		printf("%d ", ptr[i]);
	}
}