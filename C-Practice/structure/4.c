#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
}s1,s2;
int main()
{
    struct student s1={5,"abc",50.5};
    struct student s2={6,"xyz",30.2};
    printf("rollno:%d name:%s marks%.1f\n",s1.rollno,s1.name,s1.marks);
    printf("rollno:%d name:%s marks%.1f\n",s2.rollno,s2.name,s2.marks);
}