#include <stdio.h>
int main()
{
	int a,b;
	
	printf("두개의 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	
	if(a > b) printf("큰 수는 %d 입니다. \n", a);
	else if(a == b) printf("두 수는 같습니다. \n");
	else printf("큰 수는 %d 입니다. \n", b);
	
	system("pause");
	return 0; 
}
