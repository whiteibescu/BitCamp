#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
    upper_to_lower_p();
}

// 2. 대문자는 소문자로, 소문자는 대문자로
int upper_to_lower_p() {
    char* str = (char*)malloc(100);
    printf("문자열 입력->");
    scanf_s("%s", str, strlen(str));

    for (int i = 0; i < (signed)strlen(str); i++) {
        if (*(str + i) <= 'Z' && *(str + i) >= 'A') {
            *(str + i) += 32;
        }
        else if (*(str + i) <= 'z' && *(str + i) >= 'a') {
            *(str + i) -= 32;
        }
    }
    printf("최종 문자열: %s\n", str);

    return 0;
}
