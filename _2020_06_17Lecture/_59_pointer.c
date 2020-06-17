/* C, C++에는 현대의 다른 Language와 다르게
 포인터라는 개념이 존재한다.
 포인터는 메모리의 위치를 의미한다.
 -변수의 위치, 배열의 위치, 함수의 위치...

 포인터 : 레이저 포인터, 잉글리시 포인터
 영국 멧돼지 사냥 : 그레이하운드, 잉글리시 포인터

 포인터 변수 : 위치정보만 담을 수 있다.
              주소(Address)
*/

#include <stdio.h>

void main()
{
    int num = 10;
    int num1 = 100;
    /* 아무것도 지칭하지 않는다
      -int변수의 주소를 담는다
      -int배열의 주소를 담는다
    */
    int* ptr = NULL;   
    // 값이 아니라 주소번지 100위치라는 의미
    //ptr = 100;
    ptr = &num;

    // 주소를 통해 원래 변수를 접근할 수 있다.
    printf("%d\n", *ptr);

    ptr = &num1;
    printf("%d\n", *ptr);
}