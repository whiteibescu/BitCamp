#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1. ���ڸ� �Է� �ް� ���ڸ�ŭ "������ ��������"
//�� ������ "������ ĳ����" ���
//
//2.1���� �Լ��� ����� �Լ��� ���ڸ� �����ϸ� "������ ��´�"�� �ݺ��ϼ���.
//
//3. �Լ��� ���� 1��° ���ڴ� �ݺ�ȸ��, 2��° ���ڴ� �ش��° ���� "��"�� ���
//chopTree(10, 3)
//
//"������ �����"
//"������ �����"
//"������ �����"
//"��"
//4. chopTree(10, 3, 2);
//3���� 1�� "��"
//2���� 1�� "½" ���





int chopTree() {
	int number;
	printf("���� ȸ���� �Է����ּ��� : ");
	scanf("%d", &number);

	int cnt = 0;
	for (cnt = number; cnt <= number; ++cnt) {
		printf("������ %d�� ������ϴ�. ��~\n", cnt);
	}
	printf("������ ĳ�����ϴ�!!\n");
}




void main()
{
	chopTree();


	return 0;


	 
}


