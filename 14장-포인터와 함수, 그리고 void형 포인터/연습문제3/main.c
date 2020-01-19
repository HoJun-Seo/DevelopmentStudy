#include<stdio.h>

void swap(int count, int* p, int i);
int main(void)
{
    int i = 7, j = 0, count = 0;
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int* p = array;

    printf("몇번 이동하시겠습니까? : ");
    scanf("%d", &count);
    swap(count, array, i);
    return 0;
}

void swap(int count, int* p, int i)
{
    int j = 0;
    int temp;
    for(j = 0; j < count; j++)
    {
        temp = p[7];
        for(i = 7; i > 0; i--)
        {
            p[i] = p[i - 1];
        }
        p[0] = temp;
        for(i = 0; i < 8; i++)
        {
            printf("%d ", p[i]);
        }
        printf("\n");
    }
}