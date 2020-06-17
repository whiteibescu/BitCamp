/* int* ptr���� 
   ptr������ 2������ �ּҸ� ��� ���� �����ϴ�
   1) int ������ �ּ�
   2) int �迭�� �ּ�
*/
/* ������ ������ �迭�� �����ּҸ� ����Ű�� 
  �� �� �ִ�.
  ������ ������ ������ ���ϴ� ������
  �Ϲ����� ���� ��������� �ƴ϶�
  ��ġ�̵��� �ش��ϴ� ������ �ȴ�.
  int* ptr = arr;
  ptr+1	 => int ũ�⸸ŭ ������ġ�� �̵�
  ptr+2  => int*2 ũ�⸸ŭ ������ġ�� �̵�
  ptr-1  => int ũ�⸸ŭ ������ġ�� �̵�
*/
#include <stdio.h>

void main()
{
	int num = 10;
	int arr[3] = { 10, 20, 30 };
	int* ptr = NULL;

	ptr = &num;
	printf("%d\n", *ptr);
	printf("�迭�� �̸�: %p\n", arr);
	ptr = arr;
	printf("ptr�� ��: %p\n", ptr);
	printf("%d\n", *ptr);
	printf("%d\n", *(ptr + 0));
	printf("%d\n", *(ptr + 1));
	printf("%d\n", *(ptr + 2));
	printf("%d\n", ptr[0]);
	printf("%d\n", ptr[1]);
	printf("%d\n", ptr[2]);
}