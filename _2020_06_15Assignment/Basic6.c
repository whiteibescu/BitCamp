#include <stdio.h>

void main()
{
    int a, b, c;
    printf("�� ���� ������ ���ڸ� �Է�>>");
    scanf_s("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("���� ū ���� : %d", a);
    else if (b > a && b > c)
        printf("���� ū ���� : %d", b);
    else
        printf("���� ū ���� : %d", c);
}