#include <stdio.h>
int main()
{
	int ascii;
	
	printf("아스키 코드 값을 입력 받아 해당하는 문자를 출력하는 프로그램 입니다.\n");
	printf("input = ");
	scanf("%d", &ascii);
	
	printf("입력한 코드에 해당하는 문자는 %c 입니다. \n", ascii);
	system("pause");
	return 0;
 } 
