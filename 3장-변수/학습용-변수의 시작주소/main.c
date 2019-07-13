#include<stdio.h>
int main(void)
{
	int a = 3, b = 4;
	
	printf("a의 값 : %d \n", a);
	printf("b의 값 : %d \n", b);
	
	printf("변수 a의 시작 주소 : %x \n", &a);
	printf("변수 b의 시작 주소 : %x \n", &b);
	system("pause");
	return 0;
}
