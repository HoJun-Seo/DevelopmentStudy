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
    int num1;
    scanf("%d", &num1);
    return &num1; //지역변수의 주소를 반환해서 경고가 발생한다.
}