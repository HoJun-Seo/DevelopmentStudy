#include<stdio.h>
int main(void)
{
    char array[] = "ABCD";

    array[0] = 'X';
    printf("%s \n", array);

    return 0;
}