#include <stdio.h>
int main()
{
	int i, j = 1;
	int num;
	
	printf("입력(양의 정수) : ");
	scanf("%d", &i);
	printf("%d의 배수: ", i);
	while(num < 100)
	{
		num = i * j;
		if(num > 100)
		{
			j--;
			break;
		}
		printf("%d ", num);
		j++;
	 }
	 printf("\n");
	 printf("%d의 배수의 개수 : %d \n", i, j);
	 
	 system("pause");
	 return 0; 
}
