#include <stdio.h>
int getArea(int x, int y);

int main()
{
	int a, b;
	int result;
	printf("�غ� ���� : ");
	scanf("%d", &a);
	printf("���� : ");
	scanf("%d", &b);
	result = getArea(a, b);
	
	printf("�簢���� ���̴� %d �Դϴ�. \n", result);
	system("pause");
	return 0;
 }
 
 int getArea(int x, int y)
 {
 	return x * y;
  } 
