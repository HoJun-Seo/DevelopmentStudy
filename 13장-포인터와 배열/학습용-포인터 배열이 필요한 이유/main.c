#include<stdio.h>
int main(void)
{
    int a = 10, b = 20, c = 30;
    int* ap = NULL;
    int* bp = NULL;
    int* cp = NULL;

    ap = &a;
    bp = &b;
    cp = &c;

    printf("%d %d %d\n", a, b, c);
    printf("%d %d %d\n", *ap, *bp, *cp);

    printf("%x %x %x\n", &a, &b, &c);
    printf("%x %x %x\n", ap, bp, cp);
    printf("%x %x %x\n", &ap, &bp, &cp);

    return 0;
}