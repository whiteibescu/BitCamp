#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 3. 초를 입력받은 후 시, 분 초로 변환 후 출력
int sec_to_time_p(int sec) {
    // printf("초 입력->");

    printf("%d시간 %d분 %d초\n", sec / 60 / 60, sec / 60 % 60, sec % 60);

    return 0;
}

void main() {
	sec_to_time_p(1000000);
} 