#include <stdio.h>
int main()
{
	int a,b;
	
	printf("�ΰ��� ������ �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	
	if(a > b) printf("ū ���� %d �Դϴ�. \n", a);
	else if(a == b) printf("�� ���� �����ϴ�. \n");
	else printf("ū ���� %d �Դϴ�. \n", b);
	
	system("pause");
	return 0; 
}
