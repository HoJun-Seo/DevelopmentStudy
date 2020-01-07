#include <stdio.h>
int main()
{
	int i = 0;
	double array1[] = {2.2, 3.5, 2.5, 10.1, 4.0};
	double array2[] = {3.3, 2.0, 4.0, 1.0, 2.5};
	
	for( ; i < 5; i++)
	{
		printf("%.1lf * %.1lf = %.2lf \n", array1[i], array2[i], array1[i] * array2[i]);
	}
	return 0;
}
