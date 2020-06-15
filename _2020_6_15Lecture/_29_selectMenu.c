//함수를 만드는 2가지 목적
//1. 반복되는 코드에 규칙성을 찾아서 
//변화하는 요소만 매개변수지정해서 묶어준다.
//(여러 번 사용되니깐 1번만 그룹화시켜서 이름을 부여하면 재사용에 매우 편리하다.
//2. 업무의 단위를 적절한 단위로 그룹화(함수만듬)하면 전체 흐름을 일목요연하게 정리할 수 있다.

/*
1. 마인드맵
구조적 프로그래밍(공간 구성, 분기)
분업화 시스템
2. FlowChart(순서도)
절차지향 프로그래밍(시간의 흐름, 선택)
*/

#include <stdio.h>


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
	if (selNum == 1)
		inputAddress();
	else if (selNum == 2)
		searchAddress();
	else if (selNum == 3)
		updateAddress();
	else if (selNum == 4)
		deleteAddress();
	else if (selNum == 5)
		printAllAddress();
	else if (selNum == 6)
		exitApp();
}


void main()
{
	int selNum = 0;  //4바이트 크기



	while (1)
	{
		viewMenu();				// 1. 메뉴 보여주기
		selNum = getSelNum();	// 2. 사용자 입력
		processWork(selNum);	// 3. 처리
	}
}