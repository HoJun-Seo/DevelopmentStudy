#include<stdio.h>
int main(void)
{
    int num1 = 10;
    int* ip1 = NULL;
    int** ip2 = NULL;
    int*** ip3 = NULL;

    ip1 = &num1;
    ip2 = &ip1;
    ip3 = &ip2;

    printf("1단계, 직접 접근 : %d\n", num1);
    printf("2단계, 1차원 포인터 접근 : %d\n", *ip1);
    printf("3단계, 2차원 포인터 접근 : %d\n", **ip2);
    printf("4단계, 3차원 포인터 접근 : %d\n", ***ip3);

    return 0;
}