#include <stdio.h>

void main()
{
	// 1) ��Ʈ�� ����
	FILE* fp = NULL;
	fopen_s(&fp, "test.txt", "rt");

	// 2) ���� �б�
	// 2-1) 1���ھ� �б�
	int ch = fgetc(fp);  printf("%c", ch);
	ch = fgetc(fp);  printf("%c", ch);
	ch = fgetc(fp);  printf("%c", ch);
	ch = fgetc(fp);  printf("%c", ch);

	// 2-2) 1���ξ� �б�
	while (1)
	{
		char str[100] = { 0 };
		fgets(str, sizeof(str) - 1, fp);
		printf("%s", str);

		// ������ ��(�� �̻� ���� ������ ����)
		if (feof(fp) != 0)
			break;
	}

	// 3) ��Ʈ�� ����
	fclose(fp);
}