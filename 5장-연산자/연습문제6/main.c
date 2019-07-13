#include <stdio.h>
int main()
{
	int human = 80; //성인이 된 이후 담배를 피웠음을 고려 
	int one_day_cigar;
	int death, all_death; // 하루에 줄어든 수명과 총 줄어든 수명 
	
	printf("수명이 100년인 사람의 남은 수명을 계산하는 프로그램 입니다.\n");
	printf("이 사람은 흡연자이며 성인이 된 이후 20년간 담배를 피웠습니다.\n");
	printf("수명 계산을 위해 담배 한 개피당 수명이 2분씩 줄어든다고 가정합니다.\n");
	printf("하루에 몇개의 담배를 피우고 있습니까? : ");
	scanf("%d", &one_day_cigar);
	death = one_day_cigar * 2;
	all_death = 7300 * death; // 7300 = 365 * 20
	all_death /= 525600; // 1년 = 525600분 
	human -= all_death;
	printf("이 사람은 총 %d 년의 수명이 줄어들었으며 앞으로 %d 살 까지 살 수 있습니다. \n", all_death, human);
	system("pause");
	return 0; 
	
 } 
