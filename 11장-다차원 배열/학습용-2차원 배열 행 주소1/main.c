#include<stdio.h>
int main(void)
{
    int array[2][2] = {10, 20, 30, 40};

    printf("%x %x \n", array[0], &array[0][1]);
    printf("%x %x \n", array[1], &array[1][0]);

    return 0;
}