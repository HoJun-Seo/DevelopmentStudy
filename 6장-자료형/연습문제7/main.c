#include <stdio.h>
#define pi 3.14
int main()
{
	double r;
	double width, circum;
	
	printf("���� �ѷ� �� ���̸� ���ϴ� ���α׷� �Դϴ�. \n");
	printf("���� �������� ���̸� �Է��ϼ��� : ");
	scanf("%lf", &r);
	circum = 2 * pi * r;
	width = pi * r * r;
	
	printf("���� ���� : %lf \n", width);
	printf("���� �ѷ� : %lf \n", circum);
	
	system("pause");
	return 0;
 } 
