#include <stdio.h>
int main()
{
	int num;
	
	for(num = 0; num < 101; num++)
	{
		if(num % 2 == 0) continue;
		printf("%d ", num);
	}
	printf("\n");
	system("pause");
	return 0;
}
