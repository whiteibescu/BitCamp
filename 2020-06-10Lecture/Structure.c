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
    int number;
    char sex[30];
};

int main(void) {

    int choose;
    struct person dart[MAX_LENGTH] = { 0, };
    int i = 0;
    int count = 0;

    while (1)
    {
        printf("\n\n\n\n\n");
        printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
        printf("\t\t\t\t\t\t�� �ּҷ� �߰�\n\n");
        printf("\t\t\t\t\t\t�� �ּҷ� ��ü����\n\n");
        printf("\t\t\t\t\t\t�� �ּҷ� �˻�\n\n");
        printf("\t\t\t\t\t\t�� ����\n");
        printf("\t\t\t\t\t\n\n");
        printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n\n");
        scanf("%d", &choose);
        system("cls");

        if (choose == 1) {
            printf("----�ּҷ� �߰���----\n");
            // count++;
            if (count <= MAX_LENGTH) {
                printf("�̸� : ");
                scanf("%s", &dart[count].name);
                printf("��ȭ��ȣ : ");
                scanf("%d", &dart[count].number);
                printf("���� : ");
                scanf("%s", &dart[count].sex);
                printf("\n");
                printf("����� �Ϸ�Ǿ����ϴ�!\n");
                printf("\n");
                // i++;
                count++;
                
            }
        }

        if (choose == 2) {
            for (int i = 0; i < count; ++i) {
                printf("%d. �̸� : %s  ��ȭ��ȣ : %d ���� : %s\n\n\n\n", i + 1, dart[i].name, dart[i].number, dart[i].sex);
            }
        }


        if (choose == 3) {

            char name[MAX_LENGTH];
            printf("�˻��� �̸��� �Է����ּ��� : ");
            scanf("%s", &name);

            while (1) {
                int id = strcmp(dart[i].name, name);
                for (i = 0; i < MAX_LENGTH; i++) 
                    if (strcmp(dart[i].name, name) == 0) {
                        printf("%d. �̸� : %s  ��ȭ��ȣ : %d ���� : %s\n\n\n\n", i + 1, dart[i].name, dart[i].number, dart[i].sex);
                    }
                

                else if(id>0) /*(!strcmp(dart[i].name, name) == 0)*/ {
                    printf("�� �̻� ������ �����ϴ�.\n");
                    break;
                }
                else if (id < 0) {
                printf("�� �̻� ������ �����ϴ�.\n");
                
                }
                break;
            }
        }

        if (choose == 4) {
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

