#include <stdio.h>
int main()
{
	int i, result = 0;
	int count = 0;
	
	while(1)
	{
		printf("정수 입력 : ");
		scanf("%d", &i);
		if(i == 0) break;
		result = result + i;
		count++;
	}
	printf("\n");
	printf("연산 결과 : %d \n", result);
	printf("연산 횟수 : %d \n", count);
	
	system("pause");
	return 0;
}
