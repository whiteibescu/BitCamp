/* 3���� �л��� �̸��� ���������� �Է� �ް� ��ü ������ ��հ� �� �л� �̸��� ������ ����ϼ���...*/
#include <stdio.h>
#include <string.h>

#define ST_NUM 3

void main()
{
	// char[20]�迭�� 3�� �ִ�
	char names[ST_NUM][20] = { 0 };
	int kor[ST_NUM] = { 0 };
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < ST_NUM; i++)
	{
		printf("%d��° �̸� �Է� >> \n", i+1);
		fgets(names[i], sizeof(names[i]) - 1, stdin); 
		names[i][strlen(names[i]) - 1] = 0;		

		printf("%d��° �л� ���� ���� �Է� : ", i + 1);
		scanf_s("%d", &kor[i]);
		sum += kor[i];
		avg = (double)sum / ST_NUM;
	}

	printf("\n������ %d ����� %.2lf\n\n", sum, avg);
	for (int i = 0; i < ST_NUM; i++)
	{
		printf("�̸� : %s \n ���� : %d\n", names[i], kor[i]);
	}	
}

