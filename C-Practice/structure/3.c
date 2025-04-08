#include<stdio.h>
struct student
{
    char name[20];
    int age;
    float marks;
};
int main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the name of the student%d:",i+1);
        scanf("%s",s[i].name);
        printf("enter the age of the student%d:",i+1);
        scanf("%d",&s[i].age);
        printf("enter the marks of the student%d:",i+1);
        scanf("%f",&s[i].marks);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("\nstudent %d details:\n",i+1);
        printf("name of the student:%s\n",s[i].name);
        printf("age of the student:%d\n",s[i].age);
        printf("marks of the student:%f\n",s[i].marks);
    }
    return 0;
}