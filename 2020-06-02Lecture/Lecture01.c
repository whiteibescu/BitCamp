#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*	���
	�ݺ� : for while do-while
	�б� : if(��), switch(���,���)
*/

int main(void) { 
	//1 ~ 25 ���� �����ϴ� �������� ���

	int min = 100;	 //�Է�
	int max = 25;	 //�Է�
	// ����� ������ �ݴ�� �Է� ��쵵 ����....
	// ����(�Ǵ�) - �б⹮....
	if (min > max)
	{
		// �κ����� ���� ��ȯ�Ѵ�.
		
		int temp = min;
		min = max;
		max = temp; 
		// �����ϱ� ���ؼ��� ���� �ϳ��� �� �ʿ�
		// ��Ʈ������ XOR ���� Ȱ���

		��
	}

	for (int i = min; i < max+1 ; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	return 0;
}