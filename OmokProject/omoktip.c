#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

char* img[] = { "○","●","┌ ","┬ ","┐ ","├ ","┼ ","┤ ","└ ","┴ ","┘ " };
#define PAN_SIZE 19

void panInit(int stone[][PAN_SIZE])
{
    int i, j;
    for (i = 0; i < PAN_SIZE; i++)
    {
        for (j = 0; j < PAN_SIZE; j++)
        {
            if (i == 0)
            {
                if (j == 0) stone[i][j] = 2;
                else if (j == PAN_SIZE - 1) stone[i][j] = 4;
                else   stone[i][j] = 3;
            }
            else if (i == PAN_SIZE - 1)
            {
                if (j == 0) stone[i][j] = 8;
                else if (j == PAN_SIZE - 1) stone[i][j] = 10;
                else   stone[i][j] = 9;
            }
            else
            {
                if (j == 0) stone[i][j] = 5;
                else if (j == PAN_SIZE - 1) stone[i][j] = 7;
                else   stone[i][j] = 6;
            }
        }

    }
}

void panDisplay(int stone[][PAN_SIZE])
{
    int i, j;
    printf("  ");
    for (j = 0; j < PAN_SIZE; j++)
    {
        printf("%2d", j);
    }
    printf("\n");

    for (i = 0; i < PAN_SIZE; i++)
    {
        printf("%2d", i);
        for (j = 0; j < PAN_SIZE; j++)
        {
            printf("%s", img[stone[i][j]]);
        }
        printf("\n");
    }
}
int setPosition(int field[][PAN_SIZE], int stone, int x, int y)
{
    if (y > (PAN_SIZE - 1) || y < 0 ||
        x >(PAN_SIZE - 1) || x < 0 ||
        field[y][x] == 0 || field[y][x] == 1)
    {
        printf("%s 잘못된 위치입니다.\n", (stone == 0) ? "Black" : "White");
        return 1;
    }
    else {
        field[y][x] = stone;
    }
    return 0;
}

int judge(int stone[][PAN_SIZE], int player, int px, int py)
{
    int i;
    int count;

    count = 0;
    for (i = 0; i < PAN_SIZE; i++)
    {   // 수평
        if (stone[py][i] == player)
        {
            count++;
            if (count > 4)   return 1;
        }
        else if (count)   count = 0;
    }
    count = 0;
    for (i = 0; i < PAN_SIZE; i++)
    {   // 수직
        if (stone[i][px] == player)
        {
            count++;
            if (count > 4)   return 1;
        }
        else if (count)   count = 0;
    }
    count = 0;
    int b;
    int y;
    b = py - px;
    for (i = 0; i < PAN_SIZE; i++)
    {
        y = i + b;
        if ((y >= 0 && y < PAN_SIZE) && stone[y][i] == player)
        {
            count++;
            if (count > 4)   return 1;
        }
        else if (count)   count = 0;
    }
    count = 0;
    b = py + px;
    for (i = 0; i < PAN_SIZE; i++)
    {
        y = i + b;
        if ((y >= 0 && y < PAN_SIZE) && stone[y][i] == player)
        {
            count++;
            if (count > 4)   return 1;
        }
        else if (count)   count = 0;
    }
    count = 0;
    return 0;
}
int judgedred(int array[][PAN_SIZE], int size, int player)
{
    int i, j;
    int count = 0;
    int k;

    k = player;

    for (i = 0; i < PAN_SIZE - 5; i++)
    {
        for (j = 0; j < PAN_SIZE; j++)
        {
            if (array[i][j] == k && array[i + 1][j + 1] == k && array[i + 2][j + 2] == k && array[i + 3][j + 3] == k && array[i + 4][j + 4] == k)
                return 1;
            else if (array[i][j] == k && array[i - 1][j + 1] == k && array[i - 2][j + 2] == k && array[i - 3][j + 3] == k && array[i - 4][j + 4] == k)
                return 1;
            else if (array[i][j] == k && array[i - 1][j + 1] == k && array[i - 2][j + 2] == k && array[i - 3][j + 3] == k && array[i - 4][j + 4] == k)
                return 1;
            else if (array[i][j] == k && array[i][j + 1] == k && array[i][j + 2] == k && array[i][j + 3] == k && array[i][j + 4] == k)
                return 1;
            else if (array[i][j] == k && array[i + 1][j] == k && array[i + 2][j] == k && array[i + 3][j] == k && array[i + 4][j] == k)
                return 1;
        }
    }
    return 0;
}
int copyArray(int dummy[][PAN_SIZE], int pan[][PAN_SIZE]) {


    for (int i = 0; i < PAN_SIZE; ++i) {
        for (int k = 0; k < PAN_SIZE; ++k) {
            dummy[i][k] = pan[i][k];
        }
    }
    return 0;
}

/*
team01
int mystone; (함수가 호출될 때마다 다시 생성)
static int mystone;   //값을 유지한다.
pan[][] 돌이 없는 상태..
if (*px == -1{} ~면 ~한다.
   게임이 시작되었다 : 1팀이 여러 번 게임을 진행한다.
   준비 : 변수들을 초기값, 배열을 비운다.
   흑돌인지 백돌인지 판단 해야 한다.
   if(*py ==-1{
      나는 흑돌이다.
      mystone = 0;
   }
   if(*py ==0{
      나는 백돌이다.
      mystone = 1; 여기까지 해서 흑돌인지 백돌인지 판단.
   }
else {-1이 아닐때
   int x;
   int y;
   상대가 돌을 어디에 두었는가
   나는 어디에 돌을 둘 것인가
   *px = x;
   *py = y;
}
*/


int team01(int pan[][PAN_SIZE], int* px, int* py)
{

    printf("...");
    getchar();

    *px = rand() % PAN_SIZE;
    *py = rand() % PAN_SIZE;

}





int team02(int pan[][PAN_SIZE], int* px, int* py)
{
    static int mystone = -1;
    int y = *py;
    int x = *px;

    if (*px == -1) {
        //게임 시작 의미
        if (*py == -1) {
            mystone = 0;
            if (*py == 0)
                mystone = 1;
        }
    }
    else {//흑돌이면
        if (mystone == 0) {


            x = rand() % PAN_SIZE;
            y = rand() % PAN_SIZE;


        }
        else {//백돌이면
            int y = *py;
            int x = *px;
            //순서대로 출력되기때문에 오른쪽이 비어있으면 무조건 오른쪽으로만 가게되있다...
            if (pan[y][x + 1] > 1) {
                *px = x + 1;
                *py = y;
            }
            if (pan[y][x - 1] > 1) {
                *px = x + 1;
                *py = y;
            }
            if (pan[y - 1][x] > 1) {
                *px = x + 1;
                *py = y;
            }
            if (pan[y + 1][x] > 1) {
                *px = x + 1;
                *py = y;
            }
            if (pan[y + 1][x + 1] > 1) {
                *px = x + 1;
                *py = y;
            }
            if (pan[y - 1][x - 2] > 1) {
                *px = x + 1;
                *py = y;
            }
            return 0;

        }
    }

    *px = x;
    *py = y;
    return 1;
}
/* 상대방이 돌을 놓은 위치
int y = *py;
int x = *px;


//for(int dy = y-1; dy<=(y+1); ++dy{
   for(int dy = x-1; dx<=(x+1); ++dx{
   if (pan[dy][dx] > 1) {
       x = dx;
      y = dy;
      break; 반복 멈춤 ...근데 첫 반복만 나감
      goto out; 중첩 반복을 한번에 벗어나기...
   }
 }

}
out;
//
위에 for문은 밑에 8개를 줄인 것임.
if (pan[y][x + 1] > 1) {

   ++x;
}
if (pan[y][x - 1] > 1) {
   --x;
}
if (pan[y -1 ][x] > 1) {
   --y;
}
if (pan[y+1][x] > 1) {
   ++y;
}
if (pan[y+ 1][x + 1] > 1) {
   ++y;
   ++x;
}
if (pan[y-1][x - 1] > 1) {
   --y;
   --x;
}
// pan[19][19]
if( x>=0);
if( y<=PAN_SIZE;)
return 0;
   */








static int (*play[])(int[][PAN_SIZE], int*, int*) = { team01,team02 };

int main()
{

    int player = 0, x = 0, y = 0;
    int pan[PAN_SIZE][PAN_SIZE] = { 0 };
    int dummy[PAN_SIZE][PAN_SIZE] = { 0 };
    int stoneCount = 0;
    int replay;
    panInit(pan);
    // 게임 시작
    while (1)
    {
        system("cls");
        // 오목판 출력
        panDisplay(pan);
        copyArray(dummy, pan);
        do {
            replay = 0;
            // 플레이어 함수 호출
            play[player](dummy, &x, &y);
            if (x >= PAN_SIZE || y >= PAN_SIZE) {
                replay = 1;
                printf("[%d]player wrong position\n", player);
            }
        } while (replay);

        // 오목돌 저장
        if (setPosition(pan, player, x, y))
        {
            printf("놓을 수 없는 자리입니다.\n");
        }
        else
        {
            // 승패판정
            if (judge(pan, player, x, y))
            {
                system("cls");
                panDisplay(pan);
                printf("player[%d]@(%d,%d) Win!!!!!!!\n",
                    player, x, y);
                break;
            }
            // 플레이어 변경
            player ^= 1;
            stoneCount++;
            if (stoneCount >= (PAN_SIZE * PAN_SIZE))
            {
                system("cls");
                panDisplay(pan);
                printf("더이상 돌을 놓을 자리가 없습니다.\n무승부입니다.");
                break;
            }
        }
    }

    return 0;
}