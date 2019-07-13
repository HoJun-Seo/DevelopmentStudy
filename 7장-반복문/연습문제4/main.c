#include <stdio.h>
int main()
{
	int i, j = 0;
	int result;
	
	printf("숫자를 입력하세요 : ");
	scanf("%d", &i);
	
	while(j < 10)
	{
		result = i * j;
		printf("%d * %d = %d 입니다.\n", i, j, result);
		j++;
	 } 
	 system("pause");
	 return 0;
 } 
