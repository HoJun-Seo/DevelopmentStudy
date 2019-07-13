#include <stdio.h>
int main(void)
{
	int year, month, day;
	
	printf("생년월일을 입력 받은 후 출력하는 프로그램입니다. \n");
	printf("태어난 연도를 입력하세요 : ");
	scanf("%d", &year);
	printf("태어난 달을 입력하세요 : ");
	scanf("%d", &month);
	printf("태어난 일을 입력하세요 : ");
	scanf("%d", &day);
	printf("입력 하신분의 생년월일은 %d 년 %d 월 %d 일 입니다. \n", year, month, day);
	system("pause");
	return 0; 
}
