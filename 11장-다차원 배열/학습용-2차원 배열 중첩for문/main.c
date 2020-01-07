#include<stdio.h>
int main(void)
{
    int array[2][2];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("정수를 입력하세요 : ");
            scanf("%d", &array[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}