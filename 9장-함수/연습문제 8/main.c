#include <stdio.h>
int cycle(int x);
int n;

int main()
{
	int result;
	printf("input your number = ");
	scanf("%d", &n);
	result = cycle(n);
	printf("1부터 %d 까지의 합 = %d \n", n, result);
	system("pause");
	return 0;
 }
 
int cycle(int x)
{
	if (x <= 1) return 1;
	else return x + cycle(x-1);
 } 
