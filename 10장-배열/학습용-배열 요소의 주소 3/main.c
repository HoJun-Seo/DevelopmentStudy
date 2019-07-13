#include <stdio.h>
int main()
{
	char array[3] = {'A', 'B', 'C'};
	
	printf("%x, %x, %x \n", array+0, array+1, array+2);
	
	system("pause");
	return 0;
}
