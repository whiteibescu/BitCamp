#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1)
typedef struct _fileheader {
	char data[14];
}BFH;

typedef struct _infoheader {
	char data[40];
}BIH;

typedef struct _rgb {
	char data[3];
}RGB;

typedef struct _bmpImage {
	BFH fh;
	BIH IH;
	RGB* table;
}BMP;


int main(void)
{
	BMP bmp = { 0 };
	printf("%d \n", sizeof(BMP));
	printf("%d \n", sizeof(bmp));
	//bmp �� ��� table�� RGB�� ��ҷ� �ϴ� ���� 512 �� �迭 ����
	RGB pixel[512];
	bmp.table = pixel; //pixel + 0 == &pixel[0]


	// �����Ҵ�
	bmp.table = (RGB*)
}
	