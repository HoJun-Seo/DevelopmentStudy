#include <stdio.h>
int main(void)
{
	int num1 = 20;
	int result1;
	
	result1 = ~num1;
	printf("비트 단위 ~ 연산의 결과 : %d \n", result1);
	system("pause");
	return 0;
}
