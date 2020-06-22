typedef enum _DIRECT {
	TOP, LEFT_TOP, LEFT_DOWN, DOWN, RIGHT_DOWN,
	RIGHT_TOP
} DIRECT;

typedef struct _BALL
{
	int nReady; // 1 이면 준비 상태, 0이면 이동 상태
	int? nHP;?? // 생명
	int? nX, nY; // 좌표
	DIRECT? nDirect; // 이동 방향
	clock_t? MoveTime; // 이동 시간 간격
	clock_t? OldTime;?// 이전 이동 시각
} BALL;

