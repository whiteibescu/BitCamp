#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1. ���ڸ� �Է� �ް� ���ڸ�ŭ "������ ��������"
//�� ������ "������ ĳ����" ���
//
//2.1���� �Լ��� ����� �Լ��� ���ڸ� �����ϸ� "������ ��´�"�� �ݺ��ϼ���.
//
//3. �Լ��� ���� 1��° ���ڴ� �ݺ�ȸ��, 2��° ���ڴ� �ش��° ���� "��"�� ���
//chopTree(10, 3)
//
//"������ �����"
//"������ �����"
//"������ �����"
//"��"
//4. chopTree(10, 3, 2);
//3���� 1�� "��"
//2���� 1�� "½" ���

void chopJudge(int decide, int koong, int jjuk) {
    int cnt = 0;
    for (cnt = 1; cnt <= decide; ++cnt) {
        printf("������ %d�� ������ϴ�.\n", cnt);
        if (cnt % jjuk == 0) {
            printf("½!\n");
        }
        if (cnt % koong == 0) {
            printf("��!\n");
        }
        
    }
    printf("������ ĳ�����ϴ�!!\n");
}
    

int main()
{
    int number;
    int koong;
    int jjuk;
    void chopTree(int number);

    printf("���� ȸ���� �Է����ּ��� : ");
    scanf_s("%d", &number);
    printf("���°�� �� : ");
    scanf_s("%d", &koong);
    printf("���°�� ½ : ");
    scanf_s("%d", &jjuk);

    //chopTree(number);
    chopJudge(number, koong, jjuk);

    return 0;
}

void chopTree(int counting) {

    int cnt = 0;
    for (cnt = 0; cnt < counting; ++cnt) {
        printf("������ %d�� ������ϴ�.\n", cnt+1);
    }
    printf("������ ĳ�����ϴ�!!\n");

}

