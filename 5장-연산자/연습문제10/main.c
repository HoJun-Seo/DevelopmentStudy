#include <stdio.h>
int main()
{
	int feet;
	float cent, met;
	
	printf("�� ��� ���α׷� �Դϴ�. \n");
	printf("���� �������� ���� �� ��Ʈ ������ �ֳ���? : ");
	scanf("%d", &feet);
	cent = feet * 30.48;
	met = cent / 100;
	printf("���� �������� ������ ���� ���ͷ� ȯ���ϸ� %f ���� �Դϴ�. \n", met);
	return 0; 
 } 
