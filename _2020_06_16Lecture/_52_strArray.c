#include <stdio.h>
#include <string.h>

void main()
{
	char name[20] = { 0 };

	printf("�̸� �Է�: ");
	fgets(name, sizeof(name) - 1, stdin);
	name[strlen(name) - 1] = 0;
	printf("�Է��� �̸��� %s �Դϴ�\n", name);
}