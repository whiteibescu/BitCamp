/* //함수의 모양
리턴타입  함수명(매개변수)
{	// 영역의 시작

	return 리턴타입변수;
}	// 영역의 끝

<함수를 설계할 때 정해줘야 하는 것>
1. 함수명     - 무조건 존재
2. 프로세스	  - 무조건 존재
3. 매개변수   - o x
4. 리턴값     - o x
*/
#include <stdio.h>

// 매개변수 x, 리턴값 o
int getNum()
{
	int num = 0;
	printf("숫자 입력: ");
	scanf_s("%d", &num);
	return num;
}
//  매개변수 o, 리턴값 o
int add(int num0, int num1)
{
	return num0 + num1;
}
// 매개변수 o, 리턴값 x
void viewResult(int result)
{
	printf("계산 결과는 %d 입니다\n", result);
}
void viewTitle()
{
	printf("*** 더하기 연산입니다 ***\n");
}

void main()
{
	// 함수의 시작 부분에 변수 선언
	int num0 = 0, num1 = 0, result = 0;

	// 변수 선언이후로 프로세스 전개
	viewTitle();
	num0 = getNum();
	num1 = getNum();
	result = add(num0, num1);
	viewResult(result);
}