#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void)
{
    upper_to_lower_p();
}

// 2. �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ�
int upper_to_lower_p() {
    char* str = (char*)malloc(100);
    printf("���ڿ� �Է�->");
    scanf_s("%s", str, strlen(str));

    for (int i = 0; i < (signed)strlen(str); i++) {
        if (*(str + i) <= 'Z' && *(str + i) >= 'A') {
            *(str + i) += 32;
        }
        else if (*(str + i) <= 'z' && *(str + i) >= 'a') {
            *(str + i) -= 32;
        }
    }
    printf("���� ���ڿ�: %s\n", str);

    return 0;
}
