#include <stdio.h>
int Alpha(char ch);

int main()
{
	char ch1;
	int result;
	printf("���ĺ��� �Է��ϼ��� : ");
	scanf("%c", &ch1);
	result = Alpha(ch1);
	if(result == 0){
		printf("���� �߸� �Է� �ϼ̽��ϴ�. \n");
		printf("���α׷��� �����մϴ�. \n");
		system("pause");
		return 0;
	}
	printf("�Է��� %c �� ���ĺ� ������ %d ��° ���� �Դϴ�. \n", ch1, result);
	system("pause");
	return 0;
}

int Alpha(char ch)
{
	char ch2 = 'a';
	char ch3 = 'A';
	if (ch >= 97 && ch <= 122) return ch - ch2 + 1;
	else if (ch >= 65 && ch <= 90) return ch - ch3 + 1;
	else return 0;
}
