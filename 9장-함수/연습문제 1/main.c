#include <stdio.h>
int abs(int n);

int main()
{
	int a, result;
	
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	result = abs(a);
	
	printf("������ %d �Դϴ�. \n", result);
	
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
