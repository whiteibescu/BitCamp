/*���ڿ� ǥ��*/
#include <stdio.h>

void main()
{
	// '\0' == 0 == NULL
	// �ܾ��� ��
	// �迭 ���ڿ��� stack�޸𸮿�
	// �����ϱ� ���� ���� ����
	char sname[6] = { 'k','o','r','e','a','\0'};
	char nname[6] = "korea";
	char name[] = "Korea";
	// ��� ������ ���ڿ��� data������
	// ���ٲ۴�. �׳� ��븸 �Ѵ�
	char* cname = "Corea";

	printf("%s\n", sname);
	printf("%s\n", nname);
	printf("%s\n", name);
	printf("%s\n", cname);
}