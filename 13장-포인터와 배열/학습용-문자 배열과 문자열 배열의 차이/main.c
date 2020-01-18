#include<stdio.h>
int main(void)
{
    char array1[] = {'A', 'B', 'C', 'D', '\0'};
    char array2[] = {'A', 'B', 'C', 'D'};

    printf("%s\n", array1);
    printf("%s\n", array2);

    return 0;
}