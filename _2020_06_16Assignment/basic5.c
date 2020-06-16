//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("양의 정수를 입력해주세요 : ");
//	scanf_s("%d", &num);
//
//	for (int i = 0; i < num; ++i) 
//	{
//		printf("감사합니다!\n");
//	}
//	
//}

#include <stdio.h>

int main()
{
	int num; 
	int i = 0;
	printf("양의 정수를 입력해주세요 : ");
	scanf_s("%d", &num);
	do
	{
		printf("감사합니다!\n");
		++i;
	} while (i < num);
}