#include <stdio.h>
int main()
{
	int a1, a2, a3, a4;
	int b1, b2, b3, b4;
	int result;
	 
	printf("입력받은 네 자리의 2진수를 10진수로 출력하는 프로그램 입니다.\n");
	printf("첫번째 자리의 2진수 숫자를 입력하세요 : ");
	scanf("%d", &a1);
	printf("두번째 자리의 2진수 숫자를 입력하세요 : ");
	scanf("%d", &a2);
	printf("세번째 자리의 2진수 숫자를 입력하세요 : ");
	scanf("%d", &a3);
	printf("네번째 자리의 2진수 숫자를 입력하세요 : ");
	scanf("%d", &a4);
	b1 = a1 * 1;
	b2 = a2 * 2;
	b3 = a3 * 4;
	b4 = a4 * 8;
	result = b1 + b2 + b3 + b4;
	printf("입력받은 2진수 숫자를 10진수로 변환하면 %d 입니다. \n", result);
	system("pause");
	return 0;
 } 
