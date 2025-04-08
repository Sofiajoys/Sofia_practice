#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student s1={"sofia joys",24,100.0};
    printf("name:%s\n roll no:%d\n  marks:%f ",s1.name,s1.rollno,s1.marks);
}
