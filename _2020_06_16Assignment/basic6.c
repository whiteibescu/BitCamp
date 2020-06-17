#include <stdio.h>

int main(void)
{
	int num;
	int j;
	printf("출력 회수를 입력하세요 : ");
	scanf_s("%d", &num);
	

	for (int i = 0; i < num; i++) {
		
		if (j%3 == 0){
		printf("3의 배수 출력 : %d\n", i);
	}
	
	
}