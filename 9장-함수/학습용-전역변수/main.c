#include <stdio.h>
int num; //전역변수는 변수 값을 자동으로 0으로 초기화 한다. 
void grow(void);

int main()
{
	printf("함수 호출 전 : %d \n", num);
	
	grow();
	
	printf("함수 호출 후 : %d \n", num);
	
	system("pause");
	return 0;
}

void grow(void)
{
	num = 60;
}
