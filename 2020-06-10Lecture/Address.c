#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//헤더선언
struct list//구조체 선언
{
    char name[100];
    char address[100];
    char tel[100];
    char number[100];//크기가 100인 배열로 이름,주소,번호,학번 변수 선언

};

int main()
{
    int a, b, c, d, e, g, h, i, j;//변수선언
    int f = 0;
    struct list data[1000];//구조체의 크기
    char str[10];//구조체의 크기
    FILE* list;//파일의 list 포인터


    while (1)
    {
        printf("--------------------------E주소록------------------------\n\n");
        printf("   ① 주소록 보기\n     \n");
        printf("   ② 주소록 검색\n     \n");
        printf("   ③ 주소록 추가\n     \n");
        printf("   ④ 주소록 수정\n     \n");
        printf("   ⑤ 주소록 삭제\n     \n");
        printf("   ⑥ 종       료\n     \n");
        printf("------------------------------------------------------------\n");
        scanf("%d", &a);

        switch (a)
        {
        case 1://주소 보기
            system("mode con: cols=150 lines=700");//디버깅창 크기지정
            list = fopen("c:\\ecomsw.txt", "r");//텍스트 파일을 읽기모드로 불러오기
            for (b = 0;; b++)
            {
                fscanf(list, "%s %s %s %s", &data[b].name, &data[b].number, &data[b].tel, &data[b].address);
                //fscanf = 해당파일에 있는 문자를 프로그램안으로 가져온다.
                //&data[b].name,&data[b].number,&data[b].tel,&data[b].address에 불러온 문자열을 저장한다.


                if (feof(list))//list구조체를 끝낸다.
                {
                    break;
                }

            }
            for (c = 0; c < b; c++)
                printf("%s  %s  %s  %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);//저장받은 값들을 출력한다.
            fclose(list);//텍스트 파일 닫기
            break;

        case 2://주소 찾기
            system("mode con: cols=150 lines=700");//디버깅창 크기 지정
            list = fopen("c:\\ecomsw.txt", "r"); //텍스트 파일 구조체로 열기
            printf("① 이름으로 검색하기^▽^\n");
            printf("② 학번으로 검색하기^0^\n");
            scanf("%d", &d);
            switch (d)
            {
            case 1: //이름으로 찾기
                printf("이름을 입력하세여!!");
                scanf("%s", str);
                for (c = 0; c < b; c++)
                    if (strncmp(data[c].name, str, 6) == 0)//strncmp() = 다른 문자열과 비교하는 함수
                     //name와str이 6크기까지 같은지 비교한다.
                    {
                        printf("__________________________________________\n");
                        printf("이름 : %s\n학번 : %s\n번호 : %s\n주소 : %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);
                        printf("__________________________________________\n");
                    }

                break;
            case 2: //학번으로 찾기
                printf("학번을 입력하세여!!");
                scanf("%s", str);
                for (c = 0; c < b; c++)
                    if (strncmp(data[c].number, str, 7) == 0)//학번으로 찾는방법!
                    {
                        printf("__________________________________________\n");
                        printf("이름 : %s\n학번 : %s\n번호 : %s\n주소 : %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);
                        printf("__________________________________________\n");
                    }

                break;
                fclose(list);//파일 닫기
            }
            break;

        case 3://주소 추가
            e = b + f;
            list = fopen("c:\\ecomsw.txt", "ab+");//txt파일 열기 ab+로 원본txt파일위에 덮어쓰지않고 제일 밑에 추가됨
            printf("이름 : ");
            scanf("%s", data[e].name);
            printf("학번 : ");
            scanf("%s", data[e].number);
            printf("번호 : ");
            scanf("%s", data[e].tel);
            printf("주소 : ");
            scanf("%s", data[e].address);

            gets(str);//문자열 입력



            fprintf(list, "%s %s %s %s\n", data[e].name, data[e].number, data[e].tel, data[e].address);
            printf("☆추카추카 입력성공!!☆\n");

            fclose(list);
            f++;
            break;

        case 4://주소 수정
            printf("수정할 이름을 입력하세여!!");
            scanf("%s", str);
            for (i = 0; i < b; i++)
            {
                if (strncmp(data[i].name, str, 6) == 0)
                {
                    g = i;

                }
            }
            printf("수정해볼께여!!\n\n1:이름\n2:학번\n3:번호\n4:주소\n");
            scanf("%d", &h);
            switch (h)
            {
            case 1:
                printf("이름: ");
                scanf("%s", &data[g].name);
                printf("☆수정완료☆\n");
                break;
            case 2:
                printf("학번: ");
                scanf("%s", &data[g].number);
                printf("☆수정완료☆\n");
                break;
            case 3:
                printf("번호: ");
                scanf("%s", &data[g].tel);
                printf("☆수정완료☆\n");
                break;
            case 4:
                printf("주소: ");
                scanf("%s", &data[g].address);
                printf("☆수정완료☆.\n");
                break;
            }
            list = fopen("c:\\ecomsw.txt", "w");
            for (c = 0; c < b; c++)
            {
                fprintf(list, "%s %s %s %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);
            }
            fclose(list);
            break;

        case 5://주소 삭제
            printf("삭제하실분 이름을 입력하세여!!");
            scanf("%s", &str);
            for (i = 0; i < b; i++)
            {
                if (strncmp(data[i].name, str, 6) == 0)
                {
                    for (j = i + 1; j <= b; j++)
                    {
                        strcpy(data[j - 1].name, data[j].name);//data[j].name문자열에 null문자가 나올때까지 data[j-1].name에 복사하는 함수
                        strcpy(data[j - 1].number, data[j].number);
                        strcpy(data[j - 1].tel, data[j].tel);
                        strcpy(data[j - 1].address, data[j].address);
                    }
                    b--;
                }
                list = fopen("c:\\ecomsw.txt", "w");
                for (c = 0; c < b; c++)
                {
                    fprintf(list, "%s %s %s %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);
                }
                fclose(list);
            }
            break;

        case 6://주소록 종료
            exit(0);


        }

    }


    return 0;
}