#include <stdio.h>
int main()
{
	int num;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	
	if(num >= 0)
	printf("양수 입니다. \n");
	
	if(num < 0)
	printf("음수 입니다. \n");
	
	system("pause");
	return 0;
 } 
