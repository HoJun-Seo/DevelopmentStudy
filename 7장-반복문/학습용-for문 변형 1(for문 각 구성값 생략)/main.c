#include <stdio.h>
int main()
{
	int i;
	int fact = 1;
	
	for(i = 1; i <= 10; i++) //�ʱⰪ,���ǰ�,������ ��� ���� 
	{
		fact = fact * i;
	}
	printf("1���� 10������ �� : %d \n", fact);
	
	system("pause");
	return 0;
 } 
