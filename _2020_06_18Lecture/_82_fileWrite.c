/* ���������
; 1) ���� ����, �б�
  2) 3�ܰ�
     2-1) ��Ʈ�� ����
	 2-2) ���ų� �аų�
	 2-3) ��Ʈ�� �ݱ�
*/
#include <stdio.h>

void main()
{
	// 1) test.txt���Ͽ� ��Ʈ���� �����Ѵ�
	// write, text ���� 
	FILE* fp = NULL;
	fopen_s(&fp, "test.txt", "wt");

	fputc('A', fp);

	// 3) ��Ʈ�� �ݱ�
	fclose(fp);
}