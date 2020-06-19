#include <stdio.h>

typedef struct _Student
{
	char name[20];
	char address[30];
	int age;
	float height;
	float weight;
}Student;

void showStudent(Student* pSt)
{
	printf("이름 : %s\n", pSt->name);
	printf("주소 : %s\n", pSt->address);
	printf("나이 : %d\n", pSt->age);
	printf("키 : %.1f\n", pSt->height);
	printf("몸무게 : %.1f\n", pSt->weight);
}

void main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "student.bin", "rb");

	Student st;

	fread(&st, sizeof(st), 1, fp);

	showStudent(&st);

	fclose(fp);
}