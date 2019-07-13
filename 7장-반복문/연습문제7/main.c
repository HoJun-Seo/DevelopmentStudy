#include <stdio.h>
int main()
{
	int mark, result = 0;
	int count = 10;
	double avr;
	
	printf("열 과목의 점수의 평균을 계산합니다. \n");
	
	while(count > 0)
	{
		printf("점수를 입력해 주세요 : ");
		scanf("%d", &mark);
		result = result + mark;
		count--;
	}
	avr = (double)result / 10;
	printf("열 과목 점수의 평균은 %.1lf 점 입니다.\n", avr);
	system("pause");
	return 0;
 } 
