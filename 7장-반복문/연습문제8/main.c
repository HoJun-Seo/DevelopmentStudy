#include <stdio.h>
int main()
{
	int i, result = 0;
	int count = 0;
	
	while(1)
	{
		printf("���� �Է� : ");
		scanf("%d", &i);
		if(i == 0) break;
		result = result + i;
		count++;
	}
	printf("\n");
	printf("���� ��� : %d \n", result);
	printf("���� Ƚ�� : %d \n", count);
	
	system("pause");
	return 0;
}
