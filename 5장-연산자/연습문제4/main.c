#include <stdio.h>
int main()
{
	int a, b, c;
	int result1, result2;
	
	printf("input a : ");
	scanf("%d", &a);
	printf("input b : ");
	scanf("%d", &b);
	printf("input c : ");
	scanf("%d", &c);
	
	result1 = (a > b) ? a : b;
	result2 = (result1 > c) ? result1 : c;
	
	printf("�� �� ���� ū ���� %d �Դϴ�. \n", result2);
	system("pause");
	return 0;
	
 } 
