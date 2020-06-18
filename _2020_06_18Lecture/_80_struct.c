#include <stdio.h>

// ����ü => ����� ���� �ڷ���
struct Student
{
    // ����ü�� ���������
    char name[20];
    int age;
    char address[30];
    float height;
    float weight;
};
// struct Student �ڷ����� ������
// Stud�� ���ڴ�.
typedef struct Student Stud;

void showStudent(Stud* pSt)
{
    printf("�̸� : %s\n", pSt->name);
    printf("���� : %d\n", pSt->age);
    printf("�ּ� : %s\n", pSt->address);
    printf("Ű : %.2f\n", pSt->height);
    printf("������ : %.2f\n", pSt->weight);
}

void main()
{
    Stud st;

    strcpy_s(st.name, sizeof(st.name), "ȫ�浿");
    st.age = 24;
    strcpy_s(st.address, sizeof(st.address), "������");
    st.height = 175.6f;
    st.weight = 78.3f;

    showStudent(&st);
}