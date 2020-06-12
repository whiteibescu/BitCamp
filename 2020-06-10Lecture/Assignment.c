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
    char number[30];
    char sex[30];
};

int main(void) {
    int choose;
    struct person dart[MAX_LENGTH] = { 0 };    //{ 0,} 차이점이 존재?
    int count = 0;
    int id = 0;

    while (1)
    {
        printf("=========================\n");
        printf("1. 주소록 추가\n\n");
        printf("2. 주소록 전체보기[%d/20]\n\n", count);
        printf("3. 주소록 수정\n\n");
        printf("4. 주소록 삭제\n\n");
        printf("5. 주소록 검색\n\n");
        printf("0. 종료\n");
        printf("=========================\n\n");
        scanf("%d", &choose);
        system("cls");

        if (choose == 1) {
            printf("----주소록 추가중----\n");
            if (count < MAX_LENGTH) {
                dart[count].id = ++id;
                printf("이름 : ");
                scanf("%s", &dart[count].name);
                printf("전화번호 : ");
                scanf("%s", &dart[count].number);
                printf("성별 : ");
                scanf("%s", &dart[count].sex);
                printf("\n");
                printf("등록이 완료되었습니다!\n");
                printf("\n");
                count++;                
            }
        }
        if (choose == 2) {
            for (int i = 0; i < MAX_LENGTH; ++i) {
                if (dart[i].id != 0) {
                    printf("%2d. ID: %2d\t 이름 : %s\t전화번호 : %s\t성별 : %s\n", i + 1, dart[i].id, dart[i].name, dart[i].number, dart[i].sex);
                }   
            }
        }
        if (choose == 3) {
            int target;

            printf("----주소록 수정중----\n\n");
            printf("----기존 주소록----\n\n");
            for (int i = 0; i < MAX_LENGTH; ++i) { //20개 아이디를 불러오기
                if (dart[i].id != 0) { // 초기화값이 0이 아닌것들을 찾기 = 
                    printf("%2d. ID: %2d\t 이름 : %s\t전화번호 : %s\t성별 : %s\n", i + 1, dart[i].id, dart[i].name, dart[i].number, dart[i].sex);
                }
            }

            printf("수정할 고객의 ID를 입력하세요(돌아가려면 0을 입력)->");
            scanf_s("%d", &target);
            if (target == 0) {
                continue;
            }
            for (int i = 0; i < MAX_LENGTH; i++) {
                if (dart[i].id == target) {
                    printf("[ID: %d] 고객의 정보를 수정합니다.\n", dart[i].id);
                    printf("이름(%s) : ", dart[i].name);
                    scanf("%s", &dart[i].name);
                    printf("전화번호(%s) : ", dart[i].number);
                    scanf("%s", &dart[i].number);
                    printf("성별(%s) : ", dart[i].sex);
                    scanf("%s", &dart[i].sex);
                    printf("\n");
                    printf("수정이 완료되었습니다!\n");
                    printf("\n");
                    break;
                }
            }
        }
        if (choose == 4) {
            int target;

            printf("----주소록 삭제중----\n\n");
            printf("----기존 주소록----\n\n");
            for (int i = 0; i < MAX_LENGTH; ++i) {
                if (dart[i].id != 0) {
                    printf("%2d. ID: %2d\t 이름 : %s\t전화번호 : %s\t성별 : %s\n", i + 1, dart[i].id, dart[i].name, dart[i].number, dart[i].sex);
                }
            }

            printf("삭제할 고객의 ID를 입력하세요(돌아가려면 0을 입력)-> ");
            scanf_s("%d", &target);
            if (target == 0) {
                continue;
            }

            for (int i = 0; i < MAX_LENGTH; i++) {
                if (dart[i].id == target) { // index i
                    printf("%s님의 정보를 삭제했습니다.\n\n\n", dart[i].name);
                    for (int j = i; j < MAX_LENGTH - 1; j++) {
                        memmove(dart + j, dart + j + 1, 94);
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

        if (choose == 5) {
            char target[20];
            printf("찾으실 이름을 입력해주세요 : ");
            scanf("%d", &target);
            for (int i = 0; i < MAX_LENGTH; ++i) {
                if (dart[i].id != 0) {
                    if (strcmp(target, dart[i].name) == 0) {
                        printf("%2d. ID: %2d\t 이름 : %s\t전화번호 : %s\t성별 : %s\n", i + 1, dart[i].id, dart[i].name, dart[i].number, dart[i].sex);
                    }
                }
            }
        }
    }
    return 0;
}