#include <stdio.h>
int main()
{
	int i = 0, result = 0;
	int j = 1;
	int array[10];
	
	printf("10명의 학생들 성적의 총점과 평균을 구하는 프로그램 입니다. \n");
	while(j <= 10)
	{
		printf("%d 번째 학생의 성적을 입력하세요 : ", j);
		scanf("%d", &array[i]);
		result = result + array[i];
		i++;
		j++;
	}
	printf("학생들의 총점은 %d 점 이며 평균은 %.2lf 점 입니다. \n", result, (double)result/10);
	
	system("pause");
	return 0; 
 } 
