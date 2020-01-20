#include<stdio.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p1 = {10, 20};
    struct point p2 = {0, 0};

    p2 = p1;//구조체 변수 대입 연산,
            //구조체 변수들은 사용자 자료형 이기 때문에 사칙연산과 같은 연산은 불가능하다.

    printf("%d %d \n", p1.x, p1.y);
    printf("%d %d \n", p2.x, p2.y);

    return 0;
}