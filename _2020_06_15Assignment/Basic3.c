#include <stdio.h> 
int main() 
{ 
	int i, sum=0; 
	while (1) {
		for (i = 1; i <= 10; i++)
			sum += i;
		printf("1���� 10������ ��: %d", sum);
		return 0;
	}
}

