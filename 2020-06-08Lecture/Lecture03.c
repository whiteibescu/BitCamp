#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct _std {
	char name[60];
	int kor;
	int eng;
	int math;
};



int main(void) {
	// �迭 �ɰ���
	char student[80] = { 0 };
	char* name = student;
	int* kor = student + 60;
	int* eng = student + 64;
	int* math = student + 68;
	int* score = (int*)(student + 60); //&student[60]
	// ������ ������ ���� �� ������ �ڷ����� ���� �����Ѵ�...

	scanf_s("%s", name, 60);
	scanf_s("%d %d %d", score + 0, score + 1, score + 2);
	printf("%s : { %d %d %d} \n", name, *kor, *eng, *math);

	return 0;
}

//  end program