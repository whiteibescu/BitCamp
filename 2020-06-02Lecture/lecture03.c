#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
	// 조립 과정 : 10진수 정수, 각 자리 값을 합친다...
	// 2진수 연산으로 각 자리 값의 사용 여부 표시한다...
{
	int num = 0;
	int flag = 0;
	for (int i = 0; i < 10; ++i) {
		flag = 0;             // <<<<< 초기화 시키는 이유 :
		num = rand() % 9 + 1;
		flag = flag | (1 << num); // 해결 방법. 핵심
		for (int k = 1; k < 3; ++k) {
			int d;
			do {// 실행을 우선하고
				d = rand() % 10;// 실행된 결과에 따라 반복 여부 결정
			} while  // 0 ~ 9 10진 1 자리 값
			(flag & ( 1 <<d));
			num = num * 10 + d;
			// 사용 표시

			flag = flag | (1 << d);
		}
		printf("%d \n", num);
	}
	return 0;
}