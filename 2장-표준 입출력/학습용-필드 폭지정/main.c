#include<stdio.h>
int main(void)
{
	printf("%03d, %03d, %03d \n", 1, 20, 300);
	printf("%-3d, %-3d, %-3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, -300);
	printf("%3d, %3d, %3d \n", 1, 20, 300);
	system("pause");
	return 0;
 } 
