#include<stdio.h>
int main(void)
{
	printf("%f \n", 0.000123);
	printf("%f \n", 0.0001236); //소수점 이하 6자리를 초과하였고 자료형이 %f 이므로 반올림 시행
	
	printf("%e \n", 0.000123); //%e -> e 표기법에 의한 실수 표현
	printf("%E \n", 0.0001236); // %E -> E표기법에 의한 실수표현(소수점 이하 6자리 초과시)
	
	printf("%g \n", 0.000123); // %g -> 소수점 이하 자리 수가 6자리일때 %f 로 표현, 초과 시 %e 로 표현
	printf("%G \n", 0.0000123456); // %G -> 소수점 이하 자리수가 6자리 일때 %f 로 표현, 초과 시 %E 로 표현
	
	printf("올해 우리나라 경제 성장률은 5%% 입니다. \n");
	system("pause"); 
	return 0; 
 } 
