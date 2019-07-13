#include<stdio.h>
int main(void)
{
	int red = 1, blue = 2;
	int yellow;
	
	printf("before \n");
	printf("red = %d, blue = %d \n", red, blue);
	yellow = red;
	red = blue;
	blue = yellow;
	printf("after \n");
	printf("red = %d, blue = %d \n", red, blue);
	system("pause");
	return 0;
 } 
