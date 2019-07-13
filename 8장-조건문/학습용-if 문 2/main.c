#include <stdio.h>
int main()
{
	int num;
	
	printf("5ÀÇ ¹è¼ö :");
	for(num = 1; num <= 100; num++)
	{
		if(num % 5 == 0)
		printf("%3d", num);
	}
	printf("\n");
	system("pause");
	return 0;
}
