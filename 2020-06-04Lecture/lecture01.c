/*
1. �ҽ� ���� ����� .c
2. ��� ���� ���̱� .h
3. main �Լ� ����� int main() { return 0; }
4. main �Լ� �ȿ� ���� ���� �ۼ��ϱ�

���� �� ���
@arg :
argc - ������ ����
argv - ���ڿ�(��) ����


*/
		



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


// �Լ� �����////////////////////////////////
// { } �� �պκθ� ���� ��
void fn(void);
////////////////////////////////////////////
int Sum(int a, int b); // ���޵Ǵ� ���� ���� ���� - �Ű�����
int printIntArray(int ar[], );


int main(int argc, char** argv) { //char* argv[] 

	fn(); // �Լ� ȣ��(����);
	int rt = getValue(); //���� �� int �� ���� ��ȯ�Ѵ�...
	// �Լ��� ��ȯ�� 1���� ����, ������ ���� �� ����
	int hap = Sum(2, 10);









	return 0;
}




//�Լ� ���Ǻ�///////////////////////////////////////////////////////
void fn(void)
{
	// ��ȯ�� void�� ��
	// return ���� ����
	return; // �Լ��� ����
}
int Sum(int a, int b)
{
	// �Ű������� �ִ� �Լ��� ȣ���� ����
	// �ݵ�� �����ؾ� �Ѵ�...
	int s = a + b;
}