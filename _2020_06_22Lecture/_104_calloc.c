#include <stdio.h>
#include <stdlib.h>

void main()
{
	int stNum = 0;
	printf("�� �� �л��� ���� �Է��Ͻðڽ��ϱ�? ");
	scanf_s("%d", &stNum);

	// malloc�Ҵ� �� ��� 0���� �ʱ�ȭ
	int* pStScore =
		(int*)calloc(stNum, sizeof(int));
	/*
	int* pStScore =
		(int*)malloc(sizeof(int) * stNum);
	memset(pStScore, 0, sizeof(int) * stNum);
	*/
	for (int i = 0; i < stNum; i++)
	{
		printf("%d ��° �л� ���� �Է�: ", i + 1);
		scanf_s("%d", &pStScore[i]);
	}
	for (int i = 0; i < stNum; i++)
		printf("%d: %d��\n", i + 1, pStScore[i]);

	// �޸� ����
	free(pStScore);

	for (int i = 0; i < stNum; i++)
		printf("%d: %d��\n", i + 1, pStScore[i]);

}