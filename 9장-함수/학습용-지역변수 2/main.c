#include <stdio.h>
int main()
{
	int i = 0;
	//int total = 0;
	
	for(i = 1; i < 3; i++)
	{
		int total = 0; //�������� total ���� 
		total = total + i;
	}
	
	if(total < 10) //���� total �� for �� �߰�ȣ �ȿ����� �������� �μ� �����ϰ� for���� ������ ���� �޸𸮿��� �Ҹ�Ǳ� ������ total ������ ã�� ���ϰ� ������ �߻��Ѵ�. 
	{
		printf("total ���� %d �Դϴ�. \n", total);
	}
	
	system("pause");
	return 0;
 } 
