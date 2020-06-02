#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
실행 순서 ->
c = ++a;
c = a++;

b = 0;
a = 1;
b = 10 + a++;

*/
int main(void)
{
    for (int j = 1; j <= 9; j++)
    
    {

        for (int i = 2; i <= 4; i++)
        {
            printf("%d x %d = %d\t", i, j, (i * j));

        }
        printf("\n");
    }
    printf("\n");

    for (int j = 1; j <= 9; j++)

    {

        for (int i = 5; i <= 7; i++)
        {
            printf("%d x %d = %d\t", i, j, (i * j));

        }
        printf("\n");
    }

    printf("\n");

    for (int j = 1; j <= 9; j++)

    {

        for (int i = 8; i <= 9; i++)
        {
            printf("%d x %d = %d\t", i, j, (i * j));

        }
        printf("\n");
    }
        return 0;
}

