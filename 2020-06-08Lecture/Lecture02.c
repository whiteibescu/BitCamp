#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_def() {
	char str[80] = { 0 };
	char ch;
	int i = 0;
	while ((ch = getchar()) != '\n') {
		if (i == 0) {
			if ('a'<=ch&&ch<='z') {// �ҹ����̸�....
			
			}
		}
	}
	str[i] = 0;  // ���ڿ� �������� �ݵ�� �ι��ڷ� �������Ѵ�...;


	gets_s(str, sizeof(str)-2);

	while (1) {
		int v = scanf_s("%s", str, sizeof(str));

		if (v == 0) { break; }

		puts(str);
	}
}
// �̸� STRING 
//  �л� ����...
