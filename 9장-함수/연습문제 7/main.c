#include <stdio.h>
int Alpha(char ch);

int main()
{
	char ch1;
	int result;
	printf("알파벳을 입력하세요 : ");
	scanf("%c", &ch1);
	result = Alpha(ch1);
	if(result == 0){
		printf("값을 잘못 입력 하셨습니다. \n");
		printf("프로그램을 종료합니다. \n");
		system("pause");
		return 0;
	}
	printf("입력한 %c 는 알파벳 순서로 %d 번째 문자 입니다. \n", ch1, result);
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
