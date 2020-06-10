#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char NAME[3][20], PHONE[3][20], SUCH[1][20];
	int i, count = 0;
	/*이름과 전화번호를 배열에 저장*/
2
	/*for (i = 0; i < 3; i++)
	{
	   printf("%s     %s\n", NAME[i], PHONE[i]);
	}*/
	while (1)
	{
		/*찾을 사람을 SUCH[0]에 저장*/
		printf("\n찾을 사람의 이름 (종료 : END) : ");
		scanf("%s", &SUCH[0]);
		/*printf("SUCH[0]에 저장된 값 '%s'\n", SUCH[0]);*/
		/*END를 입력하면 종료*/
		if (strcmp(SUCH[0], "END") == 0) break;
		/*동일한 이름이 있는지 확인 없으면 카운트 증가*/
		for (i = 0; i < 3; i++)
		{
			if (strcmp(SUCH[0], NAME[i]) == 0) printf("\n%s\n", PHONE[i]);
			else count += 1;
		}
		/*카운트가 3이면 없는 번호*/
		if (count == 3) printf("\n저장되어 있지 않는 사용자입니다.\n");
		count = 0;
	}
	return 0;
}