#include<stdio.h>
int main(void)
{

    int i = 0, j = 0;
    int temp;
    int array[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int array2[4][2] = {{1, 1}, {1, 1}, {1, 1}, {1, 1}};
    int array3[4][2];

    for( ; i < 2; i++){
        for(j = 0; j < 4; j++){
            array3[j][i] = array[i][j] * array2[j][i];
        }
    }


    for(i = 0; i < 4; i++){
            temp = array3[i][0];
            array3[i][0] = array3[i][1];
            array3[i][1] = temp;
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }

    return 0;

}