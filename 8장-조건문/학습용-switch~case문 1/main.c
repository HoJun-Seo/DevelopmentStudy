#include <stdio.h>
int main(void)
{
	int num;
	
	printf("�� �� ����ġ�� �����ðڽ��ϱ�? : ");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1 :
			printf("������ ����\n");
			break;
			
		case 2 :
			printf("������ ����\n");
			break;
			
		case 3 :
			printf("���峭 ����ġ �Դϴ�. \n");
			break;
			
		default :
			printf("����ġ ���� : ����ġ�� 1�� ~ 3�� ������ �ֽ��ϴ�. \n");
	 } 
	 system("pause");
	 return 0;
}
