/*
 �迭 : ������ ������ ������ ���� �� �ʿ�
     ex) 3�� �л��� ��������
 ����ü : �ϳ��� �繰/������ �ʿ��� ������ ���� ��
     ex) �л��� �Ż�����
        �̸�, ����, �ּ�, Ű, ������
       - �̸� �л� �ڷ����� ������ �� �����ϱ�
        �ʿ��� �� �л����������� ���
        �л� �ڷ����� ����� ����ض�.
       - �л� �ڷ������� ���� ������
        �л��� ���õ� ������ ������ �� �ִ�.
*/
/* ���α׷����� �׷�
1) ������ �׷����ϰ� ������ => �Լ�
2) �������� �׷����ϰ� ������ => ����ü
*/
#include <stdio.h>

struct Student
{
    // ����ü�� ���������
    char name[20];
    int age;
    char address[30];
    float height;
    float weight;
};

/* ����ü�� ���ҽ��� ũ�� ������
���� ���޽ÿ��� �����ϱ� ���ٴ�
�����ͷ� ����Ű�� �ϴ� ��찡  ����.

�Ʒ�ó�� �����͸� ����ϰ� �Ǹ�
62byte�� ����Ǵ� ���� �ƴ϶�
������ ũ���� 4byte �ּҸ� ����ȴ�.
*/
void showStudent(struct Student* pSt)
{
    printf("�̸� : %s\n", pSt->name);
    printf("���� : %d\n", pSt->age);
    printf("�ּ� : %s\n", pSt->address);
    printf("Ű : %.2f\n", pSt->height);
    printf("������ : %.2f\n", pSt->weight);
}

void main()
{
    struct Student st;

    strcpy_s(st.name, sizeof(st.name), "ȫ�浿");
    st.age = 24;
    strcpy_s(st.address, sizeof(st.address), "������");
    st.height = 175.6f;
    st.weight = 78.3f;

    showStudent(&st);
}