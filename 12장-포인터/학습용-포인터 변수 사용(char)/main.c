#include<stdio.h>
int main(void)
{
    char c = 'A';
    char* cp = NULL;

    cp = &c;

    printf("%x %c %c \n", &c, c, *&c);
    printf("%x %x %x \n", &cp, cp, *&cp);

    printf("%c \n", c);
    printf("%c \n", *cp);

    return 0;
}