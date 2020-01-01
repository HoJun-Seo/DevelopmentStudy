#include <stdio.h>
int main()
{
	int i = 0;
	char array[6] = {'A', 'B', 'C'};
	while(i < 6)
	{
		printf("%c ", array[i]);
		i++;
	}
	printf("\n");
	i = 0;
	array[3] = array[2];
	array[4] = array[1];
	array[5] = array[0];
	while(i < 6)
	{
		printf("%c ", array[i]);
		i++;
	}
	printf("\n");
	
	return 0;
}
