#include <stdio.h>
int main(void)
{
	int i,j;
	int result = 0;
	
	for(i = 2; i < 10; i++)
	{
		for(j = 1; j < 10; j++)
		{
			result = i * j;
			printf("%d * %d = %d \n", i, j, result);
		}
		printf("------------------------------\n");
	}
	system("pause");
	return 0;
}
