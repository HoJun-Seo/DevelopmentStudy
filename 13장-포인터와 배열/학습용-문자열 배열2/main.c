#include<stdio.h>
int main(void)
{
    char array[] = {'A', 'B', 'C', 'D', '\0'}; //배열 끝에 \0(NULL) 을 삽입했기 때문에 문자열로 인식한다.

    printf("%c %c %c %c %c\n", array[0], array[1], array[2], array[3], array[4]);
    printf("%d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);

    return 0;
}