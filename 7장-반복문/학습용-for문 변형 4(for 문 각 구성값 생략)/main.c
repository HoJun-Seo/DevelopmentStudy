#include <stdio.h>
int main()
{
	int i, fact = 1;
	for(i = 1; i <= 10; ) //�������� ���� ��� 
	{
		fact = fact * i;
		i++; //�߰����� �ݺ��� ���ο� ���� 
	}
	printf("1���� 10������ �� : %d \n", fact);
	
	system("pause");
	return 0;
}
