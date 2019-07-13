#include <stdio.h>
int main()
{
	char ch;
	
	printf("문자를 입력하세요(q를 입력하면 종료) : ");
	for( ; ; )
	{
		scanf("%c", &ch);
		if(ch == 'q')
		break;
	}
	printf("반복문을 종료합니다. \n");
	system("pause");
	return 0;
 } 
