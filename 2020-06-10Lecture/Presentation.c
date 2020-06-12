#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

//구조체 정의하기
#define MAX_LENGTH 20


struct person {
    char name[30];
    char num[30];
    char sex[30];
};

int main(void) {
    system("title 개발3팀");
    // system("color 7f");
    int choose;


    struct person dart[MAX_LENGTH] = { 0, };
    int i = 0;
    int count = 0;

    while (1)
    {
        printf("\n\n");
        printf("\t\t\t△ ▷ ▶ ▷ ▶ ▷ ▶ ▷ ▶ ▷ ▶ ▷ ▶ ▷ ▶ ▷ ▶ ▷ ▶ ▷ ▽\t\n\n");
        printf("\t\t\t△                                                          ▽\t\n\n");
        printf("\t\t\t△                    ① 주소록 추가                        ▽\t\n\n");
        printf("\t\t\t△                                                          ▽\t\n\n");
        printf("\t\t\t△                    ② 주소록 전체보기 [%d/20]             ▽\t\n\n", count);
        printf("\t\t\t△                                                          ▽\t\n\n");
        printf("\t\t\t△                    ③ 주소록 검색                        ▽\t\n\n");
        printf("\t\t\t△                                                          ▽\t\n\n");
        printf("\t\t\t△                    ④ 종료                               ▽\t\n\n");
        printf("\t\t\t△                                                          ▽\t\n\n");
        printf("\t\t\t△ ◁ ◀ ◁ ◀ ◁ ◀ ◁ ◀ ◁ ◀ ◁ ◀ ◁ ◀ ◁ ◀ ◁ ◀ ◁ ▽\n\n");
        printf("                                                             MADE BY 개발3팀 (박성수, 안정현, 박지유, 이선미)\n\n");
        scanf("%d", &choose);
        system("cls");

        if (choose == 1) {
            printf("\t\t\t\t┌─────────────────────────────┐ \n");
            printf("\t\t\t                                             \n");
            printf("\t\t\t              주소록 추가 중입니다.        \n");
            printf("\t\t\t                                            \n");
            printf("\t\t\t\t└─────────────────────────────┘ \n");
            // count++;
            if (count <= MAX_LENGTH) {
                printf("\n\t\t\t\t\t이    름 : ");
                scanf("%s", &dart[count].name);
                printf("\n\t\t\t\t\t전화번호 : ");
                scanf("%s", &dart[count].num);
                printf("\n\t\t\t\t\t성    별 : ");
                scanf("%s", &dart[count].sex);
                printf("\n");
                printf("\t\t\t\t\t등록이 완료되었습니다!\n");
                printf("\n");
                // i++;
                count++;

            }
        }
        if (choose == 2) {
            for (int i = 0; i < count; ++i) {
                printf("\n\n\t\t\t% d.이름 : % s  전화번호 : % s 성별 : % s\n\n\n\n", i + 1, dart[i].name, dart[i].num, dart[i].sex);
            }
        }


        if (choose == 3) {



            char name[MAX_LENGTH];
            printf("\t\t\t\t\t검색할 이름을 입력해주세요 : ");
            scanf("%s", &name);


            int cntid = 0;
            for (i = 0; i < MAX_LENGTH; i++) {
                if (strcmp(dart[i].name, name) == 0) {
                    printf("\n%d. 이름 : %s  전화번호 : %s 성별 : %s\n\n\n\n", i + 1, dart[i].name, dart[i].num, dart[i].sex);
                    cntid++;
                }
            }

            if (cntid == 0) {
                printf("정보가 없습니다.\n\n\n\n");
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