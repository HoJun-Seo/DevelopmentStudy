#include <stdio.h>
int main()
{
	int x = 3, y = 5, z = 3, k = 2;
	int a;
	
	a = x < y || x < z && z < k;
	printf("��� ��1 a : %d \n", a);
	
	a = (x < y || x < z) && z < k;
	printf("��� ��2 a : %d \n", a);
	return 0;
 } 
