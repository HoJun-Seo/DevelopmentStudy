#include<stdio.h>
int main(void)
{
    int total = 0;
    int array[5] = {10, 30, 40, 30, 20};
    int* p = NULL;

     p = array;
     for(int i = 0; i < 5; i++){
         total = total + p[i];
     }

     printf("%d\n", total);

     return 0;
     
}