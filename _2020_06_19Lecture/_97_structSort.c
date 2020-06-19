/* in order to enhance accessing speed of the CPU,
the size of int has to be 4bytes.

Structure may have different sizes because of the sequence of thee.

If you are saving the variable as a file, St1 and St2 will have different
file sizes.

There are two problems in case of the above.
1. Embedded programming(small electronic devicess) is closely related to the size and the cost.
*/


#include <stdio.h>

typedef struct st1{
	char ch;
	char ch2;
	short s;
	int i;
}St1;
typedef struct st2{
	char ch;
	short s;
	int i;
	char ch2;
}St2;

void main()
{	
	printf("size of St1: %d\n", sizeof(St1));
	printf("size of St2 : %d\n", sizeof(St2));
}