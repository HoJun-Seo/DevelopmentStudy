#include <stdio.h>
int Add(int x, int y);
int Count();

int main()
{
	int a, b;
	int result, count = 0;
	while(count < 100){
		printf("���� �� ���� �Է��ϼ���(0 0 -> exit) : ");
	    scanf("%d %d", &a, &b);
	    if(a == 0 && b == 0) break;
	    result = Add(a, b);
	    count = Count();
	    printf("���� ��� : %d \n", result);
	}
	printf("�� ���� �� : %d \n", count);
	system("pause");
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}

int Count()
{
	static int count = 0;
	count += 1;
	return count;
}
