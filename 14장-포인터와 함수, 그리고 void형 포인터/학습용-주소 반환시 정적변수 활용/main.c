#include<stdio.h>

int* input();

int main(void)
{
    int* p = NULL;

    p = input();
    printf("%d \n", *p);

    return 0;
}

int* input()
{
    static int num1; //정적 변수 선언 - 함수가 종료되어도 메모리 공간이 소멸되지 않고 남기 때문에 경고가 발생하지 않는다.
    scanf("%d", &num1);
    return &num1;
}