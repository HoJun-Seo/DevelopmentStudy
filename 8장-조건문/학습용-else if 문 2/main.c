#include <stdio.h>
int main()
{
	int num;
	
	printf("C언어 성적 입력 : ");
	scanf("%d", &num);
	
	if(num >= 95)
	printf("A+ 입니다. \n");
	
	else if(num >= 90)
	printf("A 입니다. \n");
	
	else if(num >= 85)
	printf("B+ 입니다. \n");
	
	else if(num >= 80)
	printf("B 입니다. \n");
	
	else
	printf("F 입니다. \n");
	
	system("pause");
	return 0;
}
