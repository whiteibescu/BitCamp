#include <stdio.h>

int main()
{
    int sum = 0; //�հ踦 ���� ���� ����
    int n = 1;   // 1���� �����ϴ� ����
    do
    {
        sum += n; //sum�� ���� sum�� n ���� ���� ����
        n++; //n ����

    } while (n <= 100); //���� ī���Ͱ� 100���� �۴ٸ�

    printf("1���� 100���� ���� %d�Դϴ�.\n", sum);

    return 0;
}