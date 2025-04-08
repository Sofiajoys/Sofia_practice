#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
    char dob[20];
};
int main()
{
    struct student s1={"sofia",9,35,"24-01-2004"};
    printf("name: %s\nrollno: %d\nmarks: %f\ndob: %s",s1.name,s1.rollno,s1.marks,s1.dob);
}

