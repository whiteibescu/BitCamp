//�Լ��� ����� 2���� ����
//1. �ݺ��Ǵ� �ڵ忡 ��Ģ���� ã�Ƽ� 
//��ȭ�ϴ� ��Ҹ� �Ű����������ؼ� �����ش�.
//(���� �� ���Ǵϱ� 1���� �׷�ȭ���Ѽ� �̸��� �ο��ϸ� ���뿡 �ſ� ���ϴ�.
//2. ������ ������ ������ ������ �׷�ȭ(�Լ�����)�ϸ� ��ü �帧�� �ϸ�俬�ϰ� ������ �� �ִ�.

/*
1. ���ε��
������ ���α׷���(���� ����, �б�)
�о�ȭ �ý���
2. FlowChart(������)
�������� ���α׷���(�ð��� �帧, ����)
*/

#include <stdio.h>


void viewMenu()
{
	printf("\t<�ּҷ� ���� ���α׷�>\n");
	printf("1. �Է� \n");
	printf("2. �˻� \n");
	printf("3. ���� \n");
	printf("4. ���� \n");
	printf("5. ������� \n");
	printf("6. ���� \n");
}

int getSelNum()
{
	int selNum = 0;
	printf("\n��ȣ�� �����ϼ��� >> ");
	scanf_s("%d", &selNum);

	// �� �Լ��� ��ó���� ������ ������ ���ư� ��
	return selNum;
}

void processWork(int selNum)
{
	if (selNum == 1)
		printf("\n�Է�ó���Ͽ����ϴ�.\n");
	else if (selNum == 2)
		printf("\n�˻�ó���Ͽ����ϴ�.\n");
	else if (selNum == 3)
		printf("\n����ó���Ͽ����ϴ�.\n");
	else if (selNum == 4)
		printf("\n����ó���Ͽ����ϴ�.\n");
	else if (selNum == 5)
		printf("\n���ó���Ͽ����ϴ�.\n");
	else if (selNum == 6)
		printf("\n�����Ͽ����ϴ�.\n");
}


void main()
{
	int selNum = 0;  //4����Ʈ ũ��


	
	while (1)
	{
		viewMenu();				// 1. �޴� �����ֱ�
		selNum = getSelNum();	// 2. ����� �Է�
		processWork(selNum);	// 3. ó��
	}
}