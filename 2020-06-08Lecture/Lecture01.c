#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// ���ڿ� - ���� �迭 - char []
// �迭�� - �ּ�((&[0])
// ���ڿ��� ó���� ù ���ڷκ��� '/0' ���� - ���� ����

int string_def() {


	char str[80] = { "korea 2020 fi" };

	// ���ڿ� ��� "%s", char *, for
	printf("%s \n", str); // �迭�� [0]���������� �ι��� ������

	int v = puts(str);// &[0]
	printf(" v : %d \n", v);

	for (int i = 0; str[i] != '\0'; ++i) {
		// ȭ�鿡 1 ���� ���
		putchar(str[i]);
	}
	putchar('\n');

	// fputs();
}


//start program 
int main(int argc, char** argv) {

	string_def(); //���ڿ��� ���� �ִ�....
	

	return 0;

}