/* 
<���� ���>
w : write  ���ξ���
r : read   �б�
a : append �߰��ϱ�

t : �ѱ�, ����(����� ����ϴ� ����(��))
b : ����, ����ü, �迭(�޸��� ��Ʈ/����Ʈ)
*/
#include <stdio.h>

void main()
{
	// 1) ��Ʈ�� ����
	FILE* fp = NULL;
	fopen_s(&fp, "test.txt", "at");

	// 2-1) ���� ����
	fputc('A', fp); fputc('\n', fp);
	fputc('B', fp); fputc('\n', fp);

	// 2-2) ���ڿ� ����
	fputs("I Love You!\n", fp);
	fputs("ȫ�浿\n", fp);
	fputs("�Ӳ���\n", fp);
	fputs("����\n", fp);

	// 3) ��Ʈ�� ����
	fclose(fp);
}