#include <stdio.h>
//
//int main()
//{		
//	for (int i = 1; i <= 10; i++) 
//		{
//			if (i % 2 == 0) {
//				printf("%d \n", i);
//			}
//
//	} //ÂüÀÏ¶§
//
//	return 0;
//}

int main()
{
	int i = 1;
	do
	{
		++i;
		if (i % 2 == 0) 
		{
		printf("%d \n", i);
		}
	} while (i <= 10);
}