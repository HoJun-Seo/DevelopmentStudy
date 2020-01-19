#include<stdio.h>
int main(void)
{
    char c = 3;
    double d = 3.1;

    void* vx = NULL;
    vx = &c; //char 형 변수 c 의 주소를 저장한다.
    printf("vx의 주소값 : %x \n", vx);
    //printf("vx의 값 : %d \n", *vx); //에러 - vx는 void형 포인터 변수, 즉 다양한 자료형의 주소를 저장할 수 있다.
                                        //그러나 또한 주소만을 저장하는 것이 가능하다.(값을 저장하거나 변경할 수 없다.)
    printf("*vx의 값 : %d \n", *(char*)vx); //(char*) 으로 강제 형변환을 수행함으로서 에러를 수정한다.


    vx = &d;//double 형 변수 d 의 주소를 저장한다.
    printf("vx의 주소값 : %x \n", vx);
    //printf("vx의 값 : %lf \n", *vx); //에러
    printf("*vx의 값 : %lf \n", *(double*)vx);//(double*) 으로 강제 형변환 수행

    return 0;
}