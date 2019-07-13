#include <stdio.h>
int main()
{
	int i, fact = 1;
	for(i = 1; i <= 10; ) //증감값이 없는 경우 
	{
		fact = fact * i;
		i++; //중감값을 반복문 내부에 설정 
	}
	printf("1부터 10까지의 곱 : %d \n", fact);
	
	system("pause");
	return 0;
}
