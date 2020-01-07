#include <stdio.h>
int main(void)
{
	int a, b;
	int result1;
	
	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);
	printf("Smaller Number : ");
	
	result1 = (a > b) ? b : a;
	result1 = (a < b) ? a : b;
	(a == b) ? printf("°°À½ \n") : printf("%d \n", result1);
	return 0;  
 } 

