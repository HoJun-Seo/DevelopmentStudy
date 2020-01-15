#include<stdio.h>
int main(void)
{
    int array[3] = {10, 20, 30};
    int* p = NULL;
    p = array;

    printf("%d %d %d\n", array[0], array[1], array[2]);
    printf("%d %d %d\n", *(array + 0), *(array + 1), *(array + 2));
    printf("%d %d %d\n", p[0], p[1], p[2]);
    printf("%d %d %d\n", *(p + 0), *(p + 1), *(p + 2));

    printf("배열의 크기 : %d 포인터의 크기 : %d \n", sizeof(array), sizeof(p));

    return 0;
}