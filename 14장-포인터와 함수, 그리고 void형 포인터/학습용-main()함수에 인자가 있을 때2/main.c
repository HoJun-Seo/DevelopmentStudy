#include<stdio.h>
int main(int argc, char*argv[])
{
    int i = 0;
    if(argc > 4)
    {
        printf("문자열의 수가 너무 많습니다. \n");
        printf("프로그램을 종료합니다. \n");
        return 1;
    }

    printf("0 번째 문자열 : %s \n", argv[0]);
    printf("1 번째 문자열 : %s \n", argv[1]);
    printf("2 번째 문자열 : %s \n", argv[2]);
    printf("3 번째 문자열 : %s \n", argv[3]);

    return 0;
}