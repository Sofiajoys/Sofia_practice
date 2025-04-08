#include<stdio.h>
struct student
{
    char name[20];
    int age;
}s1;
int main()
{
    printf("enter age:");
    scanf("%d",&s1.age);
    printf("enter a string:");
    while((getchar())!='\n'&&getchar()!=EOF);
    fgets(s1.name,20,stdin);
    printf("entered age is %d",s1.age);
    printf("entered string is: %s",s1.name);
}