#include<stdio.h>
int main(void)
{
	int a, b;
	printf("직사각형의 가로와 세로의 길이를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("직사각형의 넓이는 %d 입니다.\n", a*b);
	system("pause");
	return 0;
}
