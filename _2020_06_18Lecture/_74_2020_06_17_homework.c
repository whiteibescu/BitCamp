//#include <stdio.h>

//1. 10�� ���� �Է� �� �ִ� �ּ� ���� ����� ���ϼ���.
//void inputArrayNums(int arrNums[], int len) 
//void inputArrayNums(int* arrNums, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d/10 ��° ���� �Է� : ", i + 1);
//		scanf_s("%d", &arrNums[i]);
//	}
//}
//int maxNums(int* arrNums, int len)
//{
//	int max = arrNums[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (max < arrNums[i])
//			max = arrNums[i];
//	}
//	return max;
//}
//int minNums(int* arrNums, int len) 
//{
//	int min = arrNums[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (min > arrNums[i])
//			min = arrNums[i];
//	}
//	return min;
//}
//int sumNums(int* arrNums, int len) 
//{
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum += arrNums[i];
//	}
//	return sum;
//}
//double avgNums(int* arrNums, int len) 
//{
//	int sum = sumNums(arrNums, len);
//	double avg = (double)sum / len;
//	return avg;
//}
// 
//void main()
//{
//	int nums[10] = { 0 };
//	int max = 0, min = 0, sum = 0;
//	double avg = 0.0;
//	int arrLen = sizeof(nums) / sizeof(nums[0]);
//
//	inputArrayNums(nums, arrLen);
//
//	max = maxNums(nums, arrLen);
//	printf("���� ū ���� %d�Դϴ�\n", max);
//
//	min = minNums(nums, arrLen);
//	printf("���� ���� ���� %d�Դϴ�\n", min);
//
//	sum = sumNums(nums, arrLen);
//	printf("������ %d�Դϴ�\n", sum);
//	
//	avg = avgNums(nums, arrLen);
//	printf("����� %.2lf�Դϴ�\n", avg);
//}


//3. ����ڷκ��� �ʸ� �Է¹��� �� �̸�[��, ��, ��]��
//���·� ����ϴ� ���α׷��� �ۼ��ϼ���.
// �����͸� ���
//1) �Է� �Լ�
//2) �ð� ���
//3) ��� �Լ�
//#include <stdio.h>
//
//#define IN
//#define OUT
//
//int inputSec()
//{
//	int sec = 0;
//	printf("�ʸ� �Է��ϼ���: ");
//	scanf_s("%d", &sec);
//	return sec;
//}
//
//void calcTime(IN int srcSec, OUT int* pHour,
//			OUT int* pMin, OUT int* pSec)
//{
//	int hour = 0, min = 0, sec = 0;
//	// 3662	=> 1�ð� 1�� 2��
//	sec = srcSec % 60;	// 2��
//	min = srcSec / 60;	// 61��
//	hour = min / 60;	// 1�ð�
//	min = min % 60;		// 1��
//
//	// ����� ����
//	*pHour = hour;
//	*pMin = min;
//	*pSec = sec;
//}
//
//void viewTime(int hour, int min, int sec)
//{
//	printf("[%02d �ð�: %02d ��: %02d ��]\n",
//		hour, min, sec);
//}
//
//void main()
//{
//	int iSec = 0;
//	int hour = 0, min = 0, sec = 0;
//	while (1)
//	{
//		iSec = inputSec();
//		calcTime(iSec, &hour, &min, &sec);
//		viewTime(hour, min, sec);
//	}
//}


//6. �ݵ�� A�� �̿��ؼ� B�� ���� ä�쵵�� �ϼ���
//// �迭 A, B�� ����
//int A[2][4] = { 1,2,3,4,5,6,7,8 };
//int B[4][2] = { 0 };
//
//A                B
//1 2 3 4          1 5
//5 6 7 8          2 6
//				   3 7
//				   4 8
//#include <stdio.h>
//
//void main()
//{
//	int A[2][4] = { 1,2,3,4,5,6,7,8 };
//	int B[4][2] = { 0 };
//
//	for (int i = 0; i < 2; i++)
//		for (int j = 0; j < 4; j++)
//			B[j][i] = A[i][j];
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d ", B[i][j]);
//		}
//		printf("\n");
//	}
//}

//6. �ݵ�� A�� �̿��ؼ� B�� ���� ä�쵵�� �ϼ���
//// �迭 A, B�� ����
//int A[2][4] = { 1,2,3,4,5,6,7,8 };
//int B[4][2] = { 0 };
//
//A                B
//1 2 3 4          1 2
//5 6 7 8          3 4
//				   5 6
//				   7 8
#include <stdio.h>

void main()
{
	int A[2][4] = { 1,2,3,4,5,6,7,8 };
	int B[4][2] = { 0 };
	int* ptr = &B[0][0];
	int cnt = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ptr[cnt++] = A[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
}