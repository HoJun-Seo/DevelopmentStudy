#include <stdio.h>
#define pi 3.14
int main()
{
	 double r, v, t;
	 double circle;
	 
	 printf("Ʈ���� �޸��� �ڵ����� Ʈ�� �� ������ �޸��� �� �ɸ��� �ð��� ����ϴ� ���α׷� �Դϴ�. \n");
	 printf("Ʈ���� ������ ���̸� �Է��ϼ���(km) : ");
	 scanf("%lf", &r);
	 printf("�ڵ����� �ӷ��� �Է��ϼ���(km/h) : ");
	 scanf("%lf", &v);
	 
	 circle = 2 * pi * r;
	 t = circle / v;
	 
	 printf("�ڵ����� Ʈ���� �� ���� �����ϴµ� �ɸ��� �ð� : %.3lf \n", t);
	 system("pause");
	 return 0; 
 } 
