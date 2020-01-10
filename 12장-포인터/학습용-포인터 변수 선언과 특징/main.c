#include<stdio.h>
int main(void){
    char* cp = NULL;
    int* ip = NULL;

    printf("%x %x %x\n", &cp, cp, *&cp);
    printf("%x %x %x\n", &ip, ip, *&ip);

    printf("%d %d\n", sizeof(char*), sizeof(int*));
    printf("%d %d\n", sizeof(cp), sizeof(ip));

    return 0;
}