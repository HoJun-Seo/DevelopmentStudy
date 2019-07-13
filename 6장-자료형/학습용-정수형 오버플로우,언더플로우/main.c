#include <stdio.h>
int main(void)
{
	char num1 = -129; //최솟값 보다 -1 만큼 작은 수 저장 
	char num2 = 128; //최댓값 보다 +1 만큼 큰 수 저장 
	
	printf("%d \n", num1);
	printf("%d \n", num2);
	
	num1 = -130; //최솟값 보다 -2 만큼 작은 수 저장 
	num2 = 129; //최댓값 보다 +2 만큼 큰 수 저장
	
	printf("%d \n", num1);
	printf("%d \n", num2);
	
	system("pause");
	return 0;
	 
 } 
