#include <stdio.h>
int sum(void);
int input(void);
void output(int x);

int main()
{
	int result;
	printf("---프로그램 시작---\n");
	printf("정수 한 개를 입력하세요 : ");
	
	result = sum();
	output(result);
	
	system("pause");
	return 0;
 } 
 
 int sum(void)
 {
 	int i = 0, total = 0, num = 0;
 	num = input();
 	
 	for(i = 1; i <= num; i++)
 	{
 		total = total + i;
	 }
	 return total;
 }
 
 int input(void)
 {
 	int val;
 	scanf("%d", &val);
 	return val;
 }
 
 void output(int x)
 {
 	printf("결과 : %d \n", x);
 	return;
 }
