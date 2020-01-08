#include<stdio.h>
int main(void)
{
    int array[2][2] = {10, 20, 30, 40};

    printf("%x %x %x \n", array[0], *(array + 0), *array); // * 기호 사용
    printf("%x %x \n", array[1], *(array + 1)); // * 기호 사용

    return 0;
}