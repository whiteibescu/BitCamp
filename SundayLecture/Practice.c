// 1.������ ���� ???
// 1-1.���α׸� ���ؼ� �ʿ��� �ܾ�, ����
// 1-2 �ڷ���, �Լ�
// 2. ��� ������ ����, ������ ���� �ۼ�
// �ݺ� ���޸��� ��Ƴ��� ����̴�...

// �������� �л� ������ �Է��ϰ� ����ϴ� ���α׷�
// ����? ������ ?
// ������ �Է�, ���
// ����, �Ǽ�
// ���� ( 0 ~ 100) scanf(). printf()
// ~ �Լ��� ��� �� ��ȯ, ����

// ù��° ����Ǵ°� ���� �� �ľ��ؾ���!!!!!
//  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int step01() {

	int score;
	printf("Score > ");
	scanf_s("%d", &score); //�Է� �޾ƶ�... �����Ѵ�...
	// ������ ���� �ٸ� �Լ��� �����ϰ� �Ϸ��� ���� �ּҸ� �ش�....
	return 0;

	printf(" �Է¹��� ���� : ");

}

int step02() {
	// ���� 3��, 3���� : ����, ����, ����
	// �������� 1���� ���� ������ �� �ִ�...
	int kor, eng, math; // ���� ���� �� ����, ���� ���� �ǹ�(�뵵)

	// scanf, printf �� �� ���� �� ���� �� ������Լ�
	printf("���� ���� ���� ���� ������ �Է� >");
	scanf_s("%d %d %d", &kor, &eng, &math); // ������ �߿�

	printf("%d %d %d \n", kor, eng, math);

	return 0;
	





}

int step03() {
	// �л����� �� 5���� �ִµ� �� �л����� ��,��,�� ������ ������....
	// �� 15���� ������
	// ���� ���� �����͸� ó���ϴ� ���α׷� ����� ����
	// 1�� 5��, 12��, 3�г�, �༺ �� �б� 5��, �� 6��
	int score[15] = { 0 };
	// �迭 ���(����) �� 0~ ��ȣ == ��ҹ�ȣ
	// ù��° �л��� 3���� ������ ���ڴ�...
	printf("ù��° ���� > ");
	scanf_s("%d %d %d", &score[0], &score[1], &score[2]);
	printf("ù��° ���� > ");
	scanf_s("%d %d %d", &score[3], &score[4], &score[5]);
	printf("ù��° ���� > ");
	scanf_s("%d %d %d", &score[6], &score[7], &score[8]);
	printf("ù��° ���� > ");
	scanf_s("%d %d %d", &score[9], &score[10], &score[11]);
	printf("ù��° ���� > ");
	scanf_s("%d %d %d", &score[12], &score[13], &score[14]);

	
	


	printf("%d %d %d \n", &score[0], &score[1], &score[2]);
	printf("%d %d %d \n", &score[3], &score[4], &score[5]);
	printf("%d %d %d \n", &score[6], &score[7], &score[8]);
	printf("%d %d %d \n", &score[9], &score[10], &score[11]);
	printf("%d %d %d \n", &score[12], &score[13], &score[14]);


	return 0;
}

int step04() {
	// �������� ���� �������� ��� Ȱ��
	// �迭�� for ���� �� ��
	int score[15] = { 0 };

	for (int i = 0; i < 15; ++i) {
		int v;
		scanf_s("%d", &v);

		score[i] = v;
	}

	for (int i = 0; i < 15; ++i) {
		printf("%d", score[i]);
	}

	return 0;

}

int step05() {
	// �л� 5�� �� 3���� ������ ������ �� 15���� ������ �Է�, ����, ���
	// ���, �߰��� ���(��, ���)
	// ���� : �л��� ������ ���� ����� �ʿ�
	int score[5 * 3] = { 0 }; //[5][3]

	for (int i = 0; i < 13; i += 3) {
		int no = 1;
		printf("[%d]�� �л��� ���� > ", no);
		no++; //no+=1
		scanf_s("%d %d %d", &score[i + 0], &score[i + 1], score[i + 2]);

	}


		return 0;
	




}


int main(void) {
	// ��Ģ�� ������ �Ӹ��� �ܼ�������...
	// ���� ���鶧�� �ִ��� �Ӹ��� ����϶�...
	// �� : �����ڸ� ����� ���� : ���, ����, ��
	// 100�� ���!!!



	step05();

	return 0;
}

