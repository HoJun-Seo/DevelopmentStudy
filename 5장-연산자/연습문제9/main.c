#include <stdio.h>
int main()
{
	float pound, kilo;
	
	printf("Pound -> kilogram ��ȯ ���α׷� �Դϴ�. \n");
	printf("��ȯ�ϰ��� �ϴ� �Ŀ�� ������ �Է��ϼ��� : ");
	scanf("%f", &pound);
	kilo = pound * 0.45;
	printf("�Է¹��� �Ŀ�� ������ ų�α׷����� ȯ���ϸ� %f kg �Դϴ�. \n", kilo);
	return 0; 
 } 
