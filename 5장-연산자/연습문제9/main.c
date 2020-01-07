#include <stdio.h>
int main()
{
	float pound, kilo;
	
	printf("Pound -> kilogram 변환 프로그램 입니다. \n");
	printf("변환하고자 하는 파운드 단위를 입력하세요 : ");
	scanf("%f", &pound);
	kilo = pound * 0.45;
	printf("입력받은 파운드 단위를 킬로그램으로 환산하면 %f kg 입니다. \n", kilo);
	return 0; 
 } 
