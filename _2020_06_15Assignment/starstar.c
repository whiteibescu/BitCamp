#include <stdio.h>


//1.������ �ΰ� ����
//2.���簢�� ����ϱ�
//3.printf("\n"); �����ϱ�
//4.n �� �Է¹ޱ�



// �簢�� �����


//void main() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}



//void main() {
//    for (int i = 0; i < 5; i++) {					
//        for (int j = 0; j <= i; j++) {			 
//            printf("*");
//        }
//        printf("\n");
//    }
//}




void main() {

    int n;
    printf("�� ��� ȸ���� �Է����ּ��� : ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}