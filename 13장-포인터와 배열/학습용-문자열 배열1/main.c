#include<stdio.h>
int main(void)
{
    char array[] = "ABCD";

    printf("%c %c %c %c %c\n", array[0], array[1], array[2], array[3], array[4]);
    printf("%d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);

    printf("%d \n", sizeof(array));

    return 0;
}