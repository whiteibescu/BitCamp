#include <stdio.h>

int main()
{
	
	do
	{
		for (int i = 1; i <= 10; i++) 
		{
			if (i % 2 == 0) {
				printf("%d \n", i);
			}
		}
		break;
	} while (1); //ÂüÀÏ¶§

	return 0;
}