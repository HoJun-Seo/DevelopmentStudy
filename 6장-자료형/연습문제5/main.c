#include <stdio.h>
int main()
{
	double result;
	double input1, input2;
	
	printf("input 2 numbers = ");
	scanf("%lf %lf", &input1, &input2);
	
	result = input1 / input2;
	printf("������ ��� = %lf \n", result);
	
	system("pause");
	return 0;
 } 
