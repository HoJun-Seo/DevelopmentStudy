#include <stdio.h>
int main(void)
{
	//정수형
	char num1 = 10;
	short num2 = 20;
	int num3 = 30;
	long num4 = 40;
	
	//실수형
	float num5 = 3.14;
	double num6 = 3.15;
	long double num7 = 3.17;
	
	printf("\n------정수형 자료형과 변수의 메모리 크기------\n");
	printf("char 형의 크기 %d 바이트, %d 바이트.\n" , sizeof(char), sizeof(num1));
	printf("short 형의 크기 %d 바이트, %d 바이트.\n" , sizeof(short), sizeof(num2));
	printf("int 형의 크기 %d 바이트, %d 바이트.\n" , sizeof(int), sizeof(num3));
	printf("long 형의 크기 %d 바이트, %d 바이트.\n" , sizeof(long), sizeof(num4));
	
	printf("\n------실수형 자료형과 변수의 메모리 크기------\n"); 
	printf("float 형의 크기 %d 바이트, %d 바이트.\n" , sizeof(float), sizeof(num5));
	printf("double 형의 크기 %d 바이트, %d 바이트.\n" , sizeof(double), sizeof(num6));
	printf("long double 형의 크기 %d 바이트, %d 바이트.\n" , sizeof(long double), sizeof(num7));
	
	system("pause");
	return 0;
}
