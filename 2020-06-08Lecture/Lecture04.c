#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	// �����Ҵ� : �����ͺ���, �Լ� - �ᱹ �迭
	int length = 60;
	char* p = (char*)malloc(length * sizeof(char)/*��üũ��*/); // �� �뵵�� �迭�� ��������ؼ�
	// p[0]~ p[59]
	char arr[60];

	
	for (int i = 0; i < length; ++i) {
		p[i] = 'a' + 1; // �迭�̴�....


	}
	// �����Ҵ����� ������ ����, �迭�� �ݵ�� �����Ѵ�...

	if (p != NULL) {
		free(p);				//�̷��� �Ҵ���� �ּҸ� �ٽ� ����Ѵ�....
								//p�� �����ϸ� �ȵȴ�....
		p = NULL;
	}
	return 0;
}