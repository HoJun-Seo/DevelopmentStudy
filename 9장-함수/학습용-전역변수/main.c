#include <stdio.h>
int num; //���������� ���� ���� �ڵ����� 0���� �ʱ�ȭ �Ѵ�. 
void grow(void);

int main()
{
	printf("�Լ� ȣ�� �� : %d \n", num);
	
	grow();
	
	printf("�Լ� ȣ�� �� : %d \n", num);
	
	system("pause");
	return 0;
}

void grow(void)
{
	num = 60;
}
