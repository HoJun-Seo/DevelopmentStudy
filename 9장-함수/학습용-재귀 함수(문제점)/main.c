#include <stdio.h>
void self_service(void);

int main()
{
	self_service();
	
	system("pause");
	return 0;
 }
 
 void self_service(void)
 {
 	printf("���� ���� \n");
 	self_service();
  } 
