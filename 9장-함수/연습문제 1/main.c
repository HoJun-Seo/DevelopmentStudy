#include <stdio.h>
int abs(int n);

int main()
{
	int a, result;
	
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	result = abs(a);
	
	printf("절댓값은 %d 입니다. \n", result);
	
	system("pause");
	return 0;
 }
 
 int abs(int n)
 {
 	if(n > 0) return n;
 	else{
	 n = n * -1;
	 return n;
	 }
  } 
