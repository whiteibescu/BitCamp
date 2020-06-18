#include <stdio.h>
int main(void) {

}


    // 5. 키와 몸무게 입력 함수

    typedef struct _inbody {
        int height;
        int weight;
    } inbody;

    int set_h_and_w(int height, int weight) {

        inbody* client = malloc(sizeof(inbody));
        client->height = height;
        client->weight = weight;
        printf("키: %d, 몸무게: %d\n", client->height, client->weight);
        free(client);
        return 0;
    }
