#include <stdio.h>
int main()
{
	int hour, min, sec;
	int hour_sec, min_sec;
	int total;
	
	printf("���� �ð��� �Է¹޾� 00�� 00�� 00�� �������� �� �ʰ� �귶���� ����ϴ� ���α׷� �Դϴ�. \n");
	printf("���� �ø� �Է��ϼ��� : ");
	scanf("%d", &hour);
	hour_sec = hour * 3600;
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &min);
	min_sec = min * 60;
	printf("���� �ʸ� �Է��ϼ��� : ");
	scanf("%d", &sec);
	
	 total = hour_sec + min_sec + sec;
	 printf("00�� 00�� 00�ʸ� �������� ���� %d �ʰ� �귶���ϴ�. \n");
	 system("pause");
	 return 0;
 } 
