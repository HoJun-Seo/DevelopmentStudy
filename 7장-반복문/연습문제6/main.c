#include <stdio.h>
int main()
{
	int i, j;
	int result;
	
	while(1)
	{
		printf("첫번째 수를 입력해 주세요 : ");
		scanf("%d", &i);
		printf("두번째 수를 입력해 주세요 : ");
		scanf("%d", &j);
		result = i + j;
		printf("%d + %d = %d 입니다. \n", i, j, result); 
	}
 } 
