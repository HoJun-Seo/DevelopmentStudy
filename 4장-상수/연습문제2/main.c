#include <stdio.h>
int main()
{
	const int year = 2010;
	const int age1 = 20;
	const int age2 = 18;
	const int birth1 = 1990;
	const int birth2 = 1992;
	
	printf("���ش� %d�� �Դϴ�. \n", year);
	printf("�� ���̴� %d�� �Դϴ�. \n", age1);
	printf("���� %d�⿡ �¾ %d��° �ذ� �Ǿ����ϴ�. \n", birth1, age1);
	printf("�� ������ ���̴� %d�� �Դϴ�. \n", age2);
	printf("�� ������ %d�⿡ �¾ %d��° �ذ� �Ǿ����ϴ�. \n", birth2, age2);
	
	system("pause");
	return 0; 
 } 
