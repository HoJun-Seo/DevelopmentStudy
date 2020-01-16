#include<stdio.h>
int main(void)
{
    int array[2][3] = {10, 20, 30, 40, 50, 60};
    int* p = NULL;

    p = array;

    printf("%d %d %d\n", p[0][0], p[0][1], p[0][2]); //에러 발생 - 2차원 배열에 1차원 포인터 변수로 접근하였기 때문
    printf("%d %d %d\n", p[1][0], p[1][1], p[1][2]); //에러 발생 - 2차원 포인터 변수로 접근하여도 에러가 발생한다.

    return 0;
    
}