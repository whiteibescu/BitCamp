#include <stdio.h>


//1.포문을 두개 쓰기
//2.직사각형 출력하기
//3.printf("\n"); 이해하기
//4.n 수 입력받기



// 사각형 만들기


//void main() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}



//void main() {
//    for (int i = 0; i < 5; i++) {					
//        for (int j = 0; j <= i; j++) {			 
//            printf("*");
//        }
//        printf("\n");
//    }
//}




void main() {

    int n;
    printf("별 출력 회수를 입력해주세요 : ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}