#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char c[20];
    float marks;
};
void func(struct student s1)
{
    printf("roll: %d\n",s1.roll);
    printf("c: %s\n",s1.c);
    printf("marks: %.2f\n",s1.marks);
}
int main()
{
    struct student s1;
    s1.roll=5;
    strcpy(s1.c,"sofia");
    s1.marks=35;

    func(s1);
    return 0;
}