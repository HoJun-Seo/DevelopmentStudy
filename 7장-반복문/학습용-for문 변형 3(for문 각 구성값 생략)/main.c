#include <stdio.h>
int main()
{
	int i, fact = 1;
	for(i = 1; ; i++)//무한루프 
	{
		fact = fact * i;
		
		if(i >= 10)
		break; //무한 루프를 탈출하기 위한 break 문 
	}
	printf("1부터 10까지의 곱 : %d \n", fact);
	
	system("pause");
	return 0;
}
