#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main (void)
{
    arithmetics_p();
}

// 1. 입력받은 10개 정수에 대한 최대, 최소, 합, 평균
int arithmetics_p() {
    int* inputs = (int*)malloc(sizeof(int) * 10);
    int max, min, sum;
    max = 0;
    min = 2147483647;
    sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("%d번째 수 입력->", i + 1);
        scanf_s("%d", inputs + i);
        sum += *(inputs + i);
        if (*inputs + i > max) {
            max = *(inputs + i);
        }
        if (*inputs + i < min) {
            min = *(inputs + i);
        }
    }
    double avg = (double)sum / 10;

    printf("최대: %d\n", max);
    printf("최소: %d\n", min);
    printf("총합: %d\n", sum);
    printf("평균: %.2f\n", avg);

    return 0;
}
