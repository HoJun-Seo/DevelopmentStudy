#include <stdio.h>
int main()
{
	int mark, result = 0;
	int count = 10;
	double avr;
	
	printf("�� ������ ������ ����� ����մϴ�. \n");
	
	while(count > 0)
	{
		printf("������ �Է��� �ּ��� : ");
		scanf("%d", &mark);
		result = result + mark;
		count--;
	}
	avr = (double)result / 10;
	printf("�� ���� ������ ����� %.1lf �� �Դϴ�.\n", avr);
	system("pause");
	return 0;
 } 
