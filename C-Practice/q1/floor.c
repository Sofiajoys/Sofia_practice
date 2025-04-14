#include<math.h>
#include<stdio.h>
int main()
{
    float x=5.6;
    float y,z;
    y=floor(x);
    printf("floor value: %.2f\n",y);
    z=ceil(x);
    printf("ceil value: %.2f",z);
    return 0;
}