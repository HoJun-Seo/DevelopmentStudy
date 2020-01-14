#include<stdio.h>
int main(void)
{
    int num1 = 10;
    int* ip1 = NULL;
    int** ip2 = NULL;
    int*** ip3 = NULL;

    ip1 = &num1;
    ip2 = &ip1;
    ip3 = &ip2;

    printf("%x %x %x %x \n", &num1, &ip1, &ip2, &ip3);
    printf("%d %x %x %x \n", num1, ip1, ip2, ip3);

    return 0;
}