#include <stdio.h>

void main()
{
	int selNum = 0;  //4����Ʈ ũ��
	printf("\t<�ּҷ� ���� ���α׷�>\n");
	printf("1. �Է� \n");
	printf("2. �˻� \n");
	printf("3. ���� \n");
	printf("4. ���� \n");
	printf("5. ������� \n");
	printf("6. ���� \n");
	
	printf("\n ��ȣ�� �����ϼ��� >> ");
	scanf_s("%d", &selNum); //bufferoverflow �� �����..

	// 3. ó��
	if (selNum == 1)
		printf("�Է�ó���Ͽ����ϴ�.");
	else if (selNum == 2)
		printf("�˻�ó���Ͽ����ϴ�.");
	else if (selNum == 3)
		printf("����ó���Ͽ����ϴ�.");
	else if (selNum == 4)
		printf("����ó���Ͽ����ϴ�.");
	else if (selNum == 5)
		printf("���ó���Ͽ����ϴ�.");
	else if (selNum == 6)
		printf("�����Ͽ����ϴ�.");
	
}