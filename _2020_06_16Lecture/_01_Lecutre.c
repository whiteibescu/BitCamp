/* //�Լ��� ���
����Ÿ��  �Լ���(�Ű�����)
{	// ������ ����

	return ����Ÿ�Ժ���;
}	// ������ ��

<�Լ��� ������ �� ������� �ϴ� ��>
1. �Լ���     - ������ ����
2. ���μ���	  - ������ ����
3. �Ű�����   - o x
4. ���ϰ�     - o x
*/
#include <stdio.h>

// �Ű����� x, ���ϰ� o
int getNum()
{
	int num = 0;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	return num;
}
//  �Ű����� o, ���ϰ� o
int add(int num0, int num1)
{
	return num0 + num1;
}
// �Ű����� o, ���ϰ� x
void viewResult(int result)
{
	printf("��� ����� %d �Դϴ�\n", result);
}
void viewTitle()
{
	printf("*** ���ϱ� �����Դϴ� ***\n");
}

void main()
{
	// �Լ��� ���� �κп� ���� ����
	int num0 = 0, num1 = 0, result = 0;

	// ���� �������ķ� ���μ��� ����
	viewTitle();
	num0 = getNum();
	num1 = getNum();
	result = add(num0, num1);
	viewResult(result);
}