#include <stdio.h>
int main()
{
	int num, result, remain;
	int n1, n2;
	
	while(1){
		printf("3�ڸ� �������� �Է��ϼ��� : ");
	    scanf("%d", &num);
	    result = num / 100;
	    if(result == 0) printf("�߸��� �Է��Դϴ�. \n");
	    else if(result >= 10) printf("�߸��� �Է��Դϴ�. \n");
	    else break;
	}
	if(result % 2 == 0) printf("%d : ¦�� \n", result);
	else printf("%d : Ȧ�� \n", result);
	
	result = num / 10;
	n2 = num % 10;
	n1 = result % 10;
	
	if(n1 % 2 == 0)printf("%d : ¦�� \n", n1);
	else printf("%d : Ȧ�� \n", n1);
	
	if(n2 % 2 == 0) printf("%d : ¦�� \n", n2);
	else printf("%d : Ȧ�� \n", n2);
	
	system("pause");
	return 0;
	
}
