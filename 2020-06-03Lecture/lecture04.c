int main(void)
{
	// ���� �迭 -�߰�
	int score[10] = { 0 };
	int last = 0;   
	score[last] = 1;    
	++last;
	score[last] = 2; 
	++last;
	score[last] = 3; 
	++last;

	// ��½� �߰��� ����(������) ���
	// �߰� �� �ʱⰪ�� ���� ���� ���� �ٸ���.
	// ��ȣ ������ �Ǵ��ϴ� ���� �ٸ���...

	for (int i = 0; i < last; i++)
	{
		printf("[%d] %d\n", i, score[i]);
	}

	if (last < 10) {
		++last;
		score[last] = 3; // ���� �� �߰��� �־�� �Ѵ�.
	}
	else {
		printf("full \n");
	}

	return 0;
}