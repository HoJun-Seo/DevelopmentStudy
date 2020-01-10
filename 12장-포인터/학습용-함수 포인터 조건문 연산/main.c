#include<stdio.h>
void add(int num1, int num2);
void subtract(int num1, int num2);


int main(void)
{
    int x, z;
    char c;
    void (*pointer)(int, int);

    printf("add 함수의 주소 : %x \n", add);
    printf("subtract 함수의 주소 : %x \n", subtract);
    printf("연산자 q 입력 시 프로그램이 종료됩니다.\n");
    do{
        printf("입력 : ");
        scanf("%d %c %d", &x, &c, &z);

        if(c == '+'){
            pointer = add;
            pointer(x, z);
        }
        else if(c == '-'){
            pointer = subtract;
            pointer(x, z);
        }
        else if(c == 'q') break;
        else printf("두번째 연산자는 '+' 또는 '-' 를 입력하세요. \n");
    }while(c != '+' || c != '-');

    return 0;
}

void add(int num1, int num2)
{
    int result;
    result = num1 + num2;
    printf("%d + %d = %d 입니다. \n", num1, num2, result);
}

void subtract(int num1, int num2)
{
    int result;
    result = num1 - num2;
    printf("%d - %d = %d 입니다. \n", num1, num2, result);
    
    
}