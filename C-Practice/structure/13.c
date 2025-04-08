#include<stdio.h>
struct point
{
    int x;
    int y;
};
int main()
{
    struct point p[5];
    for(int i=0;i<5;i++)
    {
        printf("cordinate:%d\n",i+1);
        printf("enter x axis:");
        scanf("%d",&p[i].x);
        printf("enter y axis:");
        scanf("%d",&p[i].y);
    printf("\n");
    }
    for(int i=0;i<5;i++)
    {
        printf("cordinate:%d\n",i+1);
        printf("x axis:%d\n",p[i].x);
        printf("y axis:%d",p[i].y);
    }
}