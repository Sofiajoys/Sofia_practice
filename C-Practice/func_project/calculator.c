#include<stdio.h>
#include<stdlib.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int op,a,b;
    while(1)
    {
    printf("choose an option:\n1.add\n2.sub\n3.mul\n4.exit\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("enter two operands: ");
        scanf("%d%d",&a,&b);
        printf("result: %d",add(a,b));
        break;

        case 2:
        printf("enter two operands: ");
        scanf("%d%d",&a,&b);
        printf("result: %d",sub(a,b));
        break;

        case 3:
        printf("enter two operands: ");
        scanf("%d%d",&a,&b);
        printf("result: %d",mul(a,b));
        break;

        case 4:
        printf("thank you\n");
        return 0;
        break;

        default:
        printf("invalid operation.\n");
    }
}
}