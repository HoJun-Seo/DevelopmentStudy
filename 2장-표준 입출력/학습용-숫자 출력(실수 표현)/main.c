#include<stdio.h>
int main(void)
{
	printf("10진수 정수 : %d \n", 0.5);
	printf("10진수 실수 : %f \n", 0.5);
	printf("10진수 실수 : %1f \n", 0.5);
	
	printf("소수점 이하 6자리 이상 : %f \n", 0.5655678); //맨 마지막 자리값 반 올림(%f) 
	printf("소수점 이하 6자리 이상 : %1f \n", 0.5667784); //맨 마지막 자리값 반 내림(%1f)
	system("pause");
	return 0; 
 } 
