#include <stdio.h>
int main()
{
	int n, i = 1;
	int result;
	
	printf("���丮�� ������ ���ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &n);
	result = n;
	while(i < n)
	{
		result = result * (n-i);
		i++;
	}
	printf("%d �� ���丮�� ���� ����� %d �Դϴ�.\n", n, result);
	system("pause");
	return 0;
 } 
