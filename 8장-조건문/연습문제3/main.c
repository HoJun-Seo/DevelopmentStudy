#include <stdio.h>
int main()
{
	int score;
	
	while(1)
	{
		printf("������ �Է��ϼ��� : ");
	    scanf("%d", &score);
		if(score > 100) printf("�߸��� �Է��Դϴ�. \n");
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
