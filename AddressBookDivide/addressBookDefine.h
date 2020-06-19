/*
��������� ���� ���� #include�Ǵٺ���
������ �߻��ϰ� �ȴ�.
�׷��� �Ʒ�ó�� ó���ϰ� �Ǹ�
�ߺ��� �����Ǿ� ������ �߻����� �ʴ´�.
#ifndef __ADDRESSBOOKDEFINE_H__
#define __ADDRESSBOOKDEFINE_H__
#endif
*/
// Visual C++���� �����ϴ� �ߺ����� �ɼ��̴�
#pragma once

#define ADDR_NUM	100

enum {
	INPUT_ADDR = 1,
	SEARCH_ADDR,
	UPDATE_ADDR,
	DELETE_ADDR,
	PRINTALL_ADDR,
	EXIT_ADDR
};

typedef struct _AddressBook
{
	char name[20];
	char address[30];
	int age;
	float height;
	float weight;
}AddressBook;
