#include <stdio.h>

// 4. 시, 분, 초를 입력받은 후 초로 변환 후 출력



int time_to_sec_p(int* time) {

	printf("%d시간 %d분 %d초는 %d초\n", *time, *(time + 1), *(time + 2), *time * 60 * 60 + *(time + 1) * 60 + *(time + 2));

	return 0;
}

int main(void) {
	int time[3] = { 2, 46, 40 };
	time_to_sec_p(time);
}