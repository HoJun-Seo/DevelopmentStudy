#include <stdio.h>
int main()
{
	int i = 0, result = 0;
	int j = 1;
	int array[10];
	
	printf("10���� �л��� ������ ������ ����� ���ϴ� ���α׷� �Դϴ�. \n");
	while(j <= 10)
	{
		printf("%d ��° �л��� ������ �Է��ϼ��� : ", j);
		scanf("%d", &array[i]);
		result = result + array[i];
		i++;
		j++;
	}
	printf("�л����� ������ %d �� �̸� ����� %.2lf �� �Դϴ�. \n", result, (double)result/10);
	
	system("pause");
	return 0; 
 } 
