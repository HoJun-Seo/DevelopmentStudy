#include <stdio.h>
int main()
{
	int n, i = 1;
	int result;
	
	printf("팩토리얼 연산을 원하는 숫자를 입력하세요 : ");
	scanf("%d", &n);
	result = n;
	while(i < n)
	{
		result = result * (n-i);
		i++;
	}
	printf("%d 의 팩토리얼 연산 결과는 %d 입니다.\n", n, result);
	system("pause");
	return 0;
 } 
