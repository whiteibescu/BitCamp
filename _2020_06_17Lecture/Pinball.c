typedef enum _DIRECT {
	TOP, LEFT_TOP, LEFT_DOWN, DOWN, RIGHT_DOWN,
	RIGHT_TOP
} DIRECT;

typedef struct _BALL
{
	int nReady; // 1 �̸� �غ� ����, 0�̸� �̵� ����
	int? nHP;?? // ����
	int? nX, nY; // ��ǥ
	DIRECT? nDirect; // �̵� ����
	clock_t? MoveTime; // �̵� �ð� ����
	clock_t? OldTime;?// ���� �̵� �ð�
} BALL;

