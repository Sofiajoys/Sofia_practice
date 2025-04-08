#include<stdio.h>
struct car
{
    char companyname[20];
    int seater;
    float price;
}c1;
int main()
{
    printf("enter company of a car: ");
    fgets(c1.companyname,20,stdin);
    printf("how many seater: ");
    scanf("%d",&c1.seater);
    printf("enter price: ");
    scanf("%f",&c1.price);
    printf("company name: %s\n",c1.companyname);
    printf("seater: %d\n",c1.seater);
    printf("price: %.1f\n",c1.price);
    return 0;
}