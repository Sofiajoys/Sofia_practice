#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
}s1,s2;
int main()
{
    struct student s1={5,"abc",20.4};
    struct student s2=s1;
    printf("rollno:%d name:%s marks:%.1f",s2.rollno,s2.name,s2.marks);
}