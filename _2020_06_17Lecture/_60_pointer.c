#include <stdio.h>

void main()
{
	int num = 99;
	int result = 0;
	/* int* �ڷ��� : int(����/�迭)�� �ּ�
	   ptr ������
	*/
	/* ptr : �ּҰ�
	   *ptr : �ּҰ� ����Ű�� ����(��)
	*/
	int* ptr = NULL;
	ptr = &num;
	result = *ptr; // num�� ��
	*ptr = 1000;   // num��������

	printf("result: %d\n", result);
	printf("num: %d\n", num);
}