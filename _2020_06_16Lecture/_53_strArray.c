// 3���� �л��̸��� �迭�� �̿��ؼ� �Է��ϼ���
#include <stdio.h>
#include <string.h>

#define ST_NUM 3

void main()
{
	// char[20]�迭�� 3�� �ִ�
	char names[ST_NUM][20] = { 0 };

	for (int i = 0; i < ST_NUM; i++)
	{
		printf("�̸� �Է� >> ");
		fgets(names[i], sizeof(names[i]) - 1, stdin);
		names[i][strlen(names[i]) - 1] = 0;
	}

	for (int i = 0; i < ST_NUM; i++)
	{
		printf("%d��° �л� �̸��� %s �Դϴ�\n",
			i + 1, names[i]); 
	}
}