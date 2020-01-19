#include<stdio.h>
#include<stdlib.h>

int func(int* i);

void main()
{
    int a = 10;
    int result = 0;

    result = func(&a);
    printf("%d \n", result);
    printf("%d \n", a);

    exit(0);   
}

int func(int* i)
{
    *i = *i + 1;
    return *i;
}