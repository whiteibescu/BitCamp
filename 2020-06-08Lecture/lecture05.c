#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int nums[10];
	int len = 10;
	int* p = (int*)malloc(len * 4);// ���� �迭�� ���� ���� ����

	// ���̸� �߰�(�ø���)�� �Ұ�������
	// �����迭�� ���� ���̷ν� ������ ����
	len = +12;
	p = (int*)realloc(p, len * 4);// �� �Լ��� �����Ҵ����� ������ �͸� ��� ����
	
	
	free(p);

	
	return 0; 
}