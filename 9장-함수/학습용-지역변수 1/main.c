#include <stdio.h>
void func_A(void);
int main()
{
	int aaa = 10; //main() 함수의 지역변수 aaa 
	printf("main() 함수의 aaa 의 값 : %d \n", aaa);
	
	func_A();
	
	system("pause");
	return 0;
 } 
 
 void func_A(void)
 {
 	int aaa = 20; //func_A() 함수의 지역변수 aaa 
 	int bbb = 30; //func_A() 함수의 지역변수 bbb
 	
 	printf("func_A() 함수의 aaa 값 : %d \n", aaa);
 	printf("func_A() 함수의 bbb 값 : %d \n", bbb);
 	return;
 }
