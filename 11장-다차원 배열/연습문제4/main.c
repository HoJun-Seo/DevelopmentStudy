#include<stdio.h>
int main(void)
{
    int i = 0, j = 0;
    int array[4][3] = {{23, 75, 85},{12, 77, 51},{25, 66, 30},{19, 90, 88}};
    int array2[4][3] = {{11, 15, 47}, {74, 85, 69}, {57, 86, 28}, {90, 22, 33}};


    printf("4행 3열인 2차원 배열의 합을 구하는 프로그램 입니다.\n 배열의 요소는 미리 설정되어 있습니다.\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", array[i][j] + array2[i][j]);
        }
        printf("\n");
    }

    return 0;
}