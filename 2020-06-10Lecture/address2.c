#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char NAME[3][20], PHONE[3][20], SUCH[1][20];
	int i, count = 0;
	/*�̸��� ��ȭ��ȣ�� �迭�� ����*/
2
	/*for (i = 0; i < 3; i++)
	{
	   printf("%s     %s\n", NAME[i], PHONE[i]);
	}*/
	while (1)
	{
		/*ã�� ����� SUCH[0]�� ����*/
		printf("\nã�� ����� �̸� (���� : END) : ");
		scanf("%s", &SUCH[0]);
		/*printf("SUCH[0]�� ����� �� '%s'\n", SUCH[0]);*/
		/*END�� �Է��ϸ� ����*/
		if (strcmp(SUCH[0], "END") == 0) break;
		/*������ �̸��� �ִ��� Ȯ�� ������ ī��Ʈ ����*/
		for (i = 0; i < 3; i++)
		{
			if (strcmp(SUCH[0], NAME[i]) == 0) printf("\n%s\n", PHONE[i]);
			else count += 1;
		}
		/*ī��Ʈ�� 3�̸� ���� ��ȣ*/
		if (count == 3) printf("\n����Ǿ� ���� �ʴ� ������Դϴ�.\n");
		count = 0;
	}
	return 0;
}