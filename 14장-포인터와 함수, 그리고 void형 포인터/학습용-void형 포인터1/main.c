#include<stdio.h>
int main(void)
{
    char c = 3;
    double d = 3.1;

    void* vx = NULL;
    vx = &c; //char �� ���� c �� �ּҸ� �����Ѵ�.
    printf("vx�� �ּҰ� : %x \n", vx);
    //printf("vx�� �� : %d \n", *vx); //���� - vx�� void�� ������ ����, �� �پ��� �ڷ����� �ּҸ� ������ �� �ִ�.
                                        //�׷��� ���� �ּҸ��� �����ϴ� ���� �����ϴ�.(���� �����ϰų� ������ �� ����.)
    printf("*vx�� �� : %d \n", *(char*)vx); //(char*) ���� ���� ����ȯ�� ���������μ� ������ �����Ѵ�.


    vx = &d;//double �� ���� d �� �ּҸ� �����Ѵ�.
    printf("vx�� �ּҰ� : %x \n", vx);
    //printf("vx�� �� : %lf \n", *vx); //����
    printf("*vx�� �� : %lf \n", *(double*)vx);//(double*) ���� ���� ����ȯ ����

    return 0;
}