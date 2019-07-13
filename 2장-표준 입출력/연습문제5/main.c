#include<stdio.h>
int main(void)
{
	int a, b;
	printf("두 숫자의 합 과 차를 구하는 프로그램 입니다.\n");
	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("두번째 숫자를 입력하세요 : ");
	scanf("%d", &b);
	printf("합 : %d + %d = %d\n", a, b, a+b);
	printf("차 : %d - %d = %d\n", a, b, a-b);
	system("pause");
	return 0; 
}
