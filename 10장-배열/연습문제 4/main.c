#include <stdio.h>
int main()
{
	int i, j, k = 1;
	int array[9];
	printf("숫자를 입력하세요 : ");
	scanf("%d", &i);
	
	for(j = 0; j < 9; j++)
	{
		array[j] = i * k;
		printf("%d * %d = %d \n", i, k, array[j]);
		k++;
	}
	return 0;
}
