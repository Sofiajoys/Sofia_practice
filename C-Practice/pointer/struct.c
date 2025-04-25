#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int marks;
}s1;
int main()
{
    struct student s1={"sofia",5,20};
    struct student *p=&s1;
    printf("name: %s,roll no: %d,marks: %d",p->name,p->rollno,p->marks);
}
