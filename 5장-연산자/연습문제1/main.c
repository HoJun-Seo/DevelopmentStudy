#include <stdio.h>
int main(void)
{
	int x, y, z;
	int result;
	
	printf("input x : ");
	scanf("%d", &x);
	printf("input y : ");
	scanf("%d", &y);
	printf("input z : ");
	scanf("%d", &z);
	
	result = (x+y) * (x+z) / (y%z);
	printf("(x+y) * (x+z) / (y%%z) = %d \n", result);
	system("pause");
	return 0;
 } 
