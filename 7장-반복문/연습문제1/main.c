#include <stdio.h>
int main()
{
	int i, j = 1;
	int num;
	
	printf("�Է�(���� ����) : ");
	scanf("%d", &i);
	printf("%d�� ���: ", i);
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
	 printf("%d�� ����� ���� : %d \n", i, j);
	 
	 system("pause");
	 return 0; 
}
