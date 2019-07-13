#include <stdio.h>
int main()
{
	float dollar, won;
	
	printf("원화로 환전할 달러의 값을 입력하세요 : ");
	scanf("%f", &dollar);
	won = dollar * 1180.500000;
	printf("현재 환율을 기준으로 달러를 원화로 환전하면 %f 원 입니다. \n", won);
	system("pause");
	return 0; 
 } 
