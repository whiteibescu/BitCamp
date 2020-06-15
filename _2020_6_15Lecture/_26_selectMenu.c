#include <stdio.h>

void main()
{
	int selNum = 0;  //4바이트 크기
	printf("\t<주소록 관리 프로그램>\n");
	printf("1. 입력 \n");
	printf("2. 검색 \n");
	printf("3. 수정 \n");
	printf("4. 삭제 \n");
	printf("5. 전제출력 \n");
	printf("6. 종료 \n");
	
	printf("\n 번호를 선택하세요 >> ");
	scanf_s("%d", &selNum); //bufferoverflow 에 취약함..

	// 3. 처리
	if (selNum == 1)
		printf("입력처리하였습니다.");
	else if (selNum == 2)
		printf("검색처리하였습니다.");
	else if (selNum == 3)
		printf("수정처리하였습니다.");
	else if (selNum == 4)
		printf("삭제처리하였습니다.");
	else if (selNum == 5)
		printf("출력처리하였습니다.");
	else if (selNum == 6)
		printf("종료하였습니다.");
	
}