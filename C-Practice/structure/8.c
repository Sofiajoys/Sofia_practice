#include<stdio.h>
struct student
{
    char name[20];
    int age,c;
};
int main()
{
    struct student s1;
    printf("enter name:");
    fgets(s1.name,20,stdin);
    printf("enter age");
    scanf("%d",&s1.age);
    printf("select an option:\n1:name\n2:age");
    scanf("%d",&s1.c);
    switch(s1.c){
        case 1:
          printf("enter a modified name");
          while((getchar())!='\n'&&getchar()!=EOF);
          fgets(s1.name,20,stdin);
          printf("modified name is:%s",s1.name);
          break;
        case 2:
          printf("enter a modified age");
          scanf("%d",&s1.age);
          printf("modified age is:%d",s1.age);
          break;
        default:
          printf("wrong i/p");
          break;
    }


}