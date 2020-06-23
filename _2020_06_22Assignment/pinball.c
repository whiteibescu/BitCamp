#include "turboc.h"
#include <stdlib.h>
#include <conio.h>

#define WIDTH   45
#define HEIGHT   40

#define TRUE   1
#define FALSE   0

#define UP_KEY 72
#define DOWN_KEY 80
#define LEFT_KEY 75
#define RIGHT_KEY 77

int score = 0;
int scores[10] = { 0 };
int score_cnt = 0;

void drawXLine(int sX, int eX, int yPos, const char* icon)
{
    int x = 0;
    for (x = sX; x <= eX; x++)
    {
        gotoxy(x, yPos);
        puts(icon);
    }
}

void drawYLine(int sY, int eY, int xPos, const char* icon)
{
    int y = 0;
    for (y = sY; y <= eY; y++)
    {
        gotoxy(xPos, y);
        puts(icon);
    }
}

void drawBar(int x, int y, char* bar)
{
    gotoxy(x, y);
    puts(bar);
}
void drawWall(int start, int end, int any, int pt, char* icon) {

    for (int i = start; i <= end; i++) {

        if (any == 0) {
            gotoxy(i, pt);
        }
        else if (any == 1) {
            gotoxy(pt, i);
        }

        puts(icon);
    }

}

void drawObs(int left, int top, int width, int height) {
    drawWall(left, left + width, 0, top, "#");
    drawWall(left, left + width, 0, top + height, "#");
    drawWall(top, top + height, 1, left, "#");
    drawWall(top, top + height, 1, left + width, "#");
}

int obXBouncce(int x, int y, int left, int top, int width, int hieght, int sc) {
    if ((x == left - 1 || x == left + width + 1) && y >= top && y <= top + hieght) {
        score += sc;
        return -1;
    }
    else return 1;
}
int obYBouncce(int x, int y, int left, int top, int width, int hieght, int sc) {
    if ((y == top - 1 || y == top + hieght + 1) && x >= left && x <= left + width) {
        score += sc;
        return -1;
    }
    else return 1;
}

void check_game_over(void);
void check_score(void);
void loadScore();
void saveScore();

void main()
{
RE:
    clrscr();
    setcursortype(NOCURSOR);
    char* bar = "■■■■";
    int preX, preY;
    int newX, newY;
    preX = newX = WIDTH / 2 - strlen(bar) / 2 + 30;
    preY = newY = HEIGHT / 5 * 4 + 38;
    score = 0;
    int obL1 = 38;
    int obT1 = 38;
    int obW1 = 4;
    int obH1 = 4;

    int obL2 = 40;
    int obT2 = 50;
    int obW2 = 6;
    int obH2 = 6;

    int obL3 = 57;
    int obT3 = 35;
    int obW3 = 12;
    int obH3 = 6;

    int obL4 = 63;
    int obT4 = 46;
    int obW4 = 4;
    int obH4 = 4;

    int obL5 = 54;
    int obT5 = 54;
    int obW5 = 12;
    int obH5 = 4;


    gotoxy(40, 40);
    puts("3");
    gotoxy(43, 53);
    puts("2");
    gotoxy(63, 38);
    puts("1");
    gotoxy(65, 48);
    puts("3");
    gotoxy(60, 56);
    puts("2");

    drawXLine(2 + 30, WIDTH + 2 + 30, HEIGHT + 2 + 30, "*");
    drawXLine(2 + 30, WIDTH + 2 + 30, 2 + 30, "*");
    drawYLine(2 + 30, HEIGHT + 2 + 30, WIDTH + 2 + 30, "*");
    drawYLine(2 + 30, HEIGHT + 2 + 30, 2 + 30, "*");
    drawObs(obL1, obT1, obW1, obH1);
    drawObs(obL2, obT2, obW2, obH2);
    drawObs(obL3, obT3, obW3, obH3);
    drawObs(obL4, obT4, obW4, obH4);
    drawObs(obL5, obT5, obW5, obH5);
    /*drawObs(39, 42, 2, 2);
    drawObs(38, 38, 4, 4);
    drawObs(40, 45, 2, 2);*/
    drawBar(newX, newY, bar);

    int x = 4 + 30, y = 3 + 30;
    int wayX = 1, wayY = 1;
    int count = 0;
    int restart = 0;
    while (TRUE)
    {
    REGAME:
        setcursortype(NOCURSOR);
        gotoxy(x, y);
        puts("o");
        delay(1);
        gotoxy(x, y);
        puts(" ");

        if (count == 2) {
            if (wayX == 1) x++;
            else x--;
            if (wayY == 1) y++;
            else y--;
            if (x == 3 + 30 || x == WIDTH + 1 + 30) wayX *= -1;
            if (y == 3 + 30 || y == HEIGHT + 1 + 30 || (y == newY - 1 && x >= newX && x <= newX + 8)) wayY *= -1;
            //if ((x == obLeftX - 1 || x == obLeftX +5) && y >= obTopY && y <= obTopY + 4) wayX *= -1;
            //if ((y == obTopY -1 || y == obTopY +5) && x >= obLeftX && x <= obLeftX + 4) wayY *= -1;

            wayX *= obXBouncce(x, y, obL1, obT1, obW1, obH1, 3);
            wayY *= obYBouncce(x, y, obL1, obT1, obW1, obH1, 3);
            wayX *= obXBouncce(x, y, obL2, obT2, obW2, obH2, 2);
            wayY *= obYBouncce(x, y, obL2, obT2, obW2, obH2, 2);
            wayX *= obXBouncce(x, y, obL3, obT3, obW3, obH3, 1);
            wayY *= obYBouncce(x, y, obL3, obT3, obW3, obH3, 1);
            wayX *= obXBouncce(x, y, obL4, obT4, obW4, obH4, 3);
            wayY *= obYBouncce(x, y, obL4, obT4, obW4, obH4, 3);
            wayX *= obXBouncce(x, y, obL5, obT5, obW5, obH5, 2);
            wayY *= obYBouncce(x, y, obL5, obT5, obW5, obH5, 2);

            gotoxy(81, 37);
            printf("score : %d", score);
            count = 0;
            if (y == HEIGHT / 5 * 4 + 38 + 1)
            {
                gotoxy(90, 52);
                puts("game over");
                gotoxy(87, 54);
                puts("재도전 1, 종료 2");
                gotoxy(88, 56);
                printf("최종 점수 : %d\n", score);
                check_game_over();
                check_score();
                gotoxy(88, 58);
                puts("입력 >>                   ");
                gotoxy(96, 58);
                scanf_s("%d", &restart);
                getchar();

                if (restart == 1) {

                    gotoxy(90, 52);
                    puts("           ");
                    gotoxy(87, 54);
                    puts("                    ");
                    gotoxy(88, 56);
                    puts("                    ");
                    gotoxy(88, 58);
                    puts("                    ");
                    gotoxy(96, 58);
                    puts("                    ");
                    score = 0;
                    gotoxy(32, 31);
                    puts("                     ");
                    gotoxy(81, 37);
                    puts("                     ");

                    restart = 0;
                    x = 4 + 30, y = 3 + 30;
                    wayX = 1, wayY = 1;
                    count = 0;
                    continue;
                }
                else if (restart == 2) 
                {   
                    clrscr();
                    saveScore();
                    loadScore();
                    break;

                }
            }
        }

        count++;
        preX = newX;
        preY = newY;

        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            if (newX > 3 + 30)
                newX--;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            if (newX < WIDTH + 24)
                newX++;
        }
        if (newX != preX || newY != preY)
            drawBar(preX, preY, "        ");
        drawBar(newX, newY, bar);
    }
}

void saveScore()
{
    FILE* fp = NULL;
    fopen_s(&fp, "score.bin", "wb");
    fwrite(scores, sizeof(int), 10, fp);
    fclose(fp);
}

void loadScore()
{
    FILE* fp = NULL;
    fopen_s(&fp, "score.bin", "rb");
    fread(scores, sizeof(int), 10, fp);
    score_cnt = 10;
    int max = 0;
    int temp = 0;
    for (int i = 0; i < score_cnt; i++)
    {
        
        for (int j = i; j < score_cnt; j++) {
            if (scores[j] > scores[i]) {
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
               
            }
            
        }
        printf("Score : %d\n\n", scores[i]);
    }
    printf(" Best score = %d\n", scores[0]);



    

    fclose(fp);

}

void check_game_over(void) {

    if (score_cnt == 10)
        return;

    scores[score_cnt] = score;
    score_cnt++;

    //FILE* file = NULL;

    //printf("★★★ BEST SCORE! ★★★\n");    

    //fopen_s(&file, "score.dat", "wb");    
    //if (NULL == file) { //score.dat에 점수 저장, 없으면 파일 에러메세지  
    //    printf("FILE ERROR: SYSTEM CANNOT WRITE BEST SCORE ON \"SCORE.DAT\"");
    //}
    //else {
    //    scores[score_cnt] = score;
    //    score_cnt++;
    //    //fwrite(&score, sizeof(int), 1, file);
    //    fwrite(scores, sizeof(int), 10, file);
    //    
    //    fclose(file);
    //}
}

void check_score(void)
{
    printf("------점수판--------\n\n");
    for (int i = 0; i < score_cnt; i++)
    {       
        printf("Score : %d\n\n", scores[i]);
    }
    
    //FILE* file = NULL;
    //fopen_s(&file, "score.dat", "rb");
    //int temp[10] = { 0 };
    ////fread(&score, sizeof(int), 1, file);
    //fread(scores, sizeof(int), 10, file);
    //
    //for (int i = 0; i < 10; ++i) {
    //    printf("Score : %d\n\n", temp[i]);
    //}

    //fclose(file);

}

