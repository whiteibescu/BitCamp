/* realloc ���Ҵ�
- malloc/calloc���� �̹� �Ҵ�� ������ 
  ���̰ų� ���� �� ����Ѵ�
*/
#include <stdio.h>
#include <stdlib.h>

#define ALLOC_NUM	5

void main()
{
	int i = 0;
	int allocCnt = ALLOC_NUM;
	// 5�� int�迭�� ���޸𸮿� �Ҵ��Ѵ�
	int* pNum = 
		(int*)malloc(sizeof(int) * allocCnt);
	while (i < allocCnt)
	{
		printf("Input Num: ");
		scanf_s("%d", &pNum[i]);
		getchar();
		i++;
		// �� �̻� ��������� ���� ��
		if (i == allocCnt)
		{
			printf("Memory Full!!!\n");
			printf("Are you sure you want to realloc?\n");
			char ans = getchar();
			if (ans == 'Y' || ans == 'y')
			{
				allocCnt += ALLOC_NUM;
				pNum = (int*)realloc(pNum, sizeof(int) * allocCnt);
			}
			else if (ans == 'N' || ans == 'n')
			{
				for (int j = 0; j < allocCnt; j++)
					printf("%d, ", pNum[j]);
				printf("\n");
			}
			else
				printf("Invalid Value");
		}	
	}
	free(pNum);
}