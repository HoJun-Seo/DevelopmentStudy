#include <stdio.h>
int main(void)
{
	char num1 = -129; //�ּڰ� ���� -1 ��ŭ ���� �� ���� 
	char num2 = 128; //�ִ� ���� +1 ��ŭ ū �� ���� 
	
	printf("%d \n", num1);
	printf("%d \n", num2);
	
	num1 = -130; //�ּڰ� ���� -2 ��ŭ ���� �� ���� 
	num2 = 129; //�ִ� ���� +2 ��ŭ ū �� ����
	
	printf("%d \n", num1);
	printf("%d \n", num2);
	
	system("pause");
	return 0;
	 
 } 
