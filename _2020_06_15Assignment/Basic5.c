#include <stdio.h> 
int main()
{
	int num;
	
	printf("���� ������ �Է����ּ��� : ");
	scanf_s("%d", &num);

	if (num > 0)
	for (int i = 0; i < num; ++i) {
		printf("�����մϴ�.\n");
	}

	else if (num < 0)
	{
		printf("�߸��Է��ϼ̽��ϴ�. �����մϴ�...");
			exit(0);
	}


	
}

