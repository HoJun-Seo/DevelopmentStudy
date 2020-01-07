#include <stdio.h>
int main()
{
	int x = 3, y = 5, z = 3, k = 2;
	int a;
	
	a = x < y || x < z && z < k;
	printf("결과 값1 a : %d \n", a);
	
	a = (x < y || x < z) && z < k;
	printf("결과 값2 a : %d \n", a);
	return 0;
 } 
