#include <stdio.h>

void main()
{
    int a, b, c;
    printf("세 개의 정수형 숫자를 입력>>");
    scanf_s("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("가장 큰 수는 : %d", a);
    else if (b > a && b > c)
        printf("가장 큰 수는 : %d", b);
    else
        printf("가장 큰 수는 : %d", c);
}