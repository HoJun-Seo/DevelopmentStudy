#include <stdio.h>
int main(void)
{
	signed char num1 = 130; //데이터 표현범위 초과
	unsigned char num2 = 130;
	
	printf("%d \n", num1);
	printf("%u \n", num2);
	
	system("pause");
	return 0; 
}
