#include<stdio.h>
int main(void)
{
    char* array1 = "ABCD";
    char array2[] = "ABCD";

    array1[0] = 'X'; //문자열 상수 변경 불가.
    array2[0] = 'X';

    return 0;
}