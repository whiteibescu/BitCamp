/*������ ������ ����ϸ� �Լ��� ��踦 �Ѿ ���� ������
�����ϴ� ���� �����ϴ�. �׷��Ƿ� �Լ��� ������� ���� ���� �� 
���� ���� ���� ������ ������� ���޹޴� ���� �����ϴ�.
*/

#include <stdio.h>

void div(int num0, int num1, int* qPtr, int* rPtr)
{
	*qPtr = num0 / num1;	//quotient
	*rPtr = num0 % num1;	//remainder

}


void main()
{
	int quotient = 0, remainder = 0;
	div(10, 3, &quotient, &remainder);
	printf("10/3�� ���� %d�Դϴ�\n", quotient);
	printf("10/3�� �������� %d�Դϴ�\n", remainder);
}