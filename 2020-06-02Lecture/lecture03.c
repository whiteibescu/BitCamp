#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
	// ���� ���� : 10���� ����, �� �ڸ� ���� ��ģ��...
	// 2���� �������� �� �ڸ� ���� ��� ���� ǥ���Ѵ�...
{
	int num = 0;
	int flag = 0;
	for (int i = 0; i < 10; ++i) {
		flag = 0;             // <<<<< �ʱ�ȭ ��Ű�� ���� :
		num = rand() % 9 + 1;
		flag = flag | (1 << num); // �ذ� ���. �ٽ�
		for (int k = 1; k < 3; ++k) {
			int d;
			do {// ������ �켱�ϰ�
				d = rand() % 10;// ����� ����� ���� �ݺ� ���� ����
			} while  // 0 ~ 9 10�� 1 �ڸ� ��
			(flag & ( 1 <<d));
			num = num * 10 + d;
			// ��� ǥ��

			flag = flag | (1 << d);
		}
		printf("%d \n", num);
	}
	return 0;
}