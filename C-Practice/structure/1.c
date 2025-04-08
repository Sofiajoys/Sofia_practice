#include<stdio.h>
struct student
{
    int m[50];
    char name[20];
    int age;
    float avg;
};
int main(void)
{
    struct student s1 = {{1,2,3,4,5},"abc"};
    printf("marks of the student");
    for(int i=0;i<5;i++)
      printf("%d",s1.m[i]);
    printf("\n");
    printf("%s%d%f",s1.name,s1.age,s1.avg);
}