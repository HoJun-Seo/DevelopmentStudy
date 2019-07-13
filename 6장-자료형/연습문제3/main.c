#include <stdio.h>
int main()
{
	int i;
	float f;
	double d;
	
	i = (long)('a'+1.3);
	f = 2.49 + i;
	d = (double)f * i;
	
	printf("%d, %lf, %.15lf \n", i, f, d);
	
	system("pause");
	return 0;
 } 
