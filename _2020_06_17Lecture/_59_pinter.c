// ������ ���� : ��ġ������ ���� �� �ִ�. �ּ� (Address)

#include <stdio.h>

int main()
{
	int num = 10;
	int num1 = 100;
	/*
	�ƹ��͵� ��Ī���� �ʴ´�
	-int ������ �ּҸ� ��´�
	-int �迭�� �ּҸ� ��´�
	*/
	int* ptr = NULL;
	
	ptr = &num;

	// �ּҸ� ���� ���� ������ ������ �� �ִ�.
	printf("%d\n", *ptr);

	ptr = &num1;
	printf("%d\n", *ptr);
}