#include <stdio.h>
void rabbit (int n, int m);

int main()
{
	int a = 1;
	int month = 1;
	while(month < 3){
		printf("%d �� : %d ���� \n", month, a);
		month += 1;
	}
	rabbit(a, month);
	
	system("pause");
	return 0;	
 }
 
 void rabbit (int n, int m)
 {
 	int result;
 	int n1 = n;
 	while(1)
 	{
 		if(m > 12) break;
 		result = n + n1;
 		n1 = n;
 		n = result;
 		printf("%d �� : %d ���� \n", m, result);
 		m = m + 1;
	 }
	 return;
 }
