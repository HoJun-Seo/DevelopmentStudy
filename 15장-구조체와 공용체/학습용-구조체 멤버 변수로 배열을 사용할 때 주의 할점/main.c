#include<stdio.h>
#include<string.h>
struct student
{
    char no[10];
    char name[20];
};

int main(void)
{
    int i = 0;
    struct student stu;

    //stu.no = "20101323"; 배열의 시작주소에 문자열을 저장하고 있으므로 에러가 발생한다.
    //stu.name = "Park";
    strcpy(stu.no, "20101323");
    strcpy(stu.name, "Park");
    printf("학번 : %s, 이름 : %s \n", stu.no, stu.name);

    return 0;
}