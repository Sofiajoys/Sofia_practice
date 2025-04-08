#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student s1={"sofia",69,99.999};
    printf("name:%s rollno:%d marks:%.3f\n",s1.name,s1.rollno,s1.marks);
    return 0;
}