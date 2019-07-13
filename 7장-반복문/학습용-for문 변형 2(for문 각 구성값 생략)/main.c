#include <stdio.h>
int main()
{
	int i = 1, fact = 1; //초기값 i = 1 을 설정 
	for( ; i<= 10; i++) //초기값 생략 
	{
		fact = fact * i;
	}
	printf("1부터 10까지의 곱 : %d \n", fact);
	
	system("pause");
	return 0;
 } 
