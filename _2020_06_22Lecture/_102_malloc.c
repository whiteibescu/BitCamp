#include <stdio.h>
#include <stdlib.h>

void main()
{
	int stNum = 0;
	printf("�� �� �л��� ���� �Է��Ͻðڽ��ϱ�? ");
	scanf_s("%d", &stNum);

	// (����)�迭�� �����ּҸ� ����Ű�� ������ ����
	// ���޸𸮿� stNumũ���� int�迭�� ����
	// pStScore�� �迭�� �����ּҸ� ����Ų��
	int* pStScore =
		(int*)malloc(sizeof(int) * stNum);

	for (int i = 0; i < stNum; i++)
	{
		printf("%d ��° �л� ���� �Է�: ", i+1);
		scanf_s("%d", &pStScore[i]);
	}
	for (int i = 0; i < stNum; i++)
		printf("%d: %d��\n", i + 1, pStScore[i]);

	// �޸� ����
	free(pStScore);
}