#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	// ���� �迭 -�߰�
	int score[10] = { 0 };
	int last = -1;   // ������ �߰��� ��ҹ�ȣ
	++last;
	score[last] = 1; // ó������ ������ 
	++last;
	score[last] = 2; // ������ 
	++last;
	score[last] = 3; // ������ 

	// ��½� �߰��� ����(������) ���

	for(int i=0; i <= last; i++)
	{
		printf("[%d] %d\n", i, score[i]);
	}

	if (last < 10-1) {
		++last;
		score[last] = 3; // ���� �� �߰��� �־�� �Ѵ�.
	}
	else {
		printf("full \n");
	}

	return 0;
}








int main_02(void) {
	int maxLength = 10;
	int d2[2][5]; 
	int score[2 * 5] = { 0 }; //�������� �Ⱦ��� ��� ��밡��
	int index = 1 * 5 +2; //�ʱ�ȭ�� �迭 ����
	score[7] = 1;
	printf("%d \n", score[index]);
	printf("%d \n", score[7]);

	return 0;

}