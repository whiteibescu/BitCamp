/*��� �������� �Լ��� ���� ����� ���޹ް� �ʹ�.
  �׷���, C�Լ��� �ݵ�� 1���� ����� ������ �� �ִ�
  �׷��� �츮�� ����ü�� ����ؼ� ��� ��������
  ��� �����ϰڴ�
*/

#include <stdio.h>

typedef struct _DivValue {
	int quotient;		// ��
	int remainder;		// ������
}DivValue;

DivValue div(int num0, int num1)
{
	DivValue dv;
	dv.quotient = num0 / num1;
	dv.remainder = num0 % num1;
	return dv;
}

void main()
{
	DivValue dv = div(10, 3);
	printf("10/3�� ���� %d�Դϴ�\n", dv.quotient);
	printf("10/3�� �������� %d�Դϴ�\n", dv.remainder);
}