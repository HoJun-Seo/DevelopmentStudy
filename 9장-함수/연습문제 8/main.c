#include <stdio.h>
int cycle(int x);
int n;

int main()
{
	int result;
	printf("input your number = ");
	scanf("%d", &n);
	result = cycle(n);
	printf("1���� %d ������ �� = %d \n", n, result);
	system("pause");
	return 0;
 }
 
int cycle(int x)
{
	if (x <= 1) return 1;
	else return x + cycle(x-1);
 } 
