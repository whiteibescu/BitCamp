#include "turboc.h"

//숫자 대신 의미있는 ㅅ문자를 사용한다.
// 처음 숫자 다음부터는 자동으로 1씩 증가한다.
enum {
	INPUT_ADDR = 1,
	SEARCH_ADDR,
	UPDATE_ADDR,
	DELETE_ADDR,
	PRINTALL_ADDR,
	EXIT_ADDR
};

void viewMenu()
{
	printf("\t<주소록 관리 프로그램>\n");
	printf("1. 입력 \n");
	printf("2. 검색 \n");
	printf("3. 수정 \n");
	printf("4. 삭제 \n");
	printf("5. 전제출력 \n");
	printf("6. 종료 \n");
}

int getSelNum()
{
	int selNum = 0;
	printf("\n번호를 선택하세요 >> ");
	scanf_s("%d", &selNum);

	// 이 함수의 일처리가 끝나면 가지고 돌아갈 값
	return selNum;
}

void inputAddress()
{
	printf("\n입력처리하였습니다.\n");
}

void searchAddress()
{
	printf("\n검색처리하였습니다.\n");
}

void updateAddress()
{
	printf("\n수정처리하였습니다.\n");
}
void deleteAddress()
{
	printf("\n삭제처리하였습니다.\n");
}
void printAllAddress()
{
	printf("\n출력처리하였습니다.\n");
}
void exitApp()
{
	printf("\n종료하였습니다.\n");
}

void processWork(int selNum)
{
	switch (selNum)
	{
	case INPUT_ADDR:
		inputAddress();
		break;
	case SEARCH_ADDR:
		searchAddress();
		break;
	case UPDATE_ADDR:
		updateAddress();
		break;
	case DELETE_ADDR:
		deleteAddress();
		break;
	case PRINTALL_ADDR:
		printAllAddress();
		break;
	case EXIT_ADDR:
		exitApp();
	default:
		break;

	}
}

void laterProccess()
{
	getchar();				//scanf_s에서 입력된 \n을 처리함
	getchar();				// 아무 입력 받기
	clrscr();				// 화면 청소
}

void main()
{
	int selNum = 0;  //4바이트 크기



	while (1)
	{
		viewMenu();				// 1. 메뉴 보여주기
		selNum = getSelNum();	// 2. 사용자 입력
		processWork(selNum);	// 3. 처리
		laterProccess();		// 4. 후처리
	}
}