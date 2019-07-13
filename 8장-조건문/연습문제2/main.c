#include <stdio.h>
int main()
{
	int num, result, remain;
	int n1, n2;
	
	while(1){
		printf("3자리 십진수를 입력하세요 : ");
	    scanf("%d", &num);
	    result = num / 100;
	    if(result == 0) printf("잘못된 입력입니다. \n");
	    else if(result >= 10) printf("잘못된 입력입니다. \n");
	    else break;
	}
	if(result % 2 == 0) printf("%d : 짝수 \n", result);
	else printf("%d : 홀수 \n", result);
	
	result = num / 10;
	n2 = num % 10;
	n1 = result % 10;
	
	if(n1 % 2 == 0)printf("%d : 짝수 \n", n1);
	else printf("%d : 홀수 \n", n1);
	
	if(n2 % 2 == 0) printf("%d : 짝수 \n", n2);
	else printf("%d : 홀수 \n", n2);
	
	system("pause");
	return 0;
	
}
