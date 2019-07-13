#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	char c = '*';
	
	while(i < 5)
	{
		i++;
		while(j < i)
		{
			printf("%c ", c);
			j++;
		}
		j = 0;
		printf("\n");
	}
	system("pause");
	return 0;
 } 
