#include<stdio.h>
int main(void)
{
	float f1, f2;
	double d1, d2;
	
	printf("float �� �Ǽ� 2�� �Է� : ");
	scanf("%f %e", &f1, &f2);
	printf("float �� �Ǽ� ��� : f1 = %f, f2 = %e \n", f1, f2);
	
	printf("double �� �Ǽ� 2�� �Է� : "); 
	scanf("%lf %le", &d1, &d2);
	printf("double �� �Ǽ� ��� : d1 = %lf, d2 = %le \n", d1, d2);
	
	system("pause");
	return 0; 
 } 
