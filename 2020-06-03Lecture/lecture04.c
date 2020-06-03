int main(void)
{
	// 정수 배열 -추가
	int score[10] = { 0 };
	int last = 0;   
	score[last] = 1;    
	++last;
	score[last] = 2; 
	++last;
	score[last] = 3; 
	++last;

	// 출력시 추가된 값들(저장한) 출력
	// 추가 시 초기값에 따라 증감 순서 다르다.
	// 번호 범위를 판단하는 조건 다르다...

	for (int i = 0; i < last; i++)
	{
		printf("[%d] %d\n", i, score[i]);
	}

	if (last < 10) {
		++last;
		score[last] = 3; // 범위 내 추가되 있어야 한다.
	}
	else {
		printf("full \n");
	}

	return 0;
}