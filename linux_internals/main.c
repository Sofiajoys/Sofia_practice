#include<stdio.h>
#include"header.h"
int main()
{
    int op,a,b;
    printf("choose a operation");
    printf("1: addition\n2: subtraction\n3: multiplication\n4: division\n");
    scanf("%d",&op);
    switch(op){
        case 1:
        printf("enter two operands:");
        scanf("%d%d",&a,&b);
        printf("result: %d\n",add(a,b));
        break;

        case 2:
        printf("enter two operands:");
        scanf("%d%d",&a,&b);
        printf("result: %d\n",sub(a,b));
        break;

        case 3:
        printf("enter two operands:");
        scanf("%d%d",&a,&b);
        printf("result: %d\n",mul(a,b));
        break;

        case 4:
        printf("enter two operands:");
        scanf("%d%d",&a,&b);
        if (b == 0)
                printf("Error\n");
        else
                printf("Result: %f\n", div(a, b));
        break;

	default:
        printf("Invalid operation selected.\n");


    }
       return 0;


}
