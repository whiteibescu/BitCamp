/* �迭 (¦, �ټ��ִ�)
1) �뵵
  �������� 3���� �л� �Է�
  int kor0, kor1, kor2;
  �������� 1000���� �л� �Է�
  int kor[1000];
  int ������ 1000�� �ټ��ִ�.
*/
#include <stdio.h>

int main(void)
{
	int kor0 = 0, kor1 = 0, kor2 = 0;
	int sum = 0;
	double avg = 0.0;
	printf("1��° ���� ���� ���� �Է� : ");
	scanf_s("%d", &kor0);
	printf("1��° ���� ���� ���� �Է� : ");
	scanf_s("%d", &kor1);
	printf("1��° ���� ���� ���� �Է� : ");
	scanf_s("%d", &kor2);
	// ������ ������ ������ ����� ����
	// 275 / 3 => 275.0 / 3 => �Ҽ��� ����
	sum = kor0 + kor1 + kor2;
	avg = (double)sum / 3;

	printf("������ %d ����� %.2lf", sum, avg);
}
