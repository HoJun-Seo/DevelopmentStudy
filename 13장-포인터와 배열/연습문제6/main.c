#include<stdio.h>
int main(void)
{
    char* array1 = "ABCD";
    char array2[] = "ABCD";

    array1[0] = 'X'; //���ڿ� ��� ���� �Ұ�.
    array2[0] = 'X';

    return 0;
}