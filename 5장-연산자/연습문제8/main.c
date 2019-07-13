#include <stdio.h>
int main()
{
	int hour, min, sec;
	int hour_sec, min_sec;
	int total;
	
	printf("현재 시각을 입력받아 00시 00분 00초 기준으로 몇 초가 흘렀는지 계산하는 프로그램 입니다. \n");
	printf("현재 시를 입력하세요 : ");
	scanf("%d", &hour);
	hour_sec = hour * 3600;
	printf("현재 분을 입력하세요 : ");
	scanf("%d", &min);
	min_sec = min * 60;
	printf("현재 초를 입력하세요 : ");
	scanf("%d", &sec);
	
	 total = hour_sec + min_sec + sec;
	 printf("00시 00분 00초를 기준으로 현재 %d 초가 흘렀습니다. \n");
	 system("pause");
	 return 0;
 } 
