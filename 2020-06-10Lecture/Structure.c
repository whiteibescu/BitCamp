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
        printf("① 주소록 추가\n\n");
        printf("② 주소록 전체보기\n\n");
        printf("③ 종료\n");
        printf("=========================\n\n");
        scanf("%d", &choose);
        system("cls");

        if (choose == 1) {
            printf("----주소록 추가중----\n");
            // count++;
            if (count <= MAX_LENGTH) {
                printf("이름 : ");
                scanf("%s", &dart[count].name);
                printf("나이 : ");
                scanf("%d", &dart[count].age);
                printf("성별 : ");
                scanf("%s", &dart[count].sex);
                printf("\n");
                printf("등록이 완료되었습니다!\n");
                printf("\n");
                // i++;
                count++;
                choose--;
            }
        }
        if (choose == 2) {
            for (int i = 0; i < count; ++i) {
                printf("%d. 이름 : %s  나이 : %d 성별 : %s\n\n\n\n", i + 1, dart[i].name, dart[i].age, dart[i].sex);
            }
        }
        if (choose == 3) {
            break;
        }
    }
    return 0;
}
//최종수정