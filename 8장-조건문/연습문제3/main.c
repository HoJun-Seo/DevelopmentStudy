#include <stdio.h>
int main()
{
	int score;
	
	while(1)
	{
		printf("점수를 입력하세요 : ");
	    scanf("%d", &score);
		if(score > 100) printf("잘못된 입력입니다. \n");
		else break;
	}
	score = score / 10;
	switch(score)
	{
		case 9 :
			printf("A \n");
			break;
		case 8 :
			printf("B \n");
			break;
			
		default :
			printf("F \n");
			break;
	}
	system("pause");
	return 0;
}
