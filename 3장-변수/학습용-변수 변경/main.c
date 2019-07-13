#include<stdio.h>
int main(void)
{
	int a = 0, b = 1;
	
	printf("a의 값은 %d 입니다. \n", a);
	printf("b의 값은 %d 입니다. \n", b);
	
	a = a+10;
	b = b+10;
	
	printf("변경된 a의 값은 %d 입니다. \n", a);
	printf("변경된 b의 값은 %d 입니다. \n", b);
	system("pause");
	return 0;
 } 
