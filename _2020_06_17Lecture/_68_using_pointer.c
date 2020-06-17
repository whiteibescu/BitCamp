#include <stdio.h>

int sum(int* ptr, int len)
{
	int result = 0;

	for (int i = 0; i < len; i++)
		result += *(ptr + i);// ptr[i];

	return result;
}

void main()
{
	int arr[] = { 10, 20, 30, 40, 50 };
	int arr1[] = { 10, 20, 30, 40, 50, 60, 70 };
	int result = 0;
	result = sum(arr, sizeof(arr) / sizeof(arr[0]));
	printf("arr의 합: %d\n", result);
	result = sum(arr1, sizeof(arr1) / sizeof(arr1[0]));
	printf("arr1의 합: %d\n", result);
}