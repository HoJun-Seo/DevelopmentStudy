//������ ������ ���� �޸� ������ ���� �������� ���ϰ� �Ѵ�.
#include<stdio.h>
int main(void)
{
    char a = 'A';
    char b = 'B';
    const char* p = &a; //*p�� ���ȭ

    printf("%c \n", *p);
    printf("%c \n", a);

    p = &b;
    printf("%c \n", *p);
    printf("%c \n", b);

    a = 'X';
    b = 'C';
    printf("%c %c\n", b, *p);

    return 0;
}