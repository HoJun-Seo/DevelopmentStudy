#include <stdio.h>
int main()
{
	const int year = 2010;
	const int age1 = 20;
	const int age2 = 18;
	const int birth1 = 1990;
	const int birth2 = 1992;
	
	printf("올해는 %d년 입니다. \n", year);
	printf("내 나이는 %d살 입니다. \n", age1);
	printf("나는 %d년에 태어나 %d번째 해가 되었습니다. \n", birth1, age1);
	printf("내 동생의 나이는 %d살 입니다. \n", age2);
	printf("내 동생은 %d년에 태어나 %d번째 해가 되었습니다. \n", birth2, age2);
	
	system("pause");
	return 0; 
 } 
