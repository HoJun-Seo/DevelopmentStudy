#include <stdio.h>
int max(int a, int b)
{
	if(a > b)
	return a;
	else return b;
 } 
 
 int main()
 {
 	int i, j;
 	int k;
 	
 	printf("숫자 두개를 입력하세요 : ");
 	scanf("%d %d", &i, &j);
	 
	k = max(i, j);
	printf("%d 와 %d 중 큰 수는 %d 입니다. \n", i, j, k);
	
	system("pause");
	return 0; 
 }
