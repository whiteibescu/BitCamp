// ��������(local variable)
#include <stdio.h>

void main()
{	
	for (int i = 1; i <= 10; i++)
	{
		int result = 0;
		result += i;

		printf("����� %d �Դϴ�\n", result);
	}
	// result�� for�� ���������� ��ȿ�ϴ�
	//printf("����� %d �Դϴ�\n", result);
}