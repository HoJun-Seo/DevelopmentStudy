#include <stdio.h>
int main()
{
	int i = 1, fact = 1; //�ʱⰪ i = 1 �� ���� 
	for( ; i<= 10; i++) //�ʱⰪ ���� 
	{
		fact = fact * i;
	}
	printf("1���� 10������ �� : %d \n", fact);
	
	system("pause");
	return 0;
 } 
