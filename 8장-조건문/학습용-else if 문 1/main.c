#include <stdio.h>
int main()
{
	int num;
	
	printf("���� �Է� : ");
	scanf("%d", &num);
	
	if(num > 0)
	printf("0���� ū ���� num �� ���� \n");
	
	else if(num == 0)
	printf("0 �� num �� ���� \n");
	
	else
	printf("0���� ���� ���� num �� ���� \n");
	
	system("pause");
	return 0;
 } 
