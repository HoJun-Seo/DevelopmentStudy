#include <stdio.h>
int main()
{
	int a, b, c;
	int result;
	
	printf("첫번째 변수를 입력하세요 : ");
	scanf("%d", &a);
	printf("두번째 변수를 입력하세요 : ");
	scanf("%d", &b);
	printf("세번째 변수를 입력하세요 : ");
	scanf("%d", &c);
	
	if(a > b) result = a;
	else if(a < b) result = b;
	else result = b;
	
	if(result > c) printf("result = %d\n", result);
	else if(result < c) 
	{
		result = c;
		printf("result = %d\n", result);
	}
	else {
		result = c;
		printf("result = %d\n", result);
	}
	if((a == b) && (a == c)) printf("세 변수의 값이 같습니다.\n");
	system("pause");
	return 0;
 } 
