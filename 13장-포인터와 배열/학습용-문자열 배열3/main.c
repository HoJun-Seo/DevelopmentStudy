#include<stdio.h>
int main(void)
{
    char array[] = "ABCD";

    printf("%s\n", array); //%s - ���ڿ��� �����ּҸ� �Է¹޾� ���� ���ڱ��� ���ڿ��� ������ش�.
    printf("%s\n", array + 1);
    printf("%s\n", array + 2);
    printf("%s\n", array + 3);

    return 0;
}