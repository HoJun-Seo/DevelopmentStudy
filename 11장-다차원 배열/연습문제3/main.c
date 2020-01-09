#include<stdio.h>
int main(void)
{
    int i = 0, j = 0;
    int row = 0, col = 0;
    int array[9][9];
    for(i = 1; i < 10; i++){
        for(j = 1; j < 10; j++){
            array[col][row] = i * j;
            row++;
        }
        col++;
        row = 0;
    }
    for(col = 0; col < 9; col++){
        for(row = 0; row < 9; row++){
            printf("%d ", array[col][row]);
        }
        printf("\n");
    }

    return 0;

}