#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h> // 기능키 처리 가능
#include <ctype.h>


int main(void)
{
	printf("%d \n", 0xE0);

	char ch = _getch();
	printf("%d \n", ch);
	ch = _getch();
	printf("%d \n", ch);

	return 0;
}

//- 32 
// 아래 80 위 72 왼쪽 75 오른쪽 77