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
        printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");
        printf("\t\t\t\t\t\t① 주소록 추가\n\n");
        printf("\t\t\t\t\t\t② 주소록 전체보기\n\n");
        printf("\t\t\t\t\t\t③ 주소록 검색\n\n");
        printf("\t\t\t\t\t\t④ 종료\n");
        printf("\t\t\t\t\t\n\n");
        printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n\n");
        scanf("%d", &choose);
        system("cls");

        if (choose == 1) {
            printf("----주소록 추가중----\n");
            // count++;
            if (count <= MAX_LENGTH) {
                printf("이름 : ");
                scanf("%s", &dart[count].name);
                printf("전화번호 : ");
                scanf("%d", &dart[count].number);
                printf("성별 : ");
                scanf("%s", &dart[count].sex);
                printf("\n");
                printf("등록이 완료되었습니다!\n");
                printf("\n");
                // i++;
                count++;
                
            }
        }

        if (choose == 2) {
            for (int i = 0; i < count; ++i) {
                printf("%d. 이름 : %s  전화번호 : %d 성별 : %s\n\n\n\n", i + 1, dart[i].name, dart[i].number, dart[i].sex);
            }
        }


        if (choose == 3) {

            char name[MAX_LENGTH];
            printf("검색할 이름을 입력해주세요 : ");
            scanf("%s", &name);

            while (1) {
                int id = strcmp(dart[i].name, name);
                for (i = 0; i < MAX_LENGTH; i++) 
                    if (strcmp(dart[i].name, name) == 0) {
                        printf("%d. 이름 : %s  전화번호 : %d 성별 : %s\n\n\n\n", i + 1, dart[i].name, dart[i].number, dart[i].sex);
                    }
                

                else if(id>0) /*(!strcmp(dart[i].name, name) == 0)*/ {
                    printf("더 이상 정보가 없습니다.\n");
                    break;
                }
                else if (id < 0) {
                printf("더 이상 정보가 없습니다.\n");
                
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

