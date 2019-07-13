#include <stdio.h>
int main()
{
	int num;
	
	for(num = 0; num < 101; num++)
	{
		if(num % 2 == 1)
		continue;
		
		printf("%d \n", num);
	}
	system("pause");
	return 0;
}
