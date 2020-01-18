#include<stdio.h>
int main(void)
{
    char array[] = "ABCD";

    printf("%s\n", array); //%s - 문자열의 시작주소를 입력받아 종료 문자까지 문자열을 출력해준다.
    printf("%s\n", array + 1);
    printf("%s\n", array + 2);
    printf("%s\n", array + 3);

    return 0;
}