#include <stdio.h>
int main(void)
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;
	
	num1 += num2;
	printf("복합 덧셈 연산 결과 : num1 의 최종값 : %d \n", num1);
	
	num2 -= 2;
	printf("복합 뺄셈 연산 결과 : num2 의 최종값 : %d \n", num2);
	
	num3 *= 2;
	printf("복합 곱셈 연산 결과 : num3 의 최종값 : %d \n", num3);
	
	num4 /= 2;
	printf("복합 나눗셈 연산 결과 : num4 의 최종값 : %d \n", num4);
	
	num5 %= 2;
	printf("복합 나머지 연산 결과 : num5 의 최종값 : %d \n", num5);
	
	printf("%d %d %d %d %d \n", num1, num2, num3, num4, num5);
	system("pause");
	return 0; 
 } 
