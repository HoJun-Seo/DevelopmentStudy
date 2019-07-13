#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 3;
	
	double result;
	
	result = num1 / num2;
	printf("결과 : %lf \n", result); //데이터 손실(나눈값의 나머지)
	
	result = (double)num1 / num2;
	printf("결과 : %lf \n", result); //강제 형 변환 - 실수형/정수형
	
	result = num1 / (double)num2;
	printf("결과 : %lf \n", result); //강제 형 변환 - 정수형/실수형
	
	result = (double)num1 / (double)num2;
	printf("결과 : %lf \n", result); //강제 형 변환 - 실수형/실수형
	
	system("pause");
	return 0; 
 } 
