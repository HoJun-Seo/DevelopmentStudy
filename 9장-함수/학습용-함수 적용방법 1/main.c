#include <stdio.h>
int max(int a, int b)
{
	if(a > b)
	return a;
	else return b;
 } 
 
 int main()
 {
 	int i, j;
 	int k;
 	
 	printf("���� �ΰ��� �Է��ϼ��� : ");
 	scanf("%d %d", &i, &j);
	 
	k = max(i, j);
	printf("%d �� %d �� ū ���� %d �Դϴ�. \n", i, j, k);
	
	system("pause");
	return 0; 
 }
