#include <stdio.h>
int main(void)
{
	int i;
	for(i = 0; 1; i++)
	{
		printf("�ݺ�Ƚ�� : %d \n", i);
		if(i > 10)
		break; //�ݺ�Ƚ���� 10�� �ʰ��� �� ���� ���� 
	}
	system("pause");
	return 0;
 } 
