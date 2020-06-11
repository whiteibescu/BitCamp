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
    int id;
    char name[30];
    int age;
    char sex[30];
};

int main(void) {
    int choose;
    struct person dart[MAX_LENGTH] = { 0 };    //{ 0,} �������� ����?
    int count = 0;
    int id = 0;

    while (1)
    {
        printf("=========================\n");
        printf("1. �ּҷ� �߰�\n\n");
        printf("2. �ּҷ� ��ü����[%d/20]\n\n", count);
        printf("3. �ּҷ� ����\n\n");
        printf("4. �ּҷ� ����\n\n");
        printf("0. ����\n");
        printf("=========================\n\n");
        scanf("%d", &choose);
        system("cls");

        if (choose == 1) {
            printf("----�ּҷ� �߰���----\n");
            if (count < MAX_LENGTH) {
                dart[count].id = ++id;
                printf("�̸� : ");
                scanf("%s", &dart[count].name);
                printf("���� : ");
                scanf("%d", &dart[count].age);
                printf("���� : ");
                scanf("%s", &dart[count].sex);
                printf("\n");
                printf("����� �Ϸ�Ǿ����ϴ�!\n");
                printf("\n");
                count++;                
            }
        }
        if (choose == 2) {
            for (int i = 0; i < MAX_LENGTH; ++i) {
                if (dart[i].id != 0) {
                    printf("%2d. ID: %2d\t �̸� : %s\t���� : %d\t���� : %s\n", i + 1, dart[i].id, dart[i].name, dart[i].age, dart[i].sex);
                }   
            }
        }
        if (choose == 3) {
            int target;

            printf("----�ּҷ� ������----\n\n");
            printf("----���� �ּҷ�----\n\n");
            for (int i = 0; i < MAX_LENGTH; ++i) {
                if (dart[i].id != 0) {
                    printf("%2d. ID: %2d\t �̸� : %s\t���� : %d\t���� : %s\n", i + 1, dart[i].id, dart[i].name, dart[i].age, dart[i].sex);
                }
            }

            printf("������ ������ ID�� �Է��ϼ���(���ư����� 0�� �Է�)->");
            scanf_s("%d", &target);
            if (target == 0) {
                continue;
            }
            for (int i = 0; i < MAX_LENGTH; i++) {
                if (dart[i].id == target) {
                    printf("[ID: %d] ������ ������ �����մϴ�.\n", dart[i].id);
                    printf("�̸�(%s) : ", dart[i].name);
                    scanf("%s", &dart[i].name);
                    printf("����(%d) : ", dart[i].age);
                    scanf("%d", &dart[i].age);
                    printf("����(%s) : ", dart[i].sex);
                    scanf("%s", &dart[i].sex);
                    printf("\n");
                    printf("������ �Ϸ�Ǿ����ϴ�!\n");
                    printf("\n");
                    break;
                }
            }
        }
        if (choose == 4) {
            int target;

            printf("----�ּҷ� ������----\n\n");
            printf("----���� �ּҷ�----\n\n");
            for (int i = 0; i < MAX_LENGTH; ++i) {
                if (dart[i].id != 0) {
                    printf("%2d. ID: %2d\t �̸� : %s\t���� : %d\t���� : %s\n", i + 1, dart[i].id, dart[i].name, dart[i].age, dart[i].sex);
                }
            }

            printf("������ ������ ID�� �Է��ϼ���(���ư����� 0�� �Է�)-> ");
            scanf_s("%d", &target);
            if (target == 0) {
                continue;
            }

            for (int i = 0; i < MAX_LENGTH; i++) {
                if (dart[i].id == target) { // index i
                    printf("%s���� ������ �����߽��ϴ�.\n\n\n", dart[i].name);
                    for (int j = i; j < MAX_LENGTH - 1; j++) {
                        memmove(dart + j, dart + j + 1, 68);
                    }                    
                    count--;
                }
            }            
        }
        if (choose == 0) {
            printf("  #######  #   #   #   #  #         #########    #####   #  \n");
            printf("        #  #   #   # # #  #                 #    #       #  \n");
            printf("        #  #   #   #   #  ####              #    #####   #  \n");
            printf("        #  #####   # # #  #                 #    #       #  \n");
            printf("        #  #   #                     ########    #       #  \n");
            printf("        #  #   #    ######                  #    #####   #  \n");
            printf("        #  #   #         #                  #       #####   \n");
            printf("        #  #   #    ######                  #       #   #   \n");
            printf("           #   #    #                       #       #   #   \n");
            printf("           #   #    ######           ########       #####   \n");
            break;
        }
    }
    return 0;
}