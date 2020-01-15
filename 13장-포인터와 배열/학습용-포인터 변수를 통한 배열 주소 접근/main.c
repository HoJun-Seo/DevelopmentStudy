#include<stdio.h>
int main(void)
{
    int array[3] = {10, 20, 30};
    int* p = NULL;

    p = array;

    printf("%x %x %x\n", p, p + 0, &p[0]);
    printf("%x %x\n", p + 1, &p[1]);
    printf("%x %x\n", p + 2, &p[2]);

    return 0;
}