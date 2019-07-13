#include<stdio.h>
int main(void)
{
	char c = '*';
	printf("  %c  \n\n", c);
	printf(" %c%c%c \n\n", c, c, c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);
    printf(" %c%c%c \n\n", c, c, c);
    printf("  %c  \n", c);
    system("pause");
    return 0;
 } 
