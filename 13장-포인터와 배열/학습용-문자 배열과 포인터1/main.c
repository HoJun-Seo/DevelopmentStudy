#include<stdio.h>
int main(void)
{
    char array[] = {'A', 'B', 'C', 'D'};

    printf("문자 상수 : %c %c %c %c \n", 'A', 'B', 'C', 'D');
    printf("문자 배열 변경 전 : %c %c %c %c\n", array[0], array[1], array[2], array[3]);

    array[0] = 'D';
    array[1] = 'C';
    array[2] = 'B';
    array[3] = 'A';

    printf("문자 배열 변경 후 : %c %c %c %c\n", array[0], array[1], array[2], array[3]);
    printf("문자 배열 array의 크기 : %d \n", sizeof(array));

    return 0;
}