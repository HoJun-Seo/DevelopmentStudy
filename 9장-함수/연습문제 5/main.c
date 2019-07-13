#include <stdio.h>
int square(int x);
int cube(int x);
int quartic(int x);
int quintic(int x);

int main()
{
	int a;
	printf("숫자 1 부터 입력받은 정수 까지를 최대 5제곱 까지 출력하는 프로그램 입니다. \n");
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	printf("----------------------------------------------------------------------------------\n");
	printf("  INTEGER		SQUARE		CUBE		QUARTIC		QUINTIC \n");
	printf("----------------------------------------------------------------------------------\n");
	while(1)
	{
		static int n = 1;
		if(n > a) break;
		int result1, result2, result3, result4;
		result1 = square(n);
		result2 = cube(n);
		result3 = quartic(n);
		result4 = quintic(n);
		printf("  \t%d\t\t      %d\t\t    %d\t\t       %d\t       %d\n", n, result1, result2, result3, result4);
		n += 1;
	 } 
	system("pause");
	return 0;
 }
 
int square(int x)
{
	int count = 1;
	int result = x;
	while(1){
		if(count == 0) break;
		result *= x;
		count -= 1;
	}
 }
 
int cube(int x)
{
 	int count = 2;
 	int result = x;
 	while(1){
 		if(count == 0) break;
 		result *= x;
 		count -= 1;
	}
}

int quartic(int x)
{
  	int count = 3;
  	int result = x;
 	while(1){
 		if(count == 0) break;
 		result *= x;
 		count -= 1;
	}
}
   
int quintic(int x)
{
   	int count = 4;
   	int result = x;
 	while(1){
 		if(count == 0) break;
 		result *= x;
 		count -= 1;
	}
} 
