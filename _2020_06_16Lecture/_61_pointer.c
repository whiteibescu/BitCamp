/*
���Ͻ� ��ġ�� ������ ������ �ڷ����� ������
���� ������
�ش� ������ �����ּһӸ� �ƴ϶� �ؼ���������
�ʿ��ϱ� �����̴�.
������ �������� ����Ű�� ����� �����ּҰ���
����ִ�
int* ptr�� �����ϸ� ptr���� �����ּҰ� ����ְ�
ptr�� ���� ���� ������ ���� int�� �ؼ��϶��
�ǹ̵� ����ִ�.
*/
#include <stdio.h>

void main()
{
	int num = 100;
	char ch = 'A';
	double pi = 3.14;

	int* iptr = &num;
	char* cptr = &ch;
	double* dptr = &pi;

	printf("%p\n", iptr);
	printf("%p\n", cptr);
	printf("%p\n", dptr);
	printf("\n");

	printf("%d\n", *iptr);
	printf("%c\n", *cptr);
	printf("%lf\n", *dptr);
}