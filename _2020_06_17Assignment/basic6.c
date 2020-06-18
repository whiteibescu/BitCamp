// 6. A를 이용하여 B값 채우기 (2*4 -> 4*2)
int reverse_matrix_p() {
    int arrA[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int** arrB = (int**)malloc(sizeof(int*) * 4);

    for (int i = 0; i < 4; i++) {
        arrB[i] = (int*)malloc(sizeof(int) * 2);
        for (int j = 0; j < 2; j++) {
            *(*(arrB + i) + j) = *(*(arrA + j) + i);
            printf("%d ", *(*(arrB + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        free(arrB[i]);
    }
    free(arrB);

    return 0;
}


int main(void) {
    // arithmetics_p();
    // upper_to_lower_p();
    // sec_to_time_p(1000000);
    /*
    int time[3] = { 2, 46, 40 };
    time_to_sec_p(time);
    */
    // set_h_and_w(190, 80);
    reverse_matrix_p();
}