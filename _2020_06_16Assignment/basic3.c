#include <stdio.h>

int main()
{
	int sum = 0; //�հ� ���� ����
	int i = 0;
	do
	{
		for (int i = 1; i <= 10; i++)
		{
			sum += i;
		}
		printf("1���� ���� 10������ ����\n%d �Դϴ�. \n", sum);
		break;
		//n ����
	} while (1);

	return 0;
}