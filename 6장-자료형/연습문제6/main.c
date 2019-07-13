#include <stdio.h>
#define pi 3.14
int main()
{
	 double r, v, t;
	 double circle;
	 
	 printf("트랙을 달리는 자동차가 트랙 한 바퀴를 달리는 데 걸리는 시간을 출력하는 프로그램 입니다. \n");
	 printf("트랙의 반지름 길이를 입력하세요(km) : ");
	 scanf("%lf", &r);
	 printf("자동차의 속력을 입력하세요(km/h) : ");
	 scanf("%lf", &v);
	 
	 circle = 2 * pi * r;
	 t = circle / v;
	 
	 printf("자동차가 트랙을 한 바퀴 완주하는데 걸리는 시간 : %.3lf \n", t);
	 system("pause");
	 return 0; 
 } 
