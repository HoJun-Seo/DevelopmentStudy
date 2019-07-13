#include <stdio.h>
int main(void)
{
	float num1 = 0.123456789012345;
	double num2 = 0.123456789012345;
	
	printf("float 형 : %f \n", num1);
	printf("double 형 : %lf \n", num2);
	
	printf("float 형 : %.15f \n", num1);
	printf("double 형 : %.15lf \n", num2);
	
	system("pause");
	return 0;
 } 
