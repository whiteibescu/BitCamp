#include <stdio.h>

void main()
{
	int arr[2][3] = { 0 };

	printf("��üũ��: %d\n", sizeof(arr));
	printf("1��ũ��: %d\n", sizeof(arr[0]));
	printf("2��ũ��: %d\n", sizeof(arr[1]));
	printf("1�����: %d\n", sizeof(arr[0][0]));
	printf("\n");

	printf("��ü�����ּ�: %d\n", arr);
	printf("1������ּ�: %d\n", arr[0]);
	printf("2������ּ�: %d\n", arr[1]);
	printf("1��ҽ����ּ�: %d\n", &arr[0][0]);
	printf("1�����: %d\n", arr[0][0]);
}