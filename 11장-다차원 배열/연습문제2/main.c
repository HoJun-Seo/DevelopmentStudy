#include<stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 1;
    int total = 0;
    int array[3][3];

    for(i = 2; i >= 0; i--){
        for(j = 0; j < 3; j++){
            printf("%d층 %d호의 가족은 몇 명 입니까? : ", k, j + 1);
            scanf("%d", &array[i][j]);
        }
        k++;
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            total = total + array[i][j];
        }
    }
    printf("열혈 아파트 총 주민 수는 %d 명 입니다. \n", total);

    return 0;
}