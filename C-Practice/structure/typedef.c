#include<stdio.h>
typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}ss;
int main()
{
    ss stu1={5,"abc",50.5};
    ss stu2={6,"xyz",30.2};
    printf("rollno:%d name:%s marks%.1f\n",stu1.rollno,stu1.name,stu1.marks);
    printf("rollno:%d name:%s marks%.1f\n",stu2.rollno,stu2.name,stu2.marks);
}