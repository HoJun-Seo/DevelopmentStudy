#include<stdio.h>
int main(void)
{
    char* p = "ABCD"; //포인터 변수 p 에 문자열 상수 ABCD 의 시작주소를 저장하라.

    printf("%s\n", p);
    printf("%s\n", p + 1);
    printf("%s\n", p + 2);
    printf("%s\n", p + 3);

    return 0;
}