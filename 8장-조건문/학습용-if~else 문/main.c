#include <stdio.h>
int main()
{
	int age;
	
	printf("나이 입력 : ");
	scanf("%d", &age);
	
	if(age >= 15 && age <= 100)
	printf("회원 가입이 가능합니다. \n");
	else
	printf("회원 가입이 불가능 합니다.\n");
	
	system("pause");
	return 0; 
 } 
