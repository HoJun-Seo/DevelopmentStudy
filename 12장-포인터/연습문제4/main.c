#include<stdio.h>
int main(void)
{
    int num1 = 10;
    int* ip1 = NULL;
    int** ip2 = NULL;
    int*** ip3 = NULL;

    ip1 = &num1;
    ip2 = &ip1;
    ip3 = &ip2;

    printf("1�ܰ�, ���� ���� : %d\n", num1);
    printf("2�ܰ�, 1���� ������ ���� : %d\n", *ip1);
    printf("3�ܰ�, 2���� ������ ���� : %d\n", **ip2);
    printf("4�ܰ�, 3���� ������ ���� : %d\n", ***ip3);

    return 0;
}