#include<stdio.h>
int main(void)
{
    int i = 0, j = 0, k = 1;
    int total = 0;
    int array[3][3];

    for(i = 2; i >= 0; i--){
        for(j = 0; j < 3; j++){
            printf("%d�� %dȣ�� ������ �� �� �Դϱ�? : ", k, j + 1);
            scanf("%d", &array[i][j]);
        }
        k++;
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            total = total + array[i][j];
        }
    }
    printf("���� ����Ʈ �� �ֹ� ���� %d �� �Դϴ�. \n", total);

    return 0;
}