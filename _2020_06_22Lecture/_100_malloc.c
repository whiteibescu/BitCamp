/* �޸� �����Ҵ�
�������� 3��° ���
- �������� �Ҵ�
- �ʿ��� �� �Ҵ�/���� ������� �� �� ����
- ū �޸𸮰� �ʿ��� ��
*/
/* ��������
- �޸𸮰� ������� �ʴ´�
- ������ ó���� �Ҵ�ũ�⸦ ������ ���ؾ� �Ѵ�
- �Լ�ȣ��ø��� ���ο� �޸𸮸� �߰��ϴ� ����
 �Ұ����ϴ�
*/
#include <stdio.h>

char name[20];

char* getName()
{	
	printf("�̸� �Է�: ");
	fgets(name, sizeof(name) - 1, stdin);
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
}