#include <stdio.h> 
int main() 
{ 
	int i, sum=0; 
	while (1) {
		for (i = 1; i <= 10; i++)
			sum += i;
		printf("1부터 10까지의 합: %d", sum);
		return 0;
	}
}

