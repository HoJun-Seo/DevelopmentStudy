#include<stdio.h>
int main(void)
{
	printf("%d \n", 2147483647); // 양수 표현 최대 범위 이므로 숫자 그대로 출력
	printf("%d \n", 2147483650); // 양수 표현 최대 범위를 초과 하였으므로 음수 최대 범위 -2147483646 출력
	printf("%u \n", 4294967295); // %d 양수 표현 범위의 2배(단, 음수 표현 불가능)
	system("pause");
	return 0; 
}
