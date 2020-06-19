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
	printf("�̸� : %s\n", pSt->name);
	printf("�ּ� : %s\n", pSt->address);
	printf("���� : %d\n", pSt->age);
	printf("Ű : %.1f\n", pSt->height);
	printf("������ : %.1f\n", pSt->weight);
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