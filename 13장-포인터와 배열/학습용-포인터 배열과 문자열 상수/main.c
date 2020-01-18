#include<stdio.h>
int main(void)
{
    char* p = "Good morning";
    char* q = "C-language";
    char* array[2] = {"Good morning", "C-language"};

    printf("%s \n", p);
    printf("%s \n", q);
    printf("---------------------\n");

    printf("%s \n", array[0]);
    printf("%s \n", array[1]);
    printf("---------------------\n");

    printf("%s \n", p + 5);
    printf("%s \n", q + 2);
    printf("---------------------\n");

    printf("%s \n", array[0] + 5);
    printf("%s \n", array[1] + 2);

    return 0;

}