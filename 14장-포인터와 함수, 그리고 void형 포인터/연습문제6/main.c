#include<stdio.h>

void* add(int a, int b);
void* subtract(int a, int b);
void* multiply(int a, int b);
void* divide(int a, int b);

int main(void)
{
    int i;
    int a , b;
    printf("이항 연산 프로그램 입니다. \n");
    printf("사칙연산자 중 하나의 번호를 입력하십시오.(1.+  2.-  3.*  4. /) : ");
    scanf("%d", &i);
    printf("첫번째 연산자를 입력하십시오 : ");
    scanf("%d", &a);
    printf("두번째 연산자를 입력하십시오 : ");
    scanf("%d", &b);

    switch (i)
    {
    case 1 :
        add(a, b);
        break;
    case 2 :
        subtract(a, b);
        break;
    case 3 :
        multiply(a, b);
        break;
    case 4 :
        divide(a, b);
        break;
    default:
        printf("연산자의 입력이 잘못되었습니다..\n");
        break;
    }

    return 0;
}

void* add(int a, int b)
{
    int result = a + b;
    printf("연산의 결과 : %d\n", result);
}

void* subtract(int a, int b)
{
    int result = a - b;
    printf("연산의 결과 : %d\n", result);
}

void* multiply(int a, int b)
{
    int result = a * b;
    printf("연산의 결과 : %d\n", result);
}

void* divide(int a, int b)
{
    int result = a / b;
    printf("연산의 결과 : %d\n", result);
}