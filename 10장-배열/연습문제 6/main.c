#include <stdio.h>
int main()
{  
	int i;
	char array1[5] = {'A', 'B', 'C', 'D', 'E'};
	int array2[5] = {10, 20, 30, 40, 50};
	double array3[5] = {10.1, 20.2, 30.3, 40.4, 50.5};
	
	for( ; i < 5; i++)
	{
		printf("%x ", &array1[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%c ", *&array1[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%x ", &array2[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d ", *&array2[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%x ", &array3[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%.1lf ", *&array3[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
