#include <stdio.h>

void main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "data.bin", "wb");

	// �޸𸮿� �����ϴ� ������ ��Ʈ��
	// ���Ͽ� �����ϰ� ����
	int num = 999;
	double fnum = 3.14;
	char ch = 'A';
	int arr[3] = { 10, 20, 30 };

	fwrite(&num, sizeof(num), 1, fp);
	fwrite(&fnum, sizeof(fnum), 1, fp);
	fwrite(&ch, sizeof(ch), 1, fp);
	fwrite(arr, sizeof(int), 3, fp);

	fclose(fp);
}