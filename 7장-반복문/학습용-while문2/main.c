#include <stdio.h>
int main()
{
	int i = 0, sum = 0;
	while(i <= 10)
	{
		sum += i;
		printf("i = %d, sum = %d \n", i, sum);
		i++;
	}
	printf("------�ݺ��� ����------\n");
	system("pause");
	return 0;
 } 
