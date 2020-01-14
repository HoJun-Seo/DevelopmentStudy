#include<stdio.h>
int main(void)
{
    int array[3] = {10, 20, 30};
    int* ip = NULL;
    int** ipp = NULL;

    ip = array;
    ipp = &ip;

    printf("%d %d %d\n", *(*ipp + 0), *(*ipp + 1), *(*ipp + 2));
    return 0;
}