#include <stdio.h>
int main()
{
	float dollar, won;
	
	printf("��ȭ�� ȯ���� �޷��� ���� �Է��ϼ��� : ");
	scanf("%f", &dollar);
	won = dollar * 1180.500000;
	printf("���� ȯ���� �������� �޷��� ��ȭ�� ȯ���ϸ� %f �� �Դϴ�. \n", won);
	system("pause");
	return 0; 
 } 
