#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main (void)
{
    arithmetics_p();
}

// 1. �Է¹��� 10�� ������ ���� �ִ�, �ּ�, ��, ���
int arithmetics_p() {
    int* inputs = (int*)malloc(sizeof(int) * 10);
    int max, min, sum;
    max = 0;
    min = 2147483647;
    sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("%d��° �� �Է�->", i + 1);
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

    printf("�ִ�: %d\n", max);
    printf("�ּ�: %d\n", min);
    printf("����: %d\n", sum);
    printf("���: %.2f\n", avg);

    return 0;
}
