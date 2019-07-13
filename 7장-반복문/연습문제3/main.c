#include <stdio.h>
int main()
{
	int c1 = 7, c2 = 1, c3 = 1;
	char c = '*';
	
	while(c1 > 0)
	{
		printf("%c", c);
		c1--;
	}
	
	printf("\n");
	c1 = 5;
	for( ; c2 < 4; c2++)
	{
		c3 = c2;
		do{
			printf(" ");
			c3--;
		}while(c3 > 0);
		for( ; c1 > 0; c1--)
		{
			printf("%c", c);
		}
		c3 = c2;
		do{
			printf(" ");
			c3--;
		}while(c3 > 0);
		printf("\n");
		c1 = 5 - (c2 * 2);
	}
	system("pause");
	return 0;
}
