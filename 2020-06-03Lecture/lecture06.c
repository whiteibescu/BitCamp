#include <stdio.h>




int main(void) {
	// ���� 15�� ������ 1�� �迭 �����ϱ�
	int numbers[15] = { 0 };
	int length = 15; // sizeof(�迭��) / sizeof(int);
	// ��� ��ҿ� ���� ������ �����ϱ�

	for (int i = length - 1; i >= 0; --i)
	{
		numbers[i] = rand(); // 0~32656
	}

	for (int i = 0; i < length; --i)
	{
		printf("%6d", numbers[i]);
	}
	printf("\n");


	return 0;

}

