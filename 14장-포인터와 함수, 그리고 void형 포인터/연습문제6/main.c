#include<stdio.h>

void* add(int a, int b);
void* subtract(int a, int b);
void* multiply(int a, int b);
void* divide(int a, int b);

int main(void)
{
    int i;
    int a , b;
    printf("���� ���� ���α׷� �Դϴ�. \n");
    printf("��Ģ������ �� �ϳ��� ��ȣ�� �Է��Ͻʽÿ�.(1.+  2.-  3.*  4. /) : ");
    scanf("%d", &i);
    printf("ù��° �����ڸ� �Է��Ͻʽÿ� : ");
    scanf("%d", &a);
    printf("�ι�° �����ڸ� �Է��Ͻʽÿ� : ");
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
        printf("�������� �Է��� �߸��Ǿ����ϴ�..\n");
        break;
    }

    return 0;
}

void* add(int a, int b)
{
    int result = a + b;
    printf("������ ��� : %d\n", result);
}

void* subtract(int a, int b)
{
    int result = a - b;
    printf("������ ��� : %d\n", result);
}

void* multiply(int a, int b)
{
    int result = a * b;
    printf("������ ��� : %d\n", result);
}

void* divide(int a, int b)
{
    int result = a / b;
    printf("������ ��� : %d\n", result);
}