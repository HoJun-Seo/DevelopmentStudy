#include<stdio.h>
int main(void)
{
    int array[3] = {10, 20, 30};
    int* p = NULL;

    p = array;
    printf("%d %d %d\n", p[0], p[1], p[2]);
    printf("%d %d %d\n", *p, *(p + 1), *(p + 2));

    printf("---------------------------------\n");

    p = p + 1;
    printf("%d %d %d\n", p[-1], p[0], p[1]);
    printf("%d %d %d\n", *(p-1), *p, *(p + 1));

    printf("---------------------------------\n");

    p = p + 1;
    printf("%d %d %d\n", p[-2], p[-1], p[0]);
    printf("%d %d %d\n", *(p-2), *(p - 1), *p);

    printf("---------------------------------\n");

    return 0;
}