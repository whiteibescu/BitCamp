/* result�� ��� �̸��� ���� ���������� �Ҽ��� �ٸ��� ������ ���� �ٸ� ��������
�������� ������ ���� �ʴ´�.

C���� �ٸ��Լ����� ��ȣ�ۿ��� �Ű������� ���ϰ����� �Ѵ�
(�̰��� �������� ��ȣ�ۿ��̴�)
*/

#include <stdio.h>

int add(int num0, int num1)
{
	int result = 0;
	result = num0 + num1;
	return result;
}

void main()
{
	int result = 0;
	result = add(100, 200);
	printf("%d\n", result);
}