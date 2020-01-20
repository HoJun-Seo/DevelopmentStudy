#include<stdio.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p1 = {10, 20};
    printf("%d %d \n", p1.x, p1.y);

    return 0;
}