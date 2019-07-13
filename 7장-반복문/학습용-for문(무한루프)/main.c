#include <stdio.h>
int main(void)
{
	int i;
	for(i = 0; 1; i++)
	{
		printf("반복횟수 : %d \n", i);
		if(i > 10)
		break; //반복횟수가 10을 초과할 시 루프 종료 
	}
	system("pause");
	return 0;
 } 
