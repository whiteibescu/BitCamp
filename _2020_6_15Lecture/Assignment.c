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

void chopJudge(int a, int b) {
    int cnt = 0;
    for (cnt = 0; cnt < a; ++cnt) {
        if (cnt != 0 && cnt % b == 0) {
            printf("��!\n");
        }
        printf("������ %d�� ������ϴ�.\n", cnt + 1);
    }
    printf("������ ĳ�����ϴ�!!\n");
}
    

int main()
{
    int number;
    void chopTree(int number);

    printf("���� ȸ���� �Է����ּ��� : ");
    scanf_s("%d", &number);

    //chopTree(number);
    chopJudge(number, 3);

    return 0;
}

void chopTree(int counting) {

    int cnt = 0;
    for (cnt = 0; cnt < counting; ++cnt) {
        printf("������ %d�� ������ϴ�.\n", cnt+1);
    }
    printf("������ ĳ�����ϴ�!!\n");

}

