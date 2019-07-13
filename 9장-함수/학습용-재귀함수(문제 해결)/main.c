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
 	
 	printf("셀프 서비스 %d 회 \n", i);
 	i = i + 1;
 	self_service();
 }
