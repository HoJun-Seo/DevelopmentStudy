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
 	static int i = 1;
 	
 	if(i > 5) return;
 	
 	printf("���� ���� %d ȸ \n", i);
 	i = i + 1;
 	self_service();
 }
