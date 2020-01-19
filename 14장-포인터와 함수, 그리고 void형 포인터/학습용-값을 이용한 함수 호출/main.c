#include<stdio.h>
int func(int i);
int main(void)
{
    int a = 10;
    int result = 0;

    result = func(a);
    printf("%d \n", result);
    printf("%d \n", a);

    return 0;
}

int func(int i)
{
    i = i + 1;
    return i; 
}