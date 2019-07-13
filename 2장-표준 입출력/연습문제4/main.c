#include<stdio.h>
int main(void)
{
	int r;
	double pi = 3.14;
	
	printf("원의 반지름을 이용하여 원의 넓이를 구하는 프로그램 입니다.\n");
	printf("반지름의 길이를 입력하세요 : ");
	scanf("%d", &r);
	printf("원의 넓이는 %lf 입니다.\n", r*r*pi);
	system("pause");
	return 0;
}
