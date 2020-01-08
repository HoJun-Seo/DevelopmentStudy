#include<stdio.h>
int main(void)
{
    int array[2][2] = {10, 20, 30, 40};

    printf("%x %x \n", array, array+0); //0행의 시작주소
    printf("%x \n", array+1); //1행의 시작주소

    return 0;
}