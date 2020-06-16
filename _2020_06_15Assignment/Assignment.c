#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1. 숫자를 입력 받고 숫자만큼 "나무를 찍으세요"
//다 찍으면 "나무를 캐었다" 출력
//
//2.1번을 함수로 만들고 함수에 숫자를 전달하면 "나무를 찍는다"를 반복하세요.
//
//3. 함수를 만들어서 1번째 인자는 반복회수, 2번째 인자는 해당번째 마다 "쿵"을 출력
//chopTree(10, 3)
//
//"나무를 찍었다"
//"나무를 찍었다"
//"나무를 찍었다"
//"쿵"
//4. chopTree(10, 3, 2);
//3번에 1번 "쿵"
//2번에 1번 "쩍" 출력

void chopJudge(int decide, int koong, int jjuk) {
    int cnt = 0;
    for (cnt = 1; cnt <= decide; ++cnt) {
        printf("나무를 %d번 찍었습니다.\n", cnt);
        if (cnt % jjuk == 0) {
            printf("쩍!\n");
        }
        if (cnt % koong == 0) {
            printf("쿵!\n");
        }
        
    }
    printf("나무를 캐었습니다!!\n");
}
    

int main()
{
    int number;
    int koong;
    int jjuk;
    void chopTree(int number);

    printf("찍을 회수를 입력해주세요 : ");
    scanf_s("%d", &number);
    printf("몇번째에 쿵 : ");
    scanf_s("%d", &koong);
    printf("몇번째에 쩍 : ");
    scanf_s("%d", &jjuk);

    //chopTree(number);
    chopJudge(number, koong, jjuk);

    return 0;
}

void chopTree(int counting) {

    int cnt = 0;
    for (cnt = 0; cnt < counting; ++cnt) {
        printf("나무를 %d번 찍었습니다.\n", cnt+1);
    }
    printf("나무를 캐었습니다!!\n");

}

