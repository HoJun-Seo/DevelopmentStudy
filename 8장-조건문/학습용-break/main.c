#include <stdio.h>
int main()
{
	char ch;
	
	printf("���ڸ� �Է��ϼ���(q�� �Է��ϸ� ����) : ");
	for( ; ; )
	{
		scanf("%c", &ch);
		if(ch == 'q')
		break;
	}
	printf("�ݺ����� �����մϴ�. \n");
	system("pause");
	return 0;
 } 
