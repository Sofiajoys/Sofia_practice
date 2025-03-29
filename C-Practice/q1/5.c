#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temp in faurenheit:");
    scanf("%f",&f);
    c=((f-32)*(5/9));
    printf("temp in celsius:%f",c);
    return 0;
}