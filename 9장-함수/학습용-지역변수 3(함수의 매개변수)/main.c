#include <stdio.h>
int subtract(int x, int y);

int main()
{
	int a = 5, b = 3;
	int result = 0;
	
	result = subtract(a, b);
	printf("밸셈 결과 : %d \n", result);
	
	system("pause");
	return 0;
 } 
 
 int subtract(int x, int y) //subtract() 함수 내의 지역변수 x, y(함수가 끝나면 자동으로 메모리에서 소멸하는 지역변수) 
 {
 	return x - y;
 }
