#include <stdio.h>
void self_service(int n);

int main()
{
	int a = 1;
	self_service(a);
	
	system("pause");
	return 0;
 } 
 
 void self_service(int n)
 {
 	if(n > 5) return;
 	
 	printf("���� ���� %d ȸ \n", n);
 	self_service(n+1);
 }
