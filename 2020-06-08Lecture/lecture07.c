#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_array(){
// ���ڿ� 3���� �Է¹޾� ����ϼ���
	char s1[80];
	char s2[80];
	char s3[80];
	printf("string > ");
	fgets(s1, sizeof(s1), stdin);
	printf("string > ");
	fgets(s2, sizeof(s3), stdin);
	printf("string > "); 
	fgets(s2, sizeof(s3), stdin);

	fputs(s1, stdout); //file (, FILE stream);
	fputs(s2, stdout); //
	fputs(s3, stdout);
	
	return 0;
}
int string_loop() {
	// ���ڿ� 5���� �����ϴ� �迭
	char list[5][80];
	for (int i = 0; i < 5; ++i) {
		printf("string >");
		fgets(list[i], sizeof(list[i]), stdin);
	}

	for (int i = 0; i < 5; ++i) {
		printf("string >");
		fgets(list[i], sizeof(list[i]), stdout);
	}
	
	return 0;

}

int string_points() {
	//������ �迭 : ������ �������� ���� ������ �ִ�...
	char* pl[5];
	for (int i = 0; i < 5; ++i) {
		printf("string >");
		pl[i] = (char*)malloc(80);
		fgets(pl[i], 80, stdin);

	}

	for (int i = 0; i < 5; ++i) {
		fputs(pl[i], stdout);
	}

	for (int i = 0; i < 5; ++i) {
		free(pl[i]);
	}
	




	return 0;
}



int string_dynamic() {
	char** ap = NULL; //������ �迭 (����)
	int count;
	printf("���ڿ� �Է°��� : ");
	scanf_s("%d", &count);
	ap = (char**)malloc(count * sizeof(*ap)); //�����Ͱ� ����Ű�� ������ ũ��?

	for (int i = 0; i < count; ++i)
	{
		printf("string >");
		ap[i] = (char*)malloc(80);
		fgets(ap[i], 80, stdin);
				
	}

	for (int i = 0; i < count; ++i) {
		fputs(ap[i], stdout);
	}

	for (int i = 0; i < count; ++i) { // ������ ��Һ��� ���� �ϰ�
		free(ap[i]);
	}
	free(ap);						//����


	return 0;
}

//�迭���� �ּҴ�
char* toString() { //���ڿ��� ��ȯ�ϴ� �Լ�
	// ���������� �Լ� ���� �� �������...
	// �����Ҵ� - ���� �����Ǿ �Լ��ʹ� ���� ���� ����
	char * name = (char*)malloc(80)
	// ���ڿ��� ����(����)
	//name = "jangs ma"; // �迭���� �����... ���Կ��� �Ұ�
	
	strncpy(name, "jangs ma", 80); // ���ڿ� ���� �� 

	free(name);

	return NULL; //�ּҰ� ���� = 
}

int getString(char *param, int size) {  //���ڿ��� �޴� �Լ�
	int i;
	for (int i = 0; i < sizeof(param) / sizeof(char); ++i) {
		param[i] = '0' + i;
	}
	param[i] = 0;
	return 0;

	return 0;
}


int main(void) {
	 
	char * p = toString();
	if (p == NULL) { //�� Ȯ���ϱ�..
		printf("���ڿ��� ����\n");
	}
	else {
	printf("%s \n", p);
	free(p);
	}
	char name[80]
	getString(name);//�迭��, ����
	printf("%s ")

	return 0;
}

