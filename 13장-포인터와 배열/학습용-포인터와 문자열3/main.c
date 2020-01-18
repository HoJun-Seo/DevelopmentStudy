#include<stdio.h>
int main(void)
{
    char* p = "ABCD";

    printf("%x\n", p);
    printf("%x\n", p + 1);
    printf("%x\n", p + 2);
    printf("%x\n", p + 3);
    printf("%x\n", p + 4);
    printf("-----------------------\n");

    printf("%x %x\n", &"ABCD", p);

    return 0;
}