#include <stdio.h>
int main()
{
	int i;
	int fact = 1;
	
	for(i = 1; i <= 10; i++) //초기값,조건값,증감값 모두 존재 
	{
		fact = fact * i;
	}
	printf("1부터 10까지의 곱 : %d \n", fact);
	
	system("pause");
	return 0;
 } 
