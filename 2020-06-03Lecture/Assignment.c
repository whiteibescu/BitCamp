#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main(void)
{
	int number;
	printf("0 ~ 9 사이 정수를 써주세요 : ");
	scanf("%d", &number);
	printf("입려된 값 : %d\n", number);
	
	

	for (int i = 0; i < 5; ++i)
	{		
		
		for (int j = 0; j < 3; ++j)
		{
			printf("[ ]");

		}
		
		
		if ( number == 0)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if ( number == 1 )
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if (number == 2)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if (number == 3)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if (number == 4)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if (number == 5)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if (number == 6)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if (number == 7)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if (number == 8)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
		else if (number == 9)
		{
			printf("[ o ][ o ][ o ]\n[ o ][  ] [ o ]\n[ o ][ o ][ o ]");
		}
	}
}

