#include <stdio.h>
int main()
{
	int i = 0;
	//int total = 0;
	
	for(i = 1; i < 3; i++)
	{
		int total = 0; //지역변수 total 선언 
		total = total + i;
	}
	
	if(total < 10) //변수 total 은 for 문 중괄호 안에서만 지역변수 로서 존재하고 for문이 끝나는 순간 메모리에서 소멸되기 때문에 total 변수를 찾지 못하고 에러가 발생한다. 
	{
		printf("total 값은 %d 입니다. \n", total);
	}
	
	system("pause");
	return 0;
 } 
