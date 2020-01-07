#include <stdio.h>
int main()
{
	int feet;
	float cent, met;
	
	printf("고도 계산 프로그램 입니다. \n");
	printf("현재 지상으로 부터 몇 피트 떨어져 있나요? : ");
	scanf("%d", &feet);
	cent = feet * 30.48;
	met = cent / 100;
	printf("현재 지상으로 부터의 고도를 미터로 환산하면 %f 미터 입니다. \n", met);
	return 0; 
 } 
