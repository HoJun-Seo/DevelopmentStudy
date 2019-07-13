#include<stdio.h>
int main(void)
{
	printf("10진수: %d는 16진수 : %x, 8진수 : %o 입니다. \n", 50, 50, 50);
	printf("10진수: %d는 16진수 : %x, 8진수 : %o 입니다. \n", -50, -50, -50);
	//16진수와 8진수는 음수 표현 불가.
	system("pause");
	return 0; 
 } 
