#include <stdio.h>
void count(void);

int main()
{
	count();
	count();
	count();
	system("pause");
	return 0;
 }
 
 void count(void)
 {
 	static int x = 0; //���� ����, �ʱ�ȭ�� �ѹ� �� ���� 
 	int y = 0; //���� ����, �ʱ�ȭ�� �Ź� ���� 
 	
 	x = x + 1;
 	y = y + 1;
 	
 	printf("x �� : %d, y �� : %d \n", x, y);
  } 
