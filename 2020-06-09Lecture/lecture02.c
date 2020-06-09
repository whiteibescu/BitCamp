#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h> 
#include <ctype.h>

int main(void) {

	FILE* fp = NULL;
	//파일열기
	fopen_s(&fp, "demo.txt", "a"); // char * : ""
	if (fp == NULL) {
		printf("not found error: %s \n", "demo.txt");
		return 0;
	}
	fprintf(fp, " korea %d %s \n", 100, " bitcamp");
	fclose(fp);
	return 0;
}


	


