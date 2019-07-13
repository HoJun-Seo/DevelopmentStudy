#include <stdio.h>
int main()
{
	int num;
	
	printf("숫자 입력 : ");
	scanf("%d", &num);
	
	if(num > 0)
	printf("0보다 큰 수가 num 에 저장 \n");
	
	else if(num == 0)
	printf("0 이 num 에 저장 \n");
	
	else
	printf("0보다 작은 수가 num 에 저장 \n");
	
	system("pause");
	return 0;
 } 
