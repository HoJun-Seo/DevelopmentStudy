#include<stdio.h>
int main(void)
{
    int array[2][2] = {10, 20, 30, 40};

    printf("%x %x %x \n", array[0], *(array + 0), *array); // * ��ȣ ���
    printf("%x %x \n", array[1], *(array + 1)); // * ��ȣ ���

    return 0;
}