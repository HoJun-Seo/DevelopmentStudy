#include<stdio.h>
int main(void)
{
        int array1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        int array2[4][3] = {1, 2, 3, 4, 5};

        printf("%d %d %d \n", array1[0][0], array1[0][1], array1[0][2]);
        printf("%d %d %d \n", array1[1][0], array1[1][1], array1[1][2]);
        printf("%d %d %d \n", array1[2][0], array1[2][1], array1[2][2]);
        printf("%d %d %d \n", array1[3][0], array1[3][1], array1[3][2]);

        printf("--------------------------------------------------------\n");

        printf("%d %d %d \n", array2[0][0], array2[0][1], array2[0][2]);
        printf("%d %d %d \n", array2[1][0], array2[1][1], array2[1][2]);
        printf("%d %d %d \n", array2[2][0], array2[2][1], array2[2][2]);
        printf("%d %d %d \n", array2[3][0], array2[3][1], array2[3][2]);

        return 0;
}