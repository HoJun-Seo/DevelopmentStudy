#include <stdio.h>
int main()
{
	int i, j = 0;
	int result;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &i);
	
	while(j < 10)
	{
		result = i * j;
		printf("%d * %d = %d �Դϴ�.\n", i, j, result);
		j++;
	 } 
	 system("pause");
	 return 0;
 } 
