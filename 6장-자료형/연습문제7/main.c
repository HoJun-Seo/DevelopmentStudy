#include <stdio.h>
#define pi 3.14
int main()
{
	double r;
	double width, circum;
	
	printf("원의 둘레 및 넓이를 구하는 프로그램 입니다. \n");
	printf("원의 반지름의 길이를 입력하세요 : ");
	scanf("%lf", &r);
	circum = 2 * pi * r;
	width = pi * r * r;
	
	printf("원의 면적 : %lf \n", width);
	printf("원의 둘레 : %lf \n", circum);
	
	system("pause");
	return 0;
 } 
