#include<stdio.h>
int main(void)
{
    char array[] = "ABCD";
    char* p = "ABCD";

    p[0] = 'X';
    array[0] = 'X';

    p = array;
    array = array + 1; //배열 이름은 상수 이므로 변경이 불가능하다.
    printf("%s\n", p);
    printf("%s\n", array);

    return 0;
}