#include<stdio.h>
void add(int num1, int num2);
void subtract(int num1, int num2);


int main(void)
{
    int x, z;
    char c;
    void (*pointer)(int, int);

    printf("add �Լ��� �ּ� : %x \n", add);
    printf("subtract �Լ��� �ּ� : %x \n", subtract);
    printf("������ q �Է� �� ���α׷��� ����˴ϴ�.\n");
    do{
        printf("�Է� : ");
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
        else printf("�ι�° �����ڴ� '+' �Ǵ� '-' �� �Է��ϼ���. \n");
    }while(c != '+' || c != '-');

    return 0;
}

void add(int num1, int num2)
{
    int result;
    result = num1 + num2;
    printf("%d + %d = %d �Դϴ�. \n", num1, num2, result);
}

void subtract(int num1, int num2)
{
    int result;
    result = num1 - num2;
    printf("%d - %d = %d �Դϴ�. \n", num1, num2, result);
    
    
}