#include<stdio.h>
int main(void)
{
	printf("문자 상수 %c %c %c 는 \n", 'a', 'b', 'c');
	printf("ASCII 코드 10진수로 %d %d %d \n", 'a', 'b', 'c');
	printf("ASCII 코드 16진수로 %x %x %x \n", 'a', 'b', 'c');
	
	printf("\n-----------------------------------------------\n");
	
	printf("문자 상수 %c %c %c 는 \n", '!', '@', '#');
	printf("ASCII 코드 10진수로 %d %d %d \n", '!', '@', '#');
	printf("ASCII 코드 16진수로 %d %d %d \n", '!', '@', '#');
	
	system("pause");
	return 0; 
}
