#include <stdio.h>
#include <time.h>

#define MAX 1000000

int main()
{
	register int i;
	clock_t startTime, endTime, result;
	
	startTime = clock();
	for(i = 0; i <= MAX; i++)
	{
		printf("%d  ", i);
	}
	endTime = clock();
	
	result = endTime - startTime;
	printf("레지스터 변수 속도 : %lf 초 \n", (double)result / 1000);
	
	system("pause");
	return 0;
 } 
