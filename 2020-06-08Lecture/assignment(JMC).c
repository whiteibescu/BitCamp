include <stdio.h>#include <stdlib.h>
#include <string.h>

int main(void) {
    char ch;
    int digit = 0;
    int alpha = 0;
    int words = 0;
    // 8byte 정수
    long long number = 0;

    /*
    1. 숫자에 알파벳이 하나라도 섞이면 단어로 취급한다
    2. 단어는 100자, 숫자는 19자리(2^63) 미만으로 제한된다
    3. 단일 공백이나 의미없는 줄바꿈은 단어로 취급하지 않는다
    */

    // 100글자 문자열 동적 할당
    char* str = (char*)malloc(sizeof(char) * 100);
    // 동적 할당된 포인터는 '=' 으로 할 수 없으므로 1길이의 빈 문자열을 복사한다
    // 문자열 복사 함수: strcpy_s(destination, size(byte), source)
    strcpy_s(str, 1, "");

    // EOF(^Z)가 나올때 까지 줄 단위로 입력 받되, 제일 앞의 문자부터 하나씩 꺼내서 체크한다
    while ((ch = getchar()) != EOF) {
        // 현재 문자가 알파벳이나 숫자이면,        if (ch >= 'A' && ch <= 'z' || ch >= '0' && ch <= '9') {
            // 특히 알파벳이면            if (ch >= 'A' && ch <= 'z') {
                // 알파벳 수 증가
                alpha++;
            }

            // 받은 1개의 문자에 END 문자를 붙여 2길이의 문자열로 만든다
            // 문자열 연산을 위해 문자열로 만듬
            char ch_to_str[2];
            ch_to_str[0] = ch;
            ch_to_str[1] = '\0';

            // 빈 문자열에 순서대로 더한다
            // -> 알파벳이나 숫자가 아닌게 나올때까지 문자를 계속 연결한다
            // 문자열 연결 함수: strcat_s(destination, size(bytes), source)
            // 뒤의 문자를 앞의 문자에 더함
            strcat_s(str, 100, ch_to_str);
        }

        // 공백 문자나 줄바꿈 문자를 만나면,
        if (ch == ' ' || ch == '\n') {

            // - 현재 문자'열'이 숫자인지 판단한다
            // 문자열->숫자 함수: _atoi64(string)
            // 이름 그대로 a to i. 원형은 atoi()이며, long long에 대응하기위해 추가된 함수이다.
            // 문자로 시작하면 0 리턴, 숫자로 시작했지만 문자가 섞인 경우에는 문자가 처음 나오기 직전까지 숫자로 변환
            long long atoi_res = _atoi64(str);
            // 100의 자리에 대응하기 위한 새 문자열 동적 할당            char* itoa_res = (char*)malloc(100);
            // 숫자->문자열 함수: _i64toa_s(src, dst, size(bytes), radix(진수))
            // 원형은 itoa()이고, long long과 버퍼오버플로우에 대응하기위해 추가된 함수
            _i64toa_s(atoi_res, itoa_res, 100, 10);

            // 비교하여 같으면, (문자열 비교 함수: strcmp(str1, str2).
            // ASCII 기준으로 같으면 0, str1 < str2이면 -1, str1 > str2이면 1 리턴.
            if (strcmp(itoa_res, str) == 0) {
                // 숫자로 취급하여 숫자는 증가시키고
                digit++;
                // 단어는 감소시킨다(현재 조건없이 공백 만날때마다 증가하고있으므로 +-0으로 만듬)
                words--;
                // 숫자이므로 기존 숫자의 합에 더하여 대입한다
                number += atoi_res;
            }

            // 규칙 2의 의미없는 공백이나 줄바꿈이 생기는 경우
            if (strcmp(str, "") == 0) {
                // 감소시켜 무효화한다(+-0)
                words--;
            }

            // 빠져나가기 전에 문자열을 빈 문자열로 초기화한다
            strcpy_s(str, 1, "");            // 어쨌든 문자열이니 증가시킨다(위에서 자꾸 감소시키게 되는 원인)            words++;

            // 동적 할당 했으니 해제한다
            free(itoa_res);       // 공백이니 문자열 그만 붙이고 while문 마저 돌린다
            continue;
        }
    }

    printf("숫자 수: %d\n", digit);
    printf("알파벳 수: %d\n", alpha);
    printf("단어 수: %d\n", words);
    printf("숫자들의 합: %lld\n", number);

    printf("\n");

    free(str);

    return 0;
}  




