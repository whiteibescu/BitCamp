#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

//����ü �����ϱ�
#define MAX_LENGTH 20


struct person {
    char name[30];
    char num[30];
    char sex[30];
};

int main(void) {
    system("title ����3��");
    // system("color 7f");
    int choose;


    struct person dart[MAX_LENGTH] = { 0, };
    int i = 0;
    int count = 0;

    while (1)
    {
        printf("\n\n");
        printf("\t\t\t�� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� ��\t\n\n");
        printf("\t\t\t��                                                          ��\t\n\n");
        printf("\t\t\t��                    �� �ּҷ� �߰�                        ��\t\n\n");
        printf("\t\t\t��                                                          ��\t\n\n");
        printf("\t\t\t��                    �� �ּҷ� ��ü���� [%d/20]             ��\t\n\n", count);
        printf("\t\t\t��                                                          ��\t\n\n");
        printf("\t\t\t��                    �� �ּҷ� �˻�                        ��\t\n\n");
        printf("\t\t\t��                                                          ��\t\n\n");
        printf("\t\t\t��                    �� ����                               ��\t\n\n");
        printf("\t\t\t��                                                          ��\t\n\n");
        printf("\t\t\t�� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� ��\n\n");
        printf("                                                             MADE BY ����3�� (�ڼ���, ������, ������, �̼���)\n\n");
        scanf("%d", &choose);
        system("cls");

        if (choose == 1) {
            printf("\t\t\t\t�������������������������������������������������������������� \n");
            printf("\t\t\t                                             \n");
            printf("\t\t\t              �ּҷ� �߰� ���Դϴ�.        \n");
            printf("\t\t\t                                            \n");
            printf("\t\t\t\t�������������������������������������������������������������� \n");
            // count++;
            if (count <= MAX_LENGTH) {
                printf("\n\t\t\t\t\t��    �� : ");
                scanf("%s", &dart[count].name);
                printf("\n\t\t\t\t\t��ȭ��ȣ : ");
                scanf("%s", &dart[count].num);
                printf("\n\t\t\t\t\t��    �� : ");
                scanf("%s", &dart[count].sex);
                printf("\n");
                printf("\t\t\t\t\t����� �Ϸ�Ǿ����ϴ�!\n");
                printf("\n");
                // i++;
                count++;

            }
        }
        if (choose == 2) {
            for (int i = 0; i < count; ++i) {
                printf("\n\n\t\t\t% d.�̸� : % s  ��ȭ��ȣ : % s ���� : % s\n\n\n\n", i + 1, dart[i].name, dart[i].num, dart[i].sex);
            }
        }


        if (choose == 3) {



            char name[MAX_LENGTH];
            printf("\t\t\t\t\t�˻��� �̸��� �Է����ּ��� : ");
            scanf("%s", &name);


            int cntid = 0;
            for (i = 0; i < MAX_LENGTH; i++) {
                if (strcmp(dart[i].name, name) == 0) {
                    printf("\n%d. �̸� : %s  ��ȭ��ȣ : %s ���� : %s\n\n\n\n", i + 1, dart[i].name, dart[i].num, dart[i].sex);
                    cntid++;
                }
            }

            if (cntid == 0) {
                printf("������ �����ϴ�.\n\n\n\n");
            }


        }


        if (choose == 4) {
            printf("  #######  #   #   #   #  #         #########    #####   #  \n");
            printf("        #  #   #   # # #  #                 #    #       #  \n");
            printf("        #  #   #   #   #  ####              #    #####   #  \n");
            printf("        #  #####   # # #  #                 #    #       #  \n");
            printf("        #  #   #                     ########    #       #  \n");
            printf("        #  #   #    ######                  #    #####   #  \n");
            printf("        #  #   #         #                  #               \n");
            printf("        #  #   #    ######                  #      #######  \n");
            printf("           #   #    #                       #      #     #  \n");
            printf("           #   #    ######           ########      #######  \n");
            break;
        }


    }
    return 0;
}