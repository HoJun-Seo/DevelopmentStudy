#include <stdio.h>
int main()
{
	int a1, a2, a3, a4;
	int b1, b2, b3, b4;
	int result;
	 
	printf("�Է¹��� �� �ڸ��� 2������ 10������ ����ϴ� ���α׷� �Դϴ�.\n");
	printf("ù��° �ڸ��� 2���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a1);
	printf("�ι�° �ڸ��� 2���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a2);
	printf("����° �ڸ��� 2���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a3);
	printf("�׹�° �ڸ��� 2���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a4);
	b1 = a1 * 1;
	b2 = a2 * 2;
	b3 = a3 * 4;
	b4 = a4 * 8;
	result = b1 + b2 + b3 + b4;
	printf("�Է¹��� 2���� ���ڸ� 10������ ��ȯ�ϸ� %d �Դϴ�. \n", result);
	system("pause");
	return 0;
 } 
