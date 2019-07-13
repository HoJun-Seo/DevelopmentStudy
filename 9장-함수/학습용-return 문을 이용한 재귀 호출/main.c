#include <stdio.h>
int factorial(int n);

int main()
{
	int a;
	int result;
	
	printf("정수 입력 : ");
	scanf("%d", &a);
	
	result = factorial(a);
	printf("%d 팩토리얼은 %d 입니다. \n", a, result);
	
	system("pause");
	return 0;
 } 
 
 int factorial(int n)
 {
 	if(n <= 1) return 1;
 	else return n * factorial(n - 1);
 }
