#include <stdio.h>
int main(void) {

}


    // 5. Ű�� ������ �Է� �Լ�

    typedef struct _inbody {
        int height;
        int weight;
    } inbody;

    int set_h_and_w(int height, int weight) {

        inbody* client = malloc(sizeof(inbody));
        client->height = height;
        client->weight = weight;
        printf("Ű: %d, ������: %d\n", client->height, client->weight);
        free(client);
        return 0;
    }
