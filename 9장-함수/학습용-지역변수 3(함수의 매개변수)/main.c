#include <stdio.h>
int subtract(int x, int y);

int main()
{
	int a = 5, b = 3;
	int result = 0;
	
	result = subtract(a, b);
	printf("��� ��� : %d \n", result);
	
	system("pause");
	return 0;
 } 
 
 int subtract(int x, int y) //subtract() �Լ� ���� �������� x, y(�Լ��� ������ �ڵ����� �޸𸮿��� �Ҹ��ϴ� ��������) 
 {
 	return x - y;
 }
