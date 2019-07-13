#include <stdio.h>
int getArea(int x, int y);

int main()
{
	int a, b;
	int result;
	printf("밑변 길이 : ");
	scanf("%d", &a);
	printf("높이 : ");
	scanf("%d", &b);
	result = getArea(a, b);
	
	printf("사각형의 넓이는 %d 입니다. \n", result);
	system("pause");
	return 0;
 }
 
 int getArea(int x, int y)
 {
 	return x * y;
  } 
