#include <stdio.h>
int main()
{
	int age;
	
	printf("���� �Է� : ");
	scanf("%d", &age);
	
	if(age >= 15 && age <= 100)
	printf("ȸ�� ������ �����մϴ�. \n");
	else
	printf("ȸ�� ������ �Ұ��� �մϴ�.\n");
	
	system("pause");
	return 0; 
 } 
