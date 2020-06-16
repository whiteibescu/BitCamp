#include <stdio.h>

int main()
{
    int sum = 0; //합계를 위한 변수 선언
    int n = 1;   // 1부터 시작하는 변수
    do
    {
        sum += n; //sum에 현재 sum과 n 더한 값을 대입
        n++; //n 증가

    } while (n <= 100); //루프 카운터가 100보다 작다면

    printf("1부터 100까지 합은 %d입니다.\n", sum);

    return 0;
}