/* �޸� �����Ҵ�
�������� 3��° ���
- �������� �Ҵ�
- �ʿ��� �� �Ҵ�/���� ������� �� �� ����
- ū �޸𸮰� �ʿ��� ��
*/
/* ���޸� Ư¡
- �츮�� ���� �����ϱ� ������ ������� �ʴ´�
- �ʿ��ϸ� �����ϰ� �ʿ������ �Ҹ��ų �� �ִ�
*/
/*
	char name[20]; �϶���
	sizeof(name)�� 20�� ��µȴ�.
	�����Ϸ��� �迭�� �ν��ϹǷ�

	char* name = (char*)malloc(sizeof(char) * 20);
	�϶���
	sizeof(name)�� 4�� ���
	�����Ϸ��� �����ͷ� �ν��ϹǷ�
*/
/* �Լ� ������ ���ο� ��������� �Ҵ��ϱ� ���ؼ���
  �ݵ�� ���޸� �Ҵ��� �ؾ� �Ѵ�
*/
#include <stdio.h>
#include <stdlib.h>

char* getName()
{
	//char* name�� ������ ��������
	//malloc�� ���޸𸮿� sizeof(char)*20��ŭ �Ҵ��ض�
	//(char 20�� �迭�� ���� �Ҵ��ض�)

	char* name = (char*)malloc(sizeof(char) * 20);
	printf("�̸� �Է�: ");
	//fgets(name, sizeof(name) - 1, stdin);
	fgets(name, 20 - 1, stdin);
	printf("�̸� : %s\n", name);
	printf("name : %p\n", name);
	return name;
}
void main()
{
	char* names[3] = { NULL };
	for (int i = 0; i < 3; i++)
	{
		names[i] = getName();
		printf("pName : %p\n", names[i]);
		printf("�̸�: %s\n", names[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
		printf("%s\n", names[i]);

	// ���޸� ����
	for (int i = 0; i < 3; i++)
		free(names[i]);
}