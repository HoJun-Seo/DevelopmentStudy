#include <stdio.h>
int main(void)
{
	int i, sum = 0;
	for(i = 0; i <= 10; i++)
	{
		sum += i;
		printf("i = %d, sum = %d \n", i, sum);
	}
	printf("-----------반복문 종료------------\n");
	system("pause");
	return 0;
}
