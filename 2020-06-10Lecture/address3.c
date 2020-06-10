#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define SIZE 1

struct address {
	int bunho;
	char sido[15];
	char gungu[11];
	char eupdongmyun[11];
	char gil[11];
	char ho[7];
	char name[11];
}Address[SIZE];

int menu(void)
{
	printf("┌────────┐\n");
	printf("│   1.주소 입력  │\n");
	printf("│   2.주소 출력  │\n");
	printf("│   3.주소 수정  │\n");
	printf("│   4.주소 삭제  │\n");
	printf("│   5.주소 검색  │\n");
	printf("│   6.도 움  말  │\n");
	printf("│   7.종     료  │\n");
	printf("└────────┘\n");

	return 0;
}


int menu1(void)
{
	printf("┌────────┐\n");
	printf("│ ★1.주소 입력★│\n");
	printf("│   2.주소 출력  │\n");
	printf("│   3.주소 수정  │\n");
	printf("│   4.주소 삭제  │\n");
	printf("│   5.주소 검색  │\n");
	printf("│   6.도 움  말  │\n");
	printf("│   7.종     료  │\n");
	printf("└────────┘\n");

	return 0;
}

int menu2(void)
{
	printf("┌────────┐\n");
	printf("│   1.주소 입력  │\n");
	printf("│ ★2.주소 출력★│\n");
	printf("│   3.주소 수정  │\n");
	printf("│   4.주소 삭제  │\n");
	printf("│   5.주소 검색  │\n");
	printf("│   6.도 움  말  │\n");
	printf("│   7.종     료  │\n");
	printf("└────────┘\n");

	return 0;
}

int menu3(void)
{
	printf("┌────────┐\n");
	printf("│   1.주소 입력  │\n");
	printf("│   2.주소 출력  │\n");
	printf("│ ★3.주소 수정★│\n");
	printf("│   4.주소 삭제  │\n");
	printf("│   5.주소 검색  │\n");
	printf("│   6.도 움  말  │\n");
	printf("│   7.종     료  │\n");
	printf("└────────┘\n");

	return 0;
}

int menu4(void)
{
	printf("┌────────┐\n");
	printf("│   1.주소 입력  │\n");
	printf("│   2.주소 출력  │\n");
	printf("│   3.주소 수정  │\n");
	printf("│ ★4.주소 삭제★│\n");
	printf("│   5.주소 검색  │\n");
	printf("│   6.도 움  말  │\n");
	printf("│   7.종     료  │\n");
	printf("└────────┘\n");

	return 0;
}

int menu5(void)
{
	printf("┌────────┐\n");
	printf("│   1.주소 입력  │\n");
	printf("│   2.주소 출력  │\n");
	printf("│   3.주소 수정  │\n");
	printf("│   4.주소 삭제  │\n");
	printf("│ ★5.주소 검색★│\n");
	printf("│   6.도 움  말  │\n");
	printf("│   7.종     료  │\n");
	printf("└────────┘\n");

	return 0;
}

int menu6(void)
{
	printf("┌────────┐\n");
	printf("│   1.주소 입력  │\n");
	printf("│   2.주소 출력  │\n");
	printf("│   3.주소 수정  │\n");
	printf("│   4.주소 삭제  │\n");
	printf("│   5.주소 검색  │\n");
	printf("│ ★6.도 움  말★│\n");
	printf("│   7.종     료  │\n");
	printf("└────────┘\n");

	return 0;
}

int menu7(void)
{
	printf("┌────────┐\n");
	printf("│   1.주소 입력  │\n");
	printf("│   2.주소 출력  │\n");
	printf("│   3.주소 수정  │\n");
	printf("│   4.주소 삭제  │\n");
	printf("│   5.주소 검색  │\n");
	printf("│   6.도 움  말  │\n");
	printf("│ ★7.종     료★│\n");
	printf("└────────┘\n");

	return 0;
}

int initial(void)
{
	int i;

	for (i = 0; i < SIZE; i++) {
		Address[i].bunho = 0;
		Address[i].sido[0] = '\0';
		Address[i].gungu[0] = '\0';
		Address[i].eupdongmyun[0] = '\0';
		Address[i].gil[0] = '\0';
		Address[i].ho[0] = '\0';
		Address[i].name[0] = '\0';
	}

	return 0;
}

int input(void)
{
	int i;
	int count = 0;

	char sido_in[14] = "\0";
	char gungu_in[10] = "\0";
	char eupdongmyun_in[10] = "\0";
	char gil_in[10] = "\0";
	char ho_in[6] = "\0";
	char name_in[10] = "\0";

	printf("==★ 입 력 ★==\n");

	for (i = 0; i < SIZE; i++) {
		if (Address[i].bunho == 1)
			count++;
	}
	if (count == SIZE) {
		printf("주소  입력이 제한 되었습니다.\n");
		return 0;
	}
	printf("시-도 입력:>>");
	gets(sido_in);

	if (strcmp(sido_in, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("군-구 입력:>>");
	gets(gungu_in);

	if (strcmp(gungu_in, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("읍-동-면 입력:>>");
	gets(eupdongmyun_in);

	if (strcmp(eupdongmyun_in, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("길  입력:>>");
	gets(gil_in);

	if (strcmp(gil_in, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("호 입력:>>");
	gets(ho_in);

	if (strcmp(ho_in, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("이름 입력:>>");
	gets(name_in);

	if (strcmp(name_in, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	for (i = 0; i < SIZE; i++) {
		if (Address[i].bunho == 0) {
			Address[i].bunho = 1;
			strcpy(Address[i].sido, sido_in);
			strcpy(Address[i].gungu, gungu_in);
			strcpy(Address[i].eupdongmyun, eupdongmyun_in);
			strcpy(Address[i].gil, gil_in);
			strcpy(Address[i].ho, ho_in);
			strcpy(Address[i].name, name_in);

			break;
		}
	}
	printf("주소가 입력되었습니다.\n");

	return 0;
}

int output(void)
{
	int i;
	int count = 0;

	printf("== ★출력★ ==\n");

	for (i = 0; i < SIZE; i++) {
		if (Address[i].bunho == 1) {
			printf("%s %s \n", Address[i].sido, Address[i].gungu);
			printf("%s %s \n", Address[i].eupdongmyun, Address[i].gil);
			printf("%s %s \n", Address[i].ho, Address[i].name);
			printf("=================================\n");
			count++;
		}
		if (count == 3) {
			printf("아무키나 누르세요.\n");
			getchar();
			count = 0;
		}
	}

	return 0;
}

int modify(void)
{
	int i;
	int k; //수정할 주소 인덱스 번호 변수
	int count = 0;
	char sido_mo[15] = "\0";
	char gungu_mo[11] = "\0";
	char eupdongmyun_mo[11] = "\0";
	char gil_mo[11] = "\0";
	char ho_mo[7] = "\0";
	char name_mo[11] = "\0";

	printf("== ★수정★ ==\n");
	printf("수정할주소이름입력:>>");
	gets(name_mo);

	if (strcmp(name_mo, "\0") == 0) {
		printf("이름 입력이 되지 않았습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	for (i = 0; i < SIZE; i++) {
		if (strcmp(name_mo, Address[i].name) == 0) {
			printf("%s %s \n", Address[i].sido, Address[i].gungu);
			printf("%s %s \n", Address[i].eupdongmyun, Address[i].gil);
			printf("%s %s \n", Address[i].ho, Address[i].name);
			printf("수정할 주소 이름이 검색되었습니다.\n");
			printf("=================================\n");
			k = i;
		}
		else
			count++;
	}

	if (count == SIZE) {
		printf("수정할 주소 이름이 없습니다.\n");
		return 0;
	}

	printf("수정할 주소 이름 입력하겠습니다.\n");
	printf("수정시-도 입력:>>");
	gets(sido_mo);

	if (strcmp(sido_mo, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("수정군-구 입력:>>");
	gets(gungu_mo);

	if (strcmp(gungu_mo, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("수정읍-동-면 입력:>>");
	gets(eupdongmyun_mo);

	if (strcmp(eupdongmyun_mo, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("수정길  입력:>>");
	gets(gil_mo);

	if (strcmp(gil_mo, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("수정호 입력:>>");
	gets(ho_mo);

	if (strcmp(ho_mo, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	printf("수정이름 입력:>>");
	gets(name_mo);

	if (strcmp(name_mo, "\0") == 0) {
		printf("빈 단어가  입력되었습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}
	strcpy(Address[k].sido, sido_mo);
	strcpy(Address[k].gungu, gungu_mo);
	strcpy(Address[k].eupdongmyun, eupdongmyun_mo);
	strcpy(Address[k].gil, gil_mo);
	strcpy(Address[k].ho, ho_mo);
	strcpy(Address[k].name, name_mo);

	printf("주소와 이름을 수정하였습니다.\n");

	return 0;

}

int del(void)
{
	int i;
	int yn;
	int count = 0;
	char name_de[11] = "\0";

	printf("== ★삭제★ ==\n");
	printf("삭제할주소이름입력:>>");
	gets(name_de);

	if (strcmp(name_de, "\0") == 0) {
		printf("이름이 입력되지 않았습니다.\n");
		printf("다시 입력 하십시오.\n");

		return 0;
	}
	for (i = 0; i < SIZE; i++) {
		if (strcmp(name_de, Address[i].name) == 0) {
			printf("%s %s \n", Address[i].sido, Address[i].gungu);
			printf("%s %s \n", Address[i].eupdongmyun, Address[i].gil);
			printf("%s %s \n", Address[i].ho, Address[i].name);
			printf("삭제할 주소 이름이 검색되었습니다.\n");
			printf("=================================\n");

			printf("삭제하시겠습니까?(y/n)>>");
			yn = _getche();
			if (yn == 'y') {
				Address[i].bunho = 0;
				Address[i].sido[0] = '\0';
				Address[i].gungu[0] = '\0';
				Address[i].eupdongmyun[0] = '\0';
				Address[i].gil[0] = '\0';
				Address[i].ho[0] = '\0';
				Address[i].name[0] = '\0';

				printf("\n주소 이름이 삭제가 되었습니다.\n");
				return 0;
			}
			else if (yn == 'n') {
				printf("\n삭제 안합니다.\n");
				return 0;
			}
			else {
				fflush(stdin);
				printf("\n잘못입력하셨습니다.\n");
				return 0;
			}
		}
		else
			count++;
	}

	if (count == SIZE) {
		printf("삭제할 주소 이름이 없습니다.\n");
		return 0;
	}

	return 0;
}

int search(void)
{
	int i;
	int count = 0;
	char name_se[11] = "\0";

	printf("== ★검색★ ==\n");
	printf("검색할주소이름입력:>>");
	gets(name_se);

	if (strcmp(name_se, "\0") == 0) {
		printf("이름 입력이 되지 않았습니다.\n");
		printf("다시 입력하십시오.\n");

		return 0;
	}

	for (i = 0; i < SIZE; i++) {
		if (strcmp(name_se, Address[i].name) == 0) {
			printf("%s %s \n", Address[i].sido, Address[i].gungu);
			printf("%s %s \n", Address[i].eupdongmyun, Address[i].gil);
			printf("%s %s \n", Address[i].ho, Address[i].name);
			printf("주소 이름이 검색되었습니다.\n");
			printf("=================================\n");

		}
		else
			count++;
	}
	if (count == SIZE) {
		printf("검색할 주소 이름이 없습니다.\n");
		return 0;
	}

	return 0;
}

int help(void)
{
	printf("==★도움말★==\n ");
	printf("주소록 관리 프로그램입니다.\n");
	printf("수정 삭제 검색시 이름을 입력하세요.\n");

	return 0;
}

int quit(void)
{
	printf("끝마치겠습니다.!!\n");
	exit(0);
}

int main(void)
{
	static int sum = 1;
	int chr;

	initial();

	while (1)
	{


		if (sum == 1)
		{
			menu1();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) input();
		}
		else if (sum == 2)
		{
			menu2();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) output();
		}
		else if (sum == 3)
		{
			menu3();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) modify();

		}
		else if (sum == 4)
		{
			menu4();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) del();
		}
		else if (sum == 5)
		{
			menu5();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) search();
		}
		else if (sum == 6)
		{
			menu6();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) help();
		}
		else if (sum == 7)
		{
			menu7();

			chr = _getch();

			if (chr == 0 || chr == 224)
				chr = _getch();

			if (chr == 80) sum++;
			else if (chr == 72) sum--;
			else if (chr == 49) sum = 1;
			else if (chr == 50) sum = 2;
			else if (chr == 51) sum = 3;
			else if (chr == 52) sum = 4;
			else if (chr == 53) sum = 5;
			else if (chr == 54) sum = 6;
			else if (chr == 55) sum = 7;
			else if (chr == 13) quit();
		}
		else if (sum < 1) sum = 7;
		else if (sum > 7) sum = 1;
	}
	return 0;

}