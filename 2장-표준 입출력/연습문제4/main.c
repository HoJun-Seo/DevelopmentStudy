#include<stdio.h>
int main(void)
{
	int r;
	double pi = 3.14;
	
	printf("���� �������� �̿��Ͽ� ���� ���̸� ���ϴ� ���α׷� �Դϴ�.\n");
	printf("�������� ���̸� �Է��ϼ��� : ");
	scanf("%d", &r);
	printf("���� ���̴� %lf �Դϴ�.\n", r*r*pi);
	system("pause");
	return 0;
}
