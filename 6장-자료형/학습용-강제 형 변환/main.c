#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 3;
	
	double result;
	
	result = num1 / num2;
	printf("��� : %lf \n", result); //������ �ս�(�������� ������)
	
	result = (double)num1 / num2;
	printf("��� : %lf \n", result); //���� �� ��ȯ - �Ǽ���/������
	
	result = num1 / (double)num2;
	printf("��� : %lf \n", result); //���� �� ��ȯ - ������/�Ǽ���
	
	result = (double)num1 / (double)num2;
	printf("��� : %lf \n", result); //���� �� ��ȯ - �Ǽ���/�Ǽ���
	
	system("pause");
	return 0; 
 } 
