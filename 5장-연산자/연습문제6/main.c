#include <stdio.h>
int main()
{
	int human = 80; //������ �� ���� ��踦 �ǿ����� ��� 
	int one_day_cigar;
	int death, all_death; // �Ϸ翡 �پ�� ����� �� �پ�� ���� 
	
	printf("������ 100���� ����� ���� ������ ����ϴ� ���α׷� �Դϴ�.\n");
	printf("�� ����� �����̸� ������ �� ���� 20�Ⱓ ��踦 �ǿ����ϴ�.\n");
	printf("���� ����� ���� ��� �� ���Ǵ� ������ 2�о� �پ��ٰ� �����մϴ�.\n");
	printf("�Ϸ翡 ��� ��踦 �ǿ�� �ֽ��ϱ�? : ");
	scanf("%d", &one_day_cigar);
	death = one_day_cigar * 2;
	all_death = 7300 * death; // 7300 = 365 * 20
	all_death /= 525600; // 1�� = 525600�� 
	human -= all_death;
	printf("�� ����� �� %d ���� ������ �پ������� ������ %d �� ���� �� �� �ֽ��ϴ�. \n", all_death, human);
	system("pause");
	return 0; 
	
 } 
