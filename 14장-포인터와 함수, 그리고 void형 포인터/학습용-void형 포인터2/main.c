#include<stdio.h>
void main()
{
    char c = 3;
    double d = 3.1;

    void* vx = NULL;

    vx = &c;
    printf("vx가 저장한 주소 : %x \n", vx);
    printf("*vx의 값 : %d \n", *(char*)vx);

    vx = &d;
    printf("vx가 저장한 주소 : %x \n", vx);
    printf("*vx의 값 : %lf \n", *(double*)vx);

    vx = &c;
    *(char*)vx = 5; //강제 형변환을 통한 값 변환
    printf("c 가 저장한 값 : %d \n", c);
    printf("*vx의 값 : %d \n", *(char*)vx);

    vx = &d;
    *(double*)vx = 5.1; //강제 형변환을 통한 값 변환
    printf("d 가 저장한 값 : %lf \n", d);
    printf("*vx의 값 : %lf \n", *(double*)vx);
}