#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

// #define MAX 5
#define MAX_LENGTH 20


struct person {
    char name[30];
    int age;
    char sex[30];
};

int main(void) {
    int choose;
    struct person dart[MAX_LENGTH] = { 0, };
    // int i = 0;
    int count = 0;

    while (1)
    {
        printf("=========================\n");
        printf("�� �ּҷ� �߰�\n\n");
        printf("�� �ּҷ� ��ü����\n\n");
        printf("�� ����\n");
        printf("=========================\n\n");
        scanf("%d", &choose);
        system("cls");

        if (choose == 1) {
            printf("----�ּҷ� �߰���----\n");
            // count++;
            if (count <= MAX_LENGTH) {
                printf("�̸� : ");
                scanf("%s", &dart[count].name);
                printf("���� : ");
                scanf("%d", &dart[count].age);
                printf("���� : ");
                scanf("%s", &dart[count].sex);
                printf("\n");
                printf("����� �Ϸ�Ǿ����ϴ�!\n");
                printf("\n");
                // i++;
                count++;
                choose--;
            }
        }
        if (choose == 2) {
            for (int i = 0; i < count; ++i) {
                printf("%d. �̸� : %s  ���� : %d ���� : %s\n\n\n\n", i + 1, dart[i].name, dart[i].age, dart[i].sex);
            }
        }
        if (choose == 3) {
            break;
        }
    }
    return 0;
}
//��������