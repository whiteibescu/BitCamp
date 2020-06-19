#include <stdio.h>

#define ST_NUM	3

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
	printf("----------------------\n\n");
}

void main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "student.bin", "rb");

	Student st[ST_NUM];

	fread(&st, sizeof(st), ST_NUM, fp);

	for (int i = 0; i < ST_NUM; i++) 
	{
		showStudent(&st[i]);
	}	

	fclose(fp);
}