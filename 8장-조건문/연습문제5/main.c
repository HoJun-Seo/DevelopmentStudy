#include <stdio.h>
int main()
{
	int a, b, c;
	int result;
	
	printf("ù��° ������ �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�ι�° ������ �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("����° ������ �Է��ϼ��� : ");
	scanf("%d", &c);
	
	if(a > b) result = a;
	else if(a < b) result = b;
	else result = b;
	
	if(result > c) printf("result = %d\n", result);
	else if(result < c) 
	{
		result = c;
		printf("result = %d\n", result);
	}
	else {
		result = c;
		printf("result = %d\n", result);
	}
	if((a == b) && (a == c)) printf("�� ������ ���� �����ϴ�.\n");
	system("pause");
	return 0;
 } 
