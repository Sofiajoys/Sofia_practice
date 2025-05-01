#include<stdio.h>
struct student
{
    int age;
    char name[20];
};
int main(void)
{
struct student s1[5]={20,21,22,23,24};
for(int i=0;i<5;i++)
  printf("%d",s1[5].age);
  printf("\n");
printf("student\n%d%s",s1[5].age,s1[5].name);
}
